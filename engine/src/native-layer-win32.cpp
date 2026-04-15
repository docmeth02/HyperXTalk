/* Copyright (C) 2015 LiveCode Ltd.
 
 This file is part of LiveCode.
 
 LiveCode is free software; you can redistribute it and/or modify it under
 the terms of the GNU General Public License v3 as published by the Free
 Software Foundation.
 
 LiveCode is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 for more details.
 
 You should have received a copy of the GNU General Public License
 along with LiveCode.  If not see <http://www.gnu.org/licenses/>.  */

#include "prefix.h"

#include "globdefs.h"
#include "filedefs.h"
#include "objdefs.h"
#include "parsedef.h"


#include "util.h"
#include "mcerror.h"
#include "sellst.h"
#include "stack.h"
#include "card.h"
#include "image.h"
#include "widget.h"
#include "param.h"
#include "osspec.h"
#include "cmds.h"
#include "scriptpt.h"
#include "hndlrlst.h"
#include "debug.h"
#include "redraw.h"
#include "font.h"
#include "chunk.h"
#include "group.h"
#include "graphicscontext.h"

#include "graphics_util.h"

#include "globals.h"
#include "context.h"

#include "native-layer-win32.h"

// SetWindowSubclass / RemoveWindowSubclass / DefSubclassProc
#include <commctrl.h>
#pragma comment(lib, "comctl32.lib")

// Forward declaration — defined later in this file.
static void HXTCefLog(const char *p_fmt, ...);

// Window property names used to store the old WndProc pointer and the layer
// pointer on Chrome_WidgetWin_0.  SetProp/GetProp are cross-thread safe,
// unlike SetWindowSubclass which requires the caller to be on the window's
// owning thread.
static const wchar_t k_hxt_old_proc_prop[] = L"HXTCefOldProc";
static const wchar_t k_hxt_layer_prop[]    = L"HXTCefLayer";


MCNativeLayerWin32::MCNativeLayerWin32(MCObject *p_object, HWND p_view) :
	m_hwnd(p_view),
	m_cached(NULL),
	m_viewport_hwnd(nil),
	m_cef_target_width(0),
	m_cef_target_height(0),
	m_cef_subclassed(false),
	m_render_visible(false)
{
	m_object = p_object;
}

MCNativeLayerWin32::~MCNativeLayerWin32()
{
	// Restore the original WndProc on Chrome_WidgetWin_0 before the window
	// hierarchy is torn down, to prevent MCCefWidgetWndProc from being called
	// with a dangling 'this' pointer.  Also clear the layer prop immediately
	// so that even if we miss the window (already destroyed), there's no stale
	// pointer left behind.
	if (m_cef_subclassed && m_hwnd != NULL)
	{
		HWND t_cef_widget = GetWindow(m_hwnd, GW_CHILD);
		if (t_cef_widget != NULL)
		{
			// Clear the layer prop first so the WndProc stops enforcing sizes
			// even if the RestoreWindowLong below races with a message.
			RemovePropW(t_cef_widget, k_hxt_layer_prop);
			WNDPROC t_old_proc =
			    (WNDPROC)(LONG_PTR)GetPropW(t_cef_widget, k_hxt_old_proc_prop);
			if (t_old_proc != NULL)
			{
				SetWindowLongPtr(t_cef_widget, GWLP_WNDPROC, (LONG_PTR)t_old_proc);
				RemovePropW(t_cef_widget, k_hxt_old_proc_prop);
			}
		}
		m_cef_subclassed = false;
	}

	if (m_viewport_hwnd != NULL)
	{
		if (m_hwnd != nil)
			doDetach();
		DestroyWindow(m_viewport_hwnd);
	}
	if (m_cached != NULL)
		DeleteObject(m_cached);
}

// IM-2016-01-19: [[ NativeLayer ]] Windows (prior to Windows 8) doesn't do transparent child windows
//    so instead we place each child window in its own container, sized to expose only the area that
//    should be visible when the native layer is clipped by the bounds of any groups it is in.
void MCNativeLayerWin32::doAttach()
{
    // Canary: this fires on every native-layer attach, even before CEF creates
    // any child windows.  If we never see this in the log then the new binary
    // was not loaded (e.g. old exe still running, or build did not recompile).
    HXTCefLog("doAttach: BUILD=" __DATE__ " " __TIME__ " v22 "
              "entry m_hwnd=%p m_viewport_hwnd=%p",
              (void*)m_hwnd, (void*)m_viewport_hwnd);

	HWND t_parent;
	t_parent = getStackWindow();

	if (m_viewport_hwnd == nil)
		/* UNCHECKED */ CreateNativeContainer(m_object, (void*&)m_viewport_hwnd);

	// Only perform the actual parent re-wiring when it is genuinely needed.
	// doAttach() can be called up to three times during widget open (from
	// SetNativeView, MCWidgetBase::OnAttach, and MCObject::OnOpen).  Repeated
	// SetParent + SWP_FRAMECHANGED calls sent to the CEF HWND while it is
	// already visible at the correct position appear to cause DWM / CEF to
	// render a stale, unscaled (logical-pixel-sized) ghost image alongside the
	// correctly-scaled physical rendering at DPI > 100 %.
	bool t_reparent_needed;
	t_reparent_needed = (GetParent(m_viewport_hwnd) != t_parent)
	                 || (GetParent(m_hwnd) != m_viewport_hwnd);

	if (t_reparent_needed)
	{
		// Hide the CEF HWND before reparenting so that DWM does not snapshot
		// it at its old parent-relative position.
		ShowWindow(m_hwnd, SW_HIDE);

		SetParent(m_viewport_hwnd, t_parent);
		SetParent(m_hwnd, m_viewport_hwnd);

		// Diagnostic: log the CEF HWND's own position/size and direct children
		// at the moment of first (real) attach, before geometry is applied.
		{
			RECT t_cef_wr, t_cef_cr;
			GetWindowRect(m_hwnd, &t_cef_wr);
			GetClientRect(m_hwnd, &t_cef_cr);
			MCLog("doAttach(reparent): m_hwnd=%p winrect=(%d,%d,%d,%d) clientwh=(%d,%d)",
				(void*)m_hwnd,
				(int)t_cef_wr.left, (int)t_cef_wr.top,
				(int)t_cef_wr.right, (int)t_cef_wr.bottom,
				(int)(t_cef_cr.right - t_cef_cr.left),
				(int)(t_cef_cr.bottom - t_cef_cr.top));
			HWND t_child = GetWindow(m_hwnd, GW_CHILD);
			int t_idx = 0;
			while (t_child != NULL)
			{
				RECT t_wr, t_cr;
				GetWindowRect(t_child, &t_wr);
				GetClientRect(t_child, &t_cr);
				char t_cls[64] = {0};
				GetClassNameA(t_child, t_cls, sizeof(t_cls));
				LONG t_style = GetWindowLong(t_child, GWL_STYLE);
				MCLog("doAttach: cef_child[%d] hwnd=%p class='%s' winrect=(%d,%d,%d,%d) clientwh=(%d,%d) visible=%d",
					t_idx, (void*)t_child, t_cls,
					(int)t_wr.left, (int)t_wr.top, (int)t_wr.right, (int)t_wr.bottom,
					(int)(t_cr.right - t_cr.left), (int)(t_cr.bottom - t_cr.top),
					(t_style & WS_VISIBLE) ? 1 : 0);
				t_child = GetWindow(t_child, GW_HWNDNEXT);
				t_idx++;
			}
			RECT t_vp_cr;
			GetClientRect(m_viewport_hwnd, &t_vp_cr);
			MCLog("doAttach: m_viewport_hwnd=%p clientwh=(%d,%d)",
				(void*)m_viewport_hwnd,
				(int)(t_vp_cr.right - t_vp_cr.left),
				(int)(t_vp_cr.bottom - t_vp_cr.top));
		}
	}
	else
	{
		MCLog("doAttach(skip-reparent): already correctly parented, skipping SetParent");
	}

	// Restore the state of the widget (in case it changed due to a
	// tool change while on another card - we don't get a message then)
	doSetViewportGeometry(m_viewport_rect);
	doSetGeometry(m_rect);
	doSetVisible(ShouldShowLayer());
}

void MCNativeLayerWin32::doDetach()
{
    // Just hide – do NOT reparent to desktop.  Calling SetParent(m_hwnd, NULL)
    // briefly makes the CEF HWND a top-level window; at DPI > 100 % DWM
    // composites it at logical-pixel dimensions and leaves a ghost image
    // alongside the correctly-scaled physical rendering.  Keeping both HWNDs
    // parented to their correct ancestors means doAttach()'s GetParent() guard
    // can skip unnecessary SetParent calls on subsequent attach cycles.
	doSetVisible(false);
}

bool MCNativeLayerWin32::doPaint(MCGContextRef p_context)
{
	MCRectangle t_rect;
	t_rect = m_rect;
	MCLog("doPaint: m_rect=(%d,%d,%d,%d)", t_rect.x, t_rect.y, t_rect.width, t_rect.height);

	bool t_success;
	t_success = true;
	
	// Create a DC to use for the drawing operation. We create a new DC
	// compatible to the one that would normally be used for a paint operation.
	HDC t_hwindowdc;
	t_hwindowdc = GetDC(m_hwnd);
	
	HDC t_hdc;
	t_hdc = nil;
	if (t_success)
	{
		t_hdc = CreateCompatibleDC(t_hwindowdc);
		t_success = t_hdc != nil;
	}

	// Create a bitmap for the DC to draw into
	if (t_success && m_cached == NULL)
	{
		// Note: this *must* be the original DC because the compatible DC originally
		// has a monochrome (1BPP) bitmap selected into it and we don't want that.
		m_cached = CreateCompatibleBitmap(t_hwindowdc, t_rect.width, t_rect.height);
		t_success = m_cached != nil;
	}

	BITMAP t_bitmap;

	void *t_bits;
	t_bits = nil;
	
	if (t_success)
	{
		// Tell the DC to draw into the bitmap we've created
		SelectObject(t_hdc, m_cached);

		// Use the WM_PRINT message to get the control to draw. WM_PAINT should
		// only be called by the windowing system and MSDN recommends PRINT instead
		// if drawing into a specific DC is required.
		SendMessage(m_hwnd, WM_PRINT, (WPARAM)t_hdc, PRF_CHILDREN|PRF_CLIENT);

		// Get the information we need to turn this into a bitmap the engine can use
		GetObjectW(m_cached, sizeof(BITMAP), &t_bitmap);

		// Allocate some memory for capturing the bits from the bitmap
		t_success = MCMemoryAllocate(t_bitmap.bmWidth * t_bitmap.bmHeight * 4, t_bits);
	}

	MCGImageRef t_gimage;
	t_gimage = nil;

	if (t_success)
	{
		// Describe the format of the device-independent bitmap we want
		BITMAPINFOHEADER t_bi;
		t_bi.biSize = sizeof(BITMAPINFOHEADER);
		t_bi.biWidth = t_bitmap.bmWidth;
		t_bi.biHeight = -t_bitmap.bmHeight;	// Negative: top-down (else bottom-up bitmap)
		t_bi.biPlanes = 1;
		t_bi.biBitCount = 32;
		t_bi.biCompression = BI_RGB;
		t_bi.biSizeImage = 0;
		t_bi.biXPelsPerMeter = 0;
		t_bi.biYPelsPerMeter = 0;
		t_bi.biClrUsed = 0;
		t_bi.biClrImportant = 0;

		// Finally, we can get the bits that were drawn.
		GetDIBits(t_hdc, m_cached, 0, t_bitmap.bmHeight, t_bits, (LPBITMAPINFO)&t_bi, DIB_RGB_COLORS);

		// Process the bits to handle the alpha channel
		uint32_t *t_argb;
		t_argb = reinterpret_cast<uint32_t*>(t_bits);
		for (size_t i = 0; i < t_bitmap.bmWidth*t_bitmap.bmHeight; i++)
		{
			// Set to fully-opaque (kMCGRasterFormat_xRGB doesn't seem to work...)
			t_argb[i] |= 0xFF000000;
		}

		// Turn these bits into something the engine can draw
		MCGRaster t_raster;
		MCImageDescriptor t_descriptor;
		t_raster.format = kMCGRasterFormat_ARGB;
		t_raster.width = t_bitmap.bmWidth;
		t_raster.height = t_bitmap.bmHeight;
		t_raster.stride = 4*t_bitmap.bmWidth;
		t_raster.pixels = t_bits;
		
		t_success = MCGImageCreateWithRasterNoCopy(t_raster, t_gimage);
	}

	if (t_success)
	{
		// At last - we can draw it!
		MCGRectangle rect = {{0, 0}, {MCGFloat(t_rect.width), MCGFloat(t_rect.height)}};
		MCGContextDrawImage(p_context, t_gimage, rect, kMCGImageFilterNone);
	}

	if (t_gimage != nil)
		MCGImageRelease(t_gimage);

	// Clean up the drawing resources that we allocated
	if (t_bits != nil)
		MCMemoryDeallocate(t_bits);

	if (t_hdc != nil)
		DeleteDC(t_hdc);

	ReleaseDC(m_hwnd, t_hwindowdc);
	
	return t_success;
}

// WndProc subclass installed on Chrome_WidgetWin_0.
//
// Cloak a window via DWM so its DirectComposition surface is invisible to
// the compositor even when WS_VISIBLE is set.  Loaded dynamically so the
// binary runs on Windows 7 (where DWMWA_CLOAK is absent) without crashing.
// Returns true on success.
static bool HXTCloakWindow(HWND p_hwnd, bool p_cloak)
{
    // DWMWA_CLOAK == 13 (Windows 8+, not in every SDK version's enum).
    static const DWORD k_DWMWA_CLOAK = 13;
    typedef HRESULT (WINAPI *PfnDwmSetWindowAttribute)(HWND, DWORD, LPCVOID, DWORD);
    static PfnDwmSetWindowAttribute s_fn = (PfnDwmSetWindowAttribute)(LONG_PTR)-1;
    if (s_fn == (PfnDwmSetWindowAttribute)(LONG_PTR)-1)
    {
        HMODULE t_mod = LoadLibraryA("dwmapi.dll");
        s_fn = t_mod
            ? (PfnDwmSetWindowAttribute)GetProcAddress(t_mod, "DwmSetWindowAttribute")
            : NULL;
    }
    if (s_fn == NULL)
        return false;
    BOOL t_val = p_cloak ? TRUE : FALSE;
    HRESULT t_hr = s_fn(p_hwnd, k_DWMWA_CLOAK, &t_val, sizeof(t_val));
    return SUCCEEDED(t_hr);
}

// Diagnostic file logger — writes to %TEMP%\hxt_cef_debug.log and also
// calls OutputDebugStringA so SysInternals DebugView can capture it.
static void HXTCefLog(const char *p_fmt, ...)
{
    char t_buf[1024];
    va_list t_args;
    va_start(t_args, p_fmt);
    vsnprintf(t_buf, sizeof(t_buf) - 2, p_fmt, t_args);
    va_end(t_args);
    size_t t_len = strlen(t_buf);
    if (t_len > 0 && t_buf[t_len - 1] != '\n')
        strncat(t_buf, "\n", sizeof(t_buf) - t_len - 1);

    // OutputDebugString path (DebugView / VS Output window)
    OutputDebugStringA(t_buf);

    // File path: try multiple locations in case one is not writable.
    static const char * const k_paths[] = {
        "C:\\Users\\Public\\hxt_cef_debug.log",
        "C:\\hxt_cef_debug.log",
        NULL
    };
    for (int i = 0; k_paths[i] != NULL; i++)
    {
        FILE *t_f = fopen(k_paths[i], "a");
        if (t_f)
        {
            fputs(t_buf, t_f);
            fclose(t_f);
            break;
        }
    }
}

// Background: CEF 74 (Chromium 74) processes WM_SIZE on m_hwnd on its own UI
// thread and responds by calling SetWindowPos(Chrome_WidgetWin_0, DIP_size)
// where DIP_size = physical_size / device_scale_factor.  At 150 % DPI this
// shrinks Chrome_WidgetWin_0 to 1/1.5 of the physical size we set, producing
// a ghost render at the wrong size inside the correctly-sized host window.
//
// This replacement WndProc intercepts WM_WINDOWPOSCHANGING on Chrome_WidgetWin_0
// and overrides any resize that differs from our intended physical pixel target.
// Chromium's own WM_SIZE handler then sees the correct physical size and
// allocates a full-size compositor surface (DIP x scale = physical).
//
// NOTE: This proc executes on the CEF UI thread (the owning thread of
// Chrome_WidgetWin_0).  SetWindowSubclass() failed because it is thread-affine
// and Chrome_WidgetWin_0 lives on a different thread.  SetWindowLongPtr() +
// SetProp/GetProp are NOT thread-restricted and are used instead.
// Access to m_cef_target_width/height is safe: those values are written from
// updateViewGeometry() before the SetWindowPos that triggers CEF's response,
// and CEF's response (WM_WINDOWPOSCHANGING) arrives only after we return.
static LRESULT CALLBACK MCCefWidgetWndProc(HWND hWnd, UINT uMsg,
                                            WPARAM wParam, LPARAM lParam)
{
    WNDPROC t_old_proc =
        (WNDPROC)(LONG_PTR)GetPropW(hWnd, k_hxt_old_proc_prop);
    MCNativeLayerWin32 *t_layer =
        (MCNativeLayerWin32 *)(LONG_PTR)GetPropW(hWnd, k_hxt_layer_prop);

    if (uMsg == WM_WINDOWPOSCHANGING)
    {
        WINDOWPOS *t_wp = reinterpret_cast<WINDOWPOS *>(lParam);
        int t_target_w = t_layer ? t_layer->getCefTargetWidth()  : -1;
        int t_target_h = t_layer ? t_layer->getCefTargetHeight() : -1;
        HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGING hwnd=%p "
                  "x=%d y=%d cx=%d cy=%d flags=0x%08x (NOSIZE=%d NOMOVE=%d) "
                  "target=%dx%d",
                  (void*)hWnd,
                  t_wp->x, t_wp->y, t_wp->cx, t_wp->cy, (unsigned)t_wp->flags,
                  !!(t_wp->flags & SWP_NOSIZE), !!(t_wp->flags & SWP_NOMOVE),
                  t_target_w, t_target_h);

        if (t_layer != NULL && t_target_w > 0 && t_target_h > 0 &&
            !(t_wp->flags & SWP_NOSIZE))
        {
            if (t_wp->cx != t_target_w || t_wp->cy != t_target_h)
            {
                HXTCefLog("MCCefWidgetWndProc: correcting %dx%d -> %dx%d",
                          t_wp->cx, t_wp->cy, t_target_w, t_target_h);
                t_wp->flags |= SWP_NOSIZE;
            }
        }

        // Block any attempt by CEF to position this window at a non-zero offset.
        // Chrome_RenderWidgetHostHWND is incorrectly placed at (DIP_width, 0) by
        // CEF 74 at 150% DPI, causing the "ghost render" (offset duplicate).
        // Exception: when the layer is in edit mode (!isRenderVisible()), we
        // explicitly move the render widget to x=-32000 to push its DComp
        // surface off-screen while keeping WS_VISIBLE=1 (compositor alive).
        if (t_layer != NULL && !(t_wp->flags & SWP_NOMOVE))
        {
            static const int k_off_screen_x = -32000;
            bool t_want_hidden = !t_layer->isRenderVisible();
            bool t_ok = (t_wp->x == 0 && t_wp->y == 0) ||
                        (t_want_hidden && t_wp->x == k_off_screen_x && t_wp->y == 0);
            if (!t_ok)
            {
                HXTCefLog("MCCefWidgetWndProc: blocking position (%d,%d) -> SWP_NOMOVE",
                          t_wp->x, t_wp->y);
                t_wp->flags |= SWP_NOMOVE;
            }
        }

        // Strip SWP_SHOWWINDOW from Chrome_WidgetWin_0 in EDIT MODE ONLY.
        // In browse mode (isRenderVisible=true) we want the window to show
        // so the user sees content.  Stripping in browse mode keeps
        // Chrome_WidgetWin_0 hidden, which triggers the CEF "widget hidden"
        // callback → doSetVisible(false) re-entry → mode switch broken.
        // In edit mode: stripping prevents the DPI-virtualised DComp ghost
        // from appearing when Chrome briefly shows Chrome_WidgetWin_0 during
        // its startup show/hide cycle.
        if ((t_wp->flags & SWP_SHOWWINDOW) &&
            (t_layer == NULL || !t_layer->isRenderVisible()))
        {
            char t_show_cls[64] = "";
            GetClassNameA(hWnd, t_show_cls, sizeof(t_show_cls));
            bool t_is_render =
                (strncmp(t_show_cls, "Chrome_RenderWidgetHostHWND", 27) == 0);
            if (!t_is_render)
            {
                HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGING stripping "
                          "SWP_SHOWWINDOW from hwnd=%p class='%s' (ghost prevention, edit mode only)",
                          (void*)hWnd, t_show_cls);
                t_wp->flags &= ~SWP_SHOWWINDOW;
                // Explicitly request hide so DWM doesn't surface the window.
                t_wp->flags |= SWP_HIDEWINDOW;
            }
        }

        // GHOST FIX v9: strip SWP_HIDEWINDOW from Chrome_RenderWidgetHostHWND.
        // Chrome calls SetWindowPos(SWP_HIDEWINDOW) on the render widget in
        // response to Chrome_WidgetWin_0 being hidden/suppressed.  This path
        // bypasses WM_SHOWWINDOW, so our WM_SHOWWINDOW(show=0) suppression
        // above is insufficient.  Stripping SWP_HIDEWINDOW here keeps
        // Chrome_RenderWidgetHostHWND's WS_VISIBLE set so the compositor
        // continues running and CEF fires OnLoadEnd normally.
        if (t_wp->flags & SWP_HIDEWINDOW)
        {
            char t_hide_cls[64] = "";
            GetClassNameA(hWnd, t_hide_cls, sizeof(t_hide_cls));
            bool t_is_render =
                (strncmp(t_hide_cls, "Chrome_RenderWidgetHostHWND", 27) == 0);
            if (t_is_render)
            {
                HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGING stripping "
                          "SWP_HIDEWINDOW from render widget hwnd=%p "
                          "(keep compositor alive)",
                          (void*)hWnd);
                t_wp->flags &= ~SWP_HIDEWINDOW;
            }
        }
    }
    else if (uMsg == WM_SIZE)
    {
        int t_new_w = (int)LOWORD(lParam);
        int t_new_h = (int)HIWORD(lParam);
        int t_target_w = t_layer ? t_layer->getCefTargetWidth()  : -1;
        int t_target_h = t_layer ? t_layer->getCefTargetHeight() : -1;
        HXTCefLog("MCCefWidgetWndProc: WM_SIZE hwnd=%p new=%dx%d "
                  "wParam=%u target=%dx%d",
                  (void*)hWnd, t_new_w, t_new_h, (unsigned)wParam,
                  t_target_w, t_target_h);
        // GHOST FIX v15: lParam override removed.
        // v13/v14 attempted to multiply WM_SIZE lParam by (dpi/96) so
        // Chrome would compute the correct DIP viewport.  However Chrome 74
        // ignores the lParam and calls GetClientRect() after WM_SIZE, so
        // the override had no effect.  The fix is now to physically resize
        // Chrome_WidgetWin_0 and Chrome_RenderWidgetHostHWND to
        // target × (dpi/96) in updateViewGeometry, so GetClientRect()
        // returns the scaled value and Chrome creates the correct DComp
        // swap chain size.  See updateViewGeometry: GHOST FIX v15.
        //
        // We keep this block only for logging.
        if (false && t_layer != NULL && t_target_w > 0 && t_target_h > 0)
        {
            typedef UINT (WINAPI *PFN_GetDpiForWindow)(HWND);
            static PFN_GetDpiForWindow s_GetDpiForWindow =
                (PFN_GetDpiForWindow)GetProcAddress(
                    GetModuleHandleA("user32.dll"), "GetDpiForWindow");
            UINT t_dpi = s_GetDpiForWindow ? s_GetDpiForWindow(hWnd) : 0;
            if (t_dpi == 0)
            {
                HDC t_hdc = GetDC(hWnd);
                t_dpi = (UINT)GetDeviceCaps(t_hdc, LOGPIXELSX);
                ReleaseDC(hWnd, t_hdc);
            }
            if (t_dpi < 96)
                t_dpi = 96;

            int t_send_w = (t_target_w * (int)t_dpi + 48) / 96;
            int t_send_h = (t_target_h * (int)t_dpi + 48) / 96;
            HXTCefLog("MCCefWidgetWndProc: WM_SIZE (v13 disabled) "
                      "hwnd=%p new=%dx%d target=%dx%d dpi=%u send=%dx%d",
                      (void*)hWnd, t_new_w, t_new_h,
                      t_target_w, t_target_h, t_dpi, t_send_w, t_send_h);
            lParam = MAKELPARAM((WORD)t_send_w, (WORD)t_send_h);
        }
    }
    else if (uMsg == WM_SHOWWINDOW)
    {
        // wParam: TRUE = being shown, FALSE = being hidden
        // lParam: 0 = direct ShowWindow call, SW_PARENTCLOSING, etc.
        HXTCefLog("MCCefWidgetWndProc: WM_SHOWWINDOW hwnd=%p show=%d reason=%d",
                  (void*)hWnd, (int)wParam, (int)lParam);

        char t_sw_cls[64] = "";
        GetClassNameA(hWnd, t_sw_cls, sizeof(t_sw_cls));
        bool t_sw_is_render =
            (strncmp(t_sw_cls, "Chrome_RenderWidgetHostHWND", 27) == 0);

        if (wParam != 0)  // being shown
        {
            if (!t_sw_is_render && (t_layer == NULL || !t_layer->isRenderVisible()))
            {
                // Chrome_WidgetWin_0: suppress the show in edit mode only.
                // In browse mode (isRenderVisible=true) we WANT the window to
                // show so the user sees content.  Suppressing it in browse mode
                // causes Chrome to fire the CEF "widget hidden" callback, which
                // calls doSetVisible(false) and breaks the mode switch.
                HXTCefLog("MCCefWidgetWndProc: suppressing WM_SHOWWINDOW on "
                          "hwnd=%p class='%s' (ghost prevention, edit mode only)",
                          (void*)hWnd, t_sw_cls);

                // Ghost suppression is done via WS_EX_LAYERED + alpha=0
                // applied in updateViewGeometry (GHOST FIX v9).  SetWindowRgn
                // was removed here because it posts WM_WINDOWPOSCHANGING/
                // WM_WINDOWPOSCHANGED to Chrome's old_proc, which disrupts
                // Chrome's show-retry cycle and prevents page load.

                // Belt-and-suspenders: clear WS_VISIBLE if already set.
                LONG t_style = GetWindowLong(hWnd, GWL_STYLE);
                if (t_style & WS_VISIBLE)
                {
                    HXTCefLog("MCCefWidgetWndProc: force-clearing WS_VISIBLE "
                              "from hwnd=%p (style was 0x%08x)",
                              (void*)hWnd, (unsigned)t_style);
                    SetWindowLong(hWnd, GWL_STYLE, t_style & ~WS_VISIBLE);
                }
                return 0;
            }
        }
        else  // being hidden (wParam == 0)
        {
            if (t_sw_is_render)
            {
                // GHOST FIX v9 (defensive): keep the render widget always
                // visible.  Any operation that causes Chrome to want to hide
                // Chrome_RenderWidgetHostHWND (e.g. the old SetWindowRgn(0x0)
                // on Chrome_WidgetWin_0) would suspend the compositor and
                // prevent CEF from ever firing OnLoadEnd, leaving the host
                // stuck in edit mode.  We unconditionally suppress hide so
                // the compositor stays alive while the hook is installed.
                HXTCefLog("MCCefWidgetWndProc: suppressing WM_SHOWWINDOW(hide) "
                          "on render widget hwnd=%p (keep compositor alive)",
                          (void*)hWnd);
                return 0;
            }
        }
    }
    else if (uMsg == WM_WINDOWPOSCHANGED)
    {
        // WM_WINDOWPOSCHANGED fires AFTER the position/size/visibility change
        // has been applied.  If SWP_SHOWWINDOW is present, WS_VISIBLE is now
        // already set.  For Chrome_WidgetWin_0 we immediately hide the window
        // again to eliminate the DPI-virtualised ghost surface.
        WINDOWPOS *t_wp = reinterpret_cast<WINDOWPOS *>(lParam);
        HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGED hwnd=%p "
                  "x=%d y=%d cx=%d cy=%d flags=0x%08x visible_now=%d",
                  (void*)hWnd,
                  t_wp->x, t_wp->y, t_wp->cx, t_wp->cy, (unsigned)t_wp->flags,
                  !!(GetWindowLong(hWnd, GWL_STYLE) & WS_VISIBLE));

        if (t_wp->flags & SWP_SHOWWINDOW)
        {
            char t_chg_cls[64] = "";
            GetClassNameA(hWnd, t_chg_cls, sizeof(t_chg_cls));
            bool t_is_render =
                (strncmp(t_chg_cls, "Chrome_RenderWidgetHostHWND", 27) == 0);
            if (!t_is_render && (t_layer == NULL || !t_layer->isRenderVisible()))
            {
                // Edit mode: immediately re-hide Chrome_WidgetWin_0 to prevent
                // its DPI-virtualised DComp surface from appearing as a ghost.
                // In browse mode (isRenderVisible=true) we skip this block so
                // Chrome shows normally.  Hiding in browse mode triggers the
                // SWP_HIDEWINDOW → SetWindowRgn(0x0) → STATECHANGED → CEF
                // callback → doSetVisible(false) re-entry chain.
                HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGED SWP_SHOWWINDOW "
                          "on hwnd=%p class='%s' -- hiding immediately (ghost fix, edit mode only)",
                          (void*)hWnd, t_chg_cls);
                // Call old proc first so Chrome's state is consistent.
                LRESULT t_res = t_old_proc
                    ? CallWindowProc(t_old_proc, hWnd, uMsg, wParam, lParam)
                    : DefWindowProc(hWnd, uMsg, wParam, lParam);
                // Now forcibly hide.
                SetWindowPos(hWnd, NULL, 0, 0, 0, 0,
                             SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER |
                             SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_HIDEWINDOW |
                             SWP_NOSENDCHANGING);
                LONG t_sty = GetWindowLong(hWnd, GWL_STYLE);
                if (t_sty & WS_VISIBLE)
                {
                    SetWindowLong(hWnd, GWL_STYLE, t_sty & ~WS_VISIBLE);
                    HXTCefLog("MCCefWidgetWndProc: force-cleared WS_VISIBLE after "
                              "WM_WINDOWPOSCHANGED on hwnd=%p", (void*)hWnd);
                }
                return t_res;
            }
        }
        else if (t_wp->flags & SWP_HIDEWINDOW)
        {
            char t_hide_cls[64] = "";
            GetClassNameA(hWnd, t_hide_cls, sizeof(t_hide_cls));
            bool t_is_render =
                (strncmp(t_hide_cls, "Chrome_RenderWidgetHostHWND", 27) == 0);
            if (!t_is_render)
            {
                // GHOST FIX v12: Chrome_WidgetWin_0 just completed its hide.
                // Chrome's show->hide startup cycle is now fully settled, so
                // any window-style changes we make here do NOT trigger Chrome
                // to hide Chrome_RenderWidgetHostHWND (that reaction only
                // happens when changes occur during the show portion of the
                // cycle, as seen in v6/v7/v11).
                //
                // Two-pronged attack on the ghost:
                //
                // (1) Remove WS_EX_NOREDIRECTIONBITMAP.
                //     Chrome 74 sets this flag on Chrome_WidgetWin_0, which
                //     tells DWM to composite Chrome's DComp buffer directly
                //     (bypassing the redirect/GDI surface).  DWM composites
                //     that DComp buffer — which Chrome created at DIP pixel
                //     dimensions (923x387 at 150% DPI) — regardless of
                //     WS_VISIBLE or SetWindowRgn.  That's the ghost.
                //     Removing the flag forces DWM to switch to a standard
                //     GDI redirect surface for Chrome_WidgetWin_0.  Chrome
                //     never paints to that surface via GDI, so DWM composites
                //     a transparent/empty surface — ghost gone.
                //     SWP_FRAMECHANGED tells DWM to re-read the extended style.
                //
                // (2) SetWindowRgn(0x0) as belt-and-suspenders.
                //     If Chrome_WidgetWin_0 does not have
                //     WS_EX_NOREDIRECTIONBITMAP (e.g. on some DWM configs),
                //     SetWindowRgn clips the redirect surface to zero area,
                //     also suppressing the ghost.
                //
                // We call old_proc first so Chrome finalises its hide, then
                // apply both fixes.
                LRESULT t_res = t_old_proc
                    ? CallWindowProc(t_old_proc, hWnd, uMsg, wParam, lParam)
                    : DefWindowProc(hWnd, uMsg, wParam, lParam);

                // (1) Remove WS_EX_NOREDIRECTIONBITMAP
                LONG t_exs = GetWindowLong(hWnd, GWL_EXSTYLE);
                HXTCefLog("MCCefWidgetWndProc: WM_WINDOWPOSCHANGED SWP_HIDEWINDOW "
                          "Chrome_WidgetWin_0 hwnd=%p GWL_EXSTYLE=0x%08x "
                          "WS_EX_NOREDIRECTIONBITMAP=%d",
                          (void*)hWnd, (unsigned)t_exs, !!(t_exs & 0x00200000));
                if (t_exs & 0x00200000)
                {
                    SetWindowLong(hWnd, GWL_EXSTYLE, t_exs & ~0x00200000);
                    // SWP_FRAMECHANGED + SWP_NOSENDCHANGING: tell DWM to
                    // re-read the extended style without firing
                    // WM_WINDOWPOSCHANGING (which could re-trigger Chrome's
                    // hide/show logic).
                    SetWindowPos(hWnd, NULL, 0, 0, 0, 0,
                                 SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER |
                                 SWP_NOACTIVATE | SWP_NOOWNERZORDER |
                                 SWP_FRAMECHANGED | SWP_NOSENDCHANGING);
                    HXTCefLog("MCCefWidgetWndProc: removed WS_EX_NOREDIRECTIONBITMAP "
                              "from Chrome_WidgetWin_0 hwnd=%p (ghost fix v12)",
                              (void*)hWnd);
                }

                // v20: removed SetWindowRgn(0x0) belt-and-suspenders.
                // With v19, the ghost is prevented by keeping Chrome_WidgetWin_0
                // at x=-32000 (off-screen) and suppressing WM_WINDOWPOSCHANGED so
                // Chrome never adjusts its DComp offset.  SetWindowRgn(0x0) is not
                // needed and causes WM_WINDOWPOSCHANGED(STATECHANGED) → CEF
                // visibility callback → doSetVisible(false) re-entry.

                return t_res;
            }
        }
        else
        {
            // v19 GHOST FIX: suppress old_proc for our edit-mode off-screen move.
            //
            // When we move Chrome_WidgetWin_0 / Chrome_RenderWidgetHostHWND to
            // x=-32000 (edit mode), Chrome processes this WM_WINDOWPOSCHANGED and
            // COMPENSATES by adjusting its internal DComp visual offset by +32000,
            // keeping the ghost at screen (361,711) — exactly what we observed in
            // v16 and v17.
            //
            // Fix: if we're in edit mode (m_render_visible=false) and the new
            // position is our off-screen sentinel (-32000,0), return 0 WITHOUT
            // calling old_proc.  Chrome never sees the move, never compensates the
            // DComp offset.  The DComp visual stays at its cached (0,0) offset
            // within Chrome_WidgetWin_0.  Since Chrome_WidgetWin_0's HWND IS at
            // (-32000,0) within m_hwnd, DWM positions the DComp content at
            // (-32000 + m_hwnd_x, m_hwnd_y) = (-31639,711) = off-screen. ✓
            //
            // Skipping DefWindowProc here also prevents it from sending WM_MOVE
            // (which would otherwise give Chrome another opportunity to compensate).
            static const int k_off_screen_x_chk = -32000;
            if (t_layer != NULL &&
                !t_layer->isRenderVisible() &&
                !(t_wp->flags & SWP_NOMOVE) &&
                t_wp->x == k_off_screen_x_chk && t_wp->y == 0)
            {
                HXTCefLog("MCCefWidgetWndProc: v19 suppressing WM_WINDOWPOSCHANGED "
                          "off-screen move hwnd=%p x=%d -- no DComp compensation",
                          (void*)hWnd, t_wp->x);
                return 0;  // Skip old_proc AND DefWindowProc → no DComp compensation
            }
        }
    }
    else if (uMsg == WM_STYLECHANGED)
    {
        // Catches direct SetWindowLong(GWL_STYLE, style|WS_VISIBLE) calls.
        // By the time WM_STYLECHANGED fires WS_VISIBLE is already applied.
        if (wParam == (WPARAM)GWL_STYLE)
        {
            STYLESTRUCT *t_ss = reinterpret_cast<STYLESTRUCT *>(lParam);
            bool t_now_visible  = !!(t_ss->styleNew & WS_VISIBLE);
            bool t_was_visible  = !!(t_ss->styleOld & WS_VISIBLE);
            if (t_now_visible && !t_was_visible)
            {
                char t_scc[64] = "";
                GetClassNameA(hWnd, t_scc, sizeof(t_scc));
                bool t_is_render =
                    (strncmp(t_scc, "Chrome_RenderWidgetHostHWND", 27) == 0);
                HXTCefLog("MCCefWidgetWndProc: WM_STYLECHANGED WS_VISIBLE set "
                          "hwnd=%p class='%s' is_render=%d",
                          (void*)hWnd, t_scc, t_is_render);
                if (!t_is_render)
                {
                    // Clear WS_VISIBLE immediately.
                    LONG t_cur = GetWindowLong(hWnd, GWL_STYLE);
                    SetWindowLong(hWnd, GWL_STYLE, t_cur & ~WS_VISIBLE);
                    HXTCefLog("MCCefWidgetWndProc: WM_STYLECHANGED cleared "
                              "WS_VISIBLE on hwnd=%p", (void*)hWnd);
                }
            }
        }
        else if (wParam == (WPARAM)GWL_EXSTYLE)
        {
            // GHOST FIX v12: If Chrome re-sets WS_EX_NOREDIRECTIONBITMAP on
            // Chrome_WidgetWin_0, clear it immediately so the DComp ghost
            // cannot reappear.  We do NOT touch Chrome_RenderWidgetHostHWND
            // since its DComp visual is the correct page rendering.
            STYLESTRUCT *t_exss = reinterpret_cast<STYLESTRUCT *>(lParam);
            if ((t_exss->styleNew & 0x00200000) &&
                !(t_exss->styleOld & 0x00200000))
            {
                char t_exc[64] = "";
                GetClassNameA(hWnd, t_exc, sizeof(t_exc));
                bool t_is_render =
                    (strncmp(t_exc, "Chrome_RenderWidgetHostHWND", 27) == 0);
                HXTCefLog("MCCefWidgetWndProc: WM_STYLECHANGED GWL_EXSTYLE "
                          "WS_EX_NOREDIRECTIONBITMAP set on hwnd=%p "
                          "class='%s' is_render=%d",
                          (void*)hWnd, t_exc, t_is_render);
                if (!t_is_render)
                {
                    // Re-clear the flag immediately.
                    LONG t_cur = GetWindowLong(hWnd, GWL_EXSTYLE);
                    SetWindowLong(hWnd, GWL_EXSTYLE, t_cur & ~0x00200000);
                    HXTCefLog("MCCefWidgetWndProc: WM_STYLECHANGED re-cleared "
                              "WS_EX_NOREDIRECTIONBITMAP on hwnd=%p", (void*)hWnd);
                }
            }
        }
    }
    else if (uMsg == WM_MOVE)
    {
        // WM_MOVE fires after the window has actually moved (unlike
        // WM_WINDOWPOSCHANGING which fires before).  Log it so we can see
        // whether Chrome_RenderWidgetHostHWND is being repositioned.
        int t_x = (int)(short)LOWORD(lParam);
        int t_y = (int)(short)HIWORD(lParam);
        HXTCefLog("MCCefWidgetWndProc: WM_MOVE hwnd=%p new_pos=(%d,%d)",
                  (void*)hWnd, t_x, t_y);

        // v19 GHOST FIX: also suppress old_proc for WM_MOVE when we moved the
        // window to the off-screen sentinel.  WM_MOVE is generated by
        // DefWindowProc inside WM_WINDOWPOSCHANGED, but may also arrive here
        // independently.  If Chrome's old_proc processes WM_MOVE at x=-32000,
        // it may also update its position cache and compensate the DComp offset.
        if (t_layer != NULL && !t_layer->isRenderVisible() &&
            t_x == -32000 && t_y == 0)
        {
            HXTCefLog("MCCefWidgetWndProc: v19 suppressing WM_MOVE off-screen "
                      "hwnd=%p new_pos=(%d,%d) -- no DComp compensation",
                      (void*)hWnd, t_x, t_y);
            return 0;
        }
    }
    else if (uMsg == WM_NCDESTROY)
    {
        // Window is being destroyed: restore the original proc and clean up
        // props before chaining so we don't fire again on WM_NCDESTROY itself.
        RemovePropW(hWnd, k_hxt_layer_prop);
        RemovePropW(hWnd, k_hxt_old_proc_prop);
        if (t_old_proc)
            SetWindowLongPtr(hWnd, GWLP_WNDPROC, (LONG_PTR)t_old_proc);
    }

    if (t_old_proc)
        return CallWindowProc(t_old_proc, hWnd, uMsg, wParam, lParam);
    return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

void MCNativeLayerWin32::updateViewGeometry()
{
	m_intersect_rect = MCU_intersect_rect(m_viewport_rect, m_rect);

	// IM-2016-02-18: [[ Bug 16603 ]] Transform view rect to device coords
	MCRectangle t_intersect_rect;
	t_intersect_rect = MCRectangleGetTransformedBounds(m_intersect_rect, m_object->getstack()->getdevicetransform());

	// Move the window. Only trigger a repaint if not in edit mode
	MoveWindow(m_viewport_hwnd, t_intersect_rect.x, t_intersect_rect.y, t_intersect_rect.width, t_intersect_rect.height, ShouldShowLayer());

	// IM-2016-02-18: [[ Bug 16603 ]] Transform view rect to device coords
	MCRectangle t_rect;
	t_rect = MCRectangleGetTransformedBounds(m_rect, m_object->getstack()->getdevicetransform());

	t_rect.x -= t_intersect_rect.x;
	t_rect.y -= t_intersect_rect.y;

    // Move the window. Only trigger a repaint if not in edit mode
	MoveWindow(m_hwnd, t_rect.x, t_rect.y, t_rect.width, t_rect.height, ShouldShowLayer());

	// v18 DIAGNOSTIC: log m_hwnd's extended style — if WS_EX_NOREDIRECTIONBITMAP
	// (0x00200000) is set, Chrome's DComp target is on m_hwnd, which is why
	// moving Chrome_WidgetWin_0/Chrome_RenderWidgetHostHWND off-screen (v16/v17)
	// had no effect on the ghost position.
	{
		LONG t_hwnd_exs = GetWindowLong(m_hwnd, GWL_EXSTYLE);
		LONG t_vp_exs   = GetWindowLong(m_viewport_hwnd, GWL_EXSTYLE);
		HXTCefLog("updateViewGeometry: m_hwnd=%p GWL_EXSTYLE=0x%08x "
		          "WS_EX_NOREDIRECTIONBITMAP=%d  "
		          "m_viewport_hwnd=%p GWL_EXSTYLE=0x%08x "
		          "WS_EX_NOREDIRECTIONBITMAP=%d",
		          (void*)m_hwnd,        (unsigned)t_hwnd_exs,
		          !!(t_hwnd_exs & 0x00200000),
		          (void*)m_viewport_hwnd, (unsigned)t_vp_exs,
		          !!(t_vp_exs & 0x00200000));
	}

	// CEF 74 (Chromium 74) internally divides the WM_SIZE dimensions by the
	// system DPI scale factor to derive a DIP (device-independent pixel) size,
	// then calls SetWindowPos on Chrome_WidgetWin_0 with those DIP values as
	// physical-pixel dimensions.  At 150 % DPI this shrinks Chrome_WidgetWin_0
	// to 1/1.5 of the intended physical size (e.g. 923×387 instead of
	// 1385×581), producing a ghost render that is smaller than and visually
	// offset from the correct native-layer viewport.
	//
	// Fix: after every MoveWindow on m_hwnd, explicitly resize
	// Chrome_WidgetWin_0 (the first child of m_hwnd) to the correct physical
	// pixel size so that it fills the CEF host window.  Chromium's subsequent
	// WM_SIZE handler will compute the correct DIP bounds and set up a
	// full-size compositor surface (DIP × scale_factor = physical).
	if (t_rect.width > 0 && t_rect.height > 0)
	{
		HWND t_cef_widget = GetWindow(m_hwnd, GW_CHILD);

		// Diagnostic: always log whether we found Chrome_WidgetWin_0 and
		// the result of SetWindowSubclass, so we can tell if the subclass
		// path is being reached at all.
		if (t_cef_widget == NULL)
		{
			HXTCefLog("updateViewGeometry: m_hwnd=%p has NO child window yet "
			          "(Chrome_WidgetWin_0 not created) rect=%dx%d",
			          (void*)m_hwnd, t_rect.width, t_rect.height);
		}
		else
		{
			char t_class[256] = "";
			GetClassNameA(t_cef_widget, t_class, sizeof(t_class));
			DWORD t_widget_tid = GetWindowThreadProcessId(t_cef_widget, NULL);
			DWORD t_cur_tid    = GetCurrentThreadId();
			LONG t_cef_exstyle = GetWindowLong(t_cef_widget, GWL_EXSTYLE);
			HXTCefLog("updateViewGeometry: found child hwnd=%p class='%s' "
			          "widget_tid=%lu cur_tid=%lu same_thread=%d "
			          "GWL_EXSTYLE=0x%08x WS_EX_NOREDIRECTIONBITMAP=%d",
			          (void*)t_cef_widget, t_class,
			          (unsigned long)t_widget_tid, (unsigned long)t_cur_tid,
			          (t_widget_tid == t_cur_tid),
			          (unsigned)t_cef_exstyle,
			          !!(t_cef_exstyle & 0x00200000));

			// GHOST FIX v15: Chrome 74 ignores the WM_SIZE lParam and instead
			// calls GetClientRect() on Chrome_WidgetWin_0 /
			// Chrome_RenderWidgetHostHWND to determine the compositor (DComp
			// swap chain) size.  It then DIVIDES that physical pixel size by
			// device_scale_factor to derive DIP, and creates the swap chain at
			// DIP dimensions.  At 150 % DPI (scale=1.5):
			//   physical = 1385  →  DIP = 1385/1.5 = 923  →  swap chain 923 px
			//   (DWM composites those 923 DIP-pixels as 923 physical pixels → ghost)
			//
			// Fix: physically resize both Chrome_WidgetWin_0 AND
			// Chrome_RenderWidgetHostHWND to  physical × (dpi/96):
			//   new physical = 1385 × 1.5 = 2077  →  DIP = 2078/1.5 = 1385
			//   → swap chain 1385 px  (= full physical viewport)  → no ghost!
			//
			// The WM_WINDOWPOSCHANGING guard uses the new (scaled) target so
			// Chrome cannot shrink the windows back to DIP dimensions.
			// Chrome_RenderWidgetHostHWND's DComp surface is cloaked via
			// DWMWA_CLOAK during edit mode and uncloaked in doSetVisible(true).

			typedef UINT (WINAPI *PFN_GetDpiForWindow2)(HWND);
			static PFN_GetDpiForWindow2 s_GetDpiForWindow2 =
			    (PFN_GetDpiForWindow2)GetProcAddress(
			        GetModuleHandleA("user32.dll"), "GetDpiForWindow");
			UINT t_dpi = s_GetDpiForWindow2 ? s_GetDpiForWindow2(t_cef_widget) : 0;
			if (t_dpi == 0)
			{
			    HDC t_hdc2 = GetDC(t_cef_widget);
			    t_dpi = (UINT)GetDeviceCaps(t_hdc2, LOGPIXELSX);
			    ReleaseDC(t_cef_widget, t_hdc2);
			}
			if (t_dpi < 96) t_dpi = 96;

			// Compute physical × (dpi/96) — this is the size Chrome must see
			// so that Chrome's DIP = target_physical (no ghost).
			int t_phy_w = (t_rect.width  * (int)t_dpi + 48) / 96;
			int t_phy_h = (t_rect.height * (int)t_dpi + 48) / 96;

			HXTCefLog("updateViewGeometry: GHOST FIX v15 dpi=%u "
			          "physical=%dx%d scaled_target=%dx%d",
			          t_dpi, t_rect.width, t_rect.height, t_phy_w, t_phy_h);

			// Update the target to the DPI-scaled size BEFORE installing/
			// updating the WndProc so the guard never sees a stale value.
			m_cef_target_width  = t_phy_w;
			m_cef_target_height = t_phy_h;

			// Always update the layer prop so the WndProc has the current 'this'.
			SetPropW(t_cef_widget, k_hxt_layer_prop, (HANDLE)(LONG_PTR)this);

			// Install WndProc replacement on first encounter.
			// SetWindowLongPtr is NOT thread-restricted (unlike SetWindowSubclass),
			// so this works even though Chrome_WidgetWin_0 is owned by CEF's thread.
			// We record the old proc via SetProp so MCCefWidgetWndProc can chain to it.
			if (!m_cef_subclassed)
			{
				WNDPROC t_old_proc = (WNDPROC)SetWindowLongPtr(
				    t_cef_widget, GWLP_WNDPROC, (LONG_PTR)MCCefWidgetWndProc);
				SetPropW(t_cef_widget, k_hxt_old_proc_prop,
				         (HANDLE)(LONG_PTR)t_old_proc);
				m_cef_subclassed = (t_old_proc != NULL);
				HXTCefLog("updateViewGeometry: SetWindowLongPtr old_proc=%p "
				          "installed=%d for hwnd=%p target=%dx%d",
				          (void*)t_old_proc, (int)m_cef_subclassed,
				          (void*)t_cef_widget, t_rect.width, t_rect.height);
			}
			else
			{
				HXTCefLog("updateViewGeometry: WndProc already installed, "
				          "updated layer prop hwnd=%p target=%dx%d",
				          (void*)t_cef_widget, t_rect.width, t_rect.height);
			}

			// Force Chrome_WidgetWin_0 to the DPI-scaled size now so that
			// Chrome's GetClientRect() returns t_phy_w × t_phy_h.
			// Chrome then computes DIP = t_phy_w/scale = t_rect.width (physical)
			// and creates the DComp swap chain at t_rect.width pixels — no ghost.
			SetWindowPos(t_cef_widget, NULL, 0, 0, t_phy_w, t_phy_h,
			             SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
			HXTCefLog("updateViewGeometry: forced child hwnd=%p to scaled %dx%d",
			          (void*)t_cef_widget, t_phy_w, t_phy_h);

			// GHOST FIX v10: SetWindowRgn(0x0) is now applied in
			// MCCefWidgetWndProc::WM_WINDOWPOSCHANGED when Chrome hides
			// Chrome_WidgetWin_0 (SWP_HIDEWINDOW).  At that moment Chrome has
			// already processed its show/hide cycle and is in "hidden" state,
			// so the geometry change does NOT trigger Chrome to hide
			// Chrome_RenderWidgetHostHWND (the reaction that broke v7/v8 when
			// the region was set during the show cycle).
			// WS_EX_LAYERED was removed (v9) because it caused Chrome to switch
			// rendering paths and stop navigating.

			// GHOST FIX v4: preemptively force-hide Chrome_WidgetWin_0.
			// CEF may show this window before or after our hook fires on the
			// CEF thread.  Calling SetWindowPos(SWP_HIDEWINDOW) here, from
			// updateViewGeometry's thread, hides it now.  The MCCefWidgetWndProc
			// WM_SHOWWINDOW handler will suppress any subsequent show attempt.
			{
				LONG t_sty = GetWindowLong(t_cef_widget, GWL_STYLE);
				HXTCefLog("updateViewGeometry: pre-hide Chrome_WidgetWin_0 hwnd=%p "
				          "style=0x%08x WS_VISIBLE=%d",
				          (void*)t_cef_widget, (unsigned)t_sty,
				          !!(t_sty & WS_VISIBLE));
				// Use SWP_NOSENDCHANGING so we don't recurse into our own hook.
				SetWindowPos(t_cef_widget, NULL, 0, 0, 0, 0,
				             SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER |
				             SWP_NOACTIVATE | SWP_NOOWNERZORDER |
				             SWP_HIDEWINDOW | SWP_NOSENDCHANGING);
				// Belt-and-suspenders: also clear WS_VISIBLE via SetWindowLong.
				t_sty = GetWindowLong(t_cef_widget, GWL_STYLE);
				if (t_sty & WS_VISIBLE)
				{
					SetWindowLong(t_cef_widget, GWL_STYLE, t_sty & ~WS_VISIBLE);
					HXTCefLog("updateViewGeometry: cleared WS_VISIBLE on hwnd=%p",
					          (void*)t_cef_widget);
				}
				else
				{
					HXTCefLog("updateViewGeometry: WS_VISIBLE already clear on hwnd=%p",
					          (void*)t_cef_widget);
				}
			}

			// Also install the hook on Chrome_RenderWidgetHostHWND (the first
			// child of Chrome_WidgetWin_0).  CEF 74 at 150% DPI positions this
			// window at (DIP_width, 0) instead of (0, 0), which is the direct
			// cause of the ghost render.  Our WM_WINDOWPOSCHANGING handler will
			// intercept that SetWindowPos and set SWP_NOMOVE to pin it at (0,0).
			HWND t_render_hwnd = GetWindow(t_cef_widget, GW_CHILD);
			if (t_render_hwnd != NULL)
			{
				char t_render_cls[256] = "";
				GetClassNameA(t_render_hwnd, t_render_cls, sizeof(t_render_cls));

				// Always keep the layer prop current (target size may have changed).
				SetPropW(t_render_hwnd, k_hxt_layer_prop, (HANDLE)(LONG_PTR)this);

				// Check whether this child is already hooked.
				WNDPROC t_existing =
				    (WNDPROC)(LONG_PTR)GetPropW(t_render_hwnd, k_hxt_old_proc_prop);

				if (t_existing == NULL)
				{
					WNDPROC t_old_render_proc = (WNDPROC)SetWindowLongPtr(
					    t_render_hwnd, GWLP_WNDPROC, (LONG_PTR)MCCefWidgetWndProc);
					SetPropW(t_render_hwnd, k_hxt_old_proc_prop,
					         (HANDLE)(LONG_PTR)t_old_render_proc);
					HXTCefLog("updateViewGeometry: hooked render hwnd=%p "
					          "class='%s' old_proc=%p",
					          (void*)t_render_hwnd, t_render_cls,
					          (void*)t_old_render_proc);
				}
				else
				{
					HXTCefLog("updateViewGeometry: render hwnd=%p class='%s' "
					          "already hooked, updated layer prop",
					          (void*)t_render_hwnd, t_render_cls);
				}

				// Also force Chrome_RenderWidgetHostHWND position to (0,0)
				// and resize to the DPI-scaled dimensions so its GetClientRect
				// returns t_phy_w × t_phy_h.  Chrome then creates the DComp
				// swap chain at DIP = t_phy_w/scale = t_rect.width pixels. ✓
				SetWindowPos(t_render_hwnd, NULL, 0, 0, t_phy_w, t_phy_h,
				             SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
				HXTCefLog("updateViewGeometry: forced render hwnd=%p to (0,0) %dx%d",
				          (void*)t_render_hwnd, t_phy_w, t_phy_h);

				// GHOST FIX v16: move the render widget off-screen so its DComp
				// surface is not visible during edit mode.  WS_VISIBLE is kept 1
				// so the CEF compositor keeps running and OnLoadEnd fires normally.
				// DWMWA_CLOAK was tried (v15) but fails on child HWNDs (ok=0).
				// doSetVisible(true/false) will move it back to (0,0) or (-32000,0).
				m_render_visible = false;
				SetWindowPos(t_render_hwnd, NULL, -32000, 0, 0, 0,
				             SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
				HXTCefLog("updateViewGeometry: GHOST FIX v16/v17 moved render hwnd=%p "
				          "to off-screen (-32000,0) for edit mode",
				          (void*)t_render_hwnd);
			}
			else
			{
				HXTCefLog("updateViewGeometry: Chrome_WidgetWin_0 hwnd=%p "
				          "has no child yet (render hwnd not created)",
				          (void*)t_cef_widget);
			}

			// GHOST FIX v17: move Chrome_WidgetWin_0 itself off-screen.
			// v16 moved Chrome_RenderWidgetHostHWND but the ghost persisted at
			// screen (361,711) even when Chrome_RenderWidgetHostHWND was at
			// (-31639,711).  This proves Chrome's DComp composition target is
			// bound to Chrome_WidgetWin_0, not Chrome_RenderWidgetHostHWND.
			// Moving Chrome_WidgetWin_0 off-screen moves the DComp target
			// off-screen → ghost disappears.  doSetVisible will move it back.
			SetWindowPos(t_cef_widget, NULL, -32000, 0, 0, 0,
			             SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
			HXTCefLog("updateViewGeometry: GHOST FIX v17 moved cef_widget hwnd=%p "
			          "to off-screen (-32000,0) (DComp target follows Chrome_WidgetWin_0)",
			          (void*)t_cef_widget);
		}
	}

	// Diagnostic: after final MoveWindow, log screen positions of the viewport,
	// the CEF HWND, Chrome_WidgetWin_0, and any children of Chrome_WidgetWin_0.
	// Screen positions reveal whether any window is being composited at an
	// unexpected location (e.g. logical-pixel coords instead of physical).
	if (t_rect.width > 0 && t_rect.height > 0)
	{
		RECT t_vp_wr;
		GetWindowRect(m_viewport_hwnd, &t_vp_wr);
		RECT t_hwnd_wr;
		GetWindowRect(m_hwnd, &t_hwnd_wr);
		HXTCefLog("updateViewGeometry: vp_screen=(%d,%d,%d,%d) hwnd_screen=(%d,%d,%d,%d)",
			(int)t_vp_wr.left, (int)t_vp_wr.top, (int)t_vp_wr.right, (int)t_vp_wr.bottom,
			(int)t_hwnd_wr.left, (int)t_hwnd_wr.top, (int)t_hwnd_wr.right, (int)t_hwnd_wr.bottom);

		// Enumerate all descendants of m_hwnd (CEF browser HWND) recursively.
		// Each level is logged with its screen rect, class name and visibility.
		struct LogCefTree
		{
			static void Run(HWND p_hwnd, int p_depth)
			{
				HWND t_child = GetWindow(p_hwnd, GW_CHILD);
				int t_idx = 0;
				while (t_child != NULL)
				{
					RECT t_wr, t_cr;
					GetWindowRect(t_child, &t_wr);
					GetClientRect(t_child, &t_cr);
					char t_cls[64] = {0};
					GetClassNameA(t_child, t_cls, sizeof(t_cls));
					LONG t_style = GetWindowLong(t_child, GWL_STYLE);
					LONG t_exstyle = GetWindowLong(t_child, GWL_EXSTYLE);
					HXTCefLog("updateViewGeometry: depth=%d child[%d] hwnd=%p class='%s' screen=(%d,%d,%d,%d) clientwh=(%d,%d) visible=%d exstyle=0x%08x NOREDIRBITMAP=%d",
						p_depth, t_idx, (void*)t_child, t_cls,
						(int)t_wr.left, (int)t_wr.top, (int)t_wr.right, (int)t_wr.bottom,
						(int)(t_cr.right - t_cr.left), (int)(t_cr.bottom - t_cr.top),
						(t_style & WS_VISIBLE) ? 1 : 0,
						(unsigned)t_exstyle, !!(t_exstyle & 0x00200000));
					// Recurse to depth 4 to catch any DComp HWNDs below
					// Chrome_RenderWidgetHostHWND that we haven't found yet.
					if (p_depth < 4)
						Run(t_child, p_depth + 1);
					t_child = GetWindow(t_child, GW_HWNDNEXT);
					t_idx++;
				}
			}
		};
		LogCefTree::Run(m_hwnd, 1);
	}

	// We need to delete the bitmap that we've been caching
	DeleteObject(m_cached);
	m_cached = NULL;
}

void MCNativeLayerWin32::doSetViewportGeometry(const MCRectangle &p_rect)
{
	m_viewport_rect = p_rect;
	updateViewGeometry();
}

void MCNativeLayerWin32::doSetGeometry(const MCRectangle& p_rect)
{
	m_rect = p_rect;
	updateViewGeometry();
}

void MCNativeLayerWin32::doSetVisible(bool p_visible)
{
	// Also show/hide Chrome_WidgetWin_0 (the CEF widget window inside m_hwnd).
	// CEF creates Chrome_WidgetWin_0 with WS_VISIBLE=1 at browser creation time.
	// While Win32 does not display a child window whose parent chain contains a
	// hidden window, matching Chrome_WidgetWin_0's visibility to the layer
	// prevents any DWM compositing artefacts from occurring during the brief
	// period when the outer windows transition between hidden and visible states.
	HWND t_cef_widget = GetWindow(m_hwnd, GW_CHILD);
	if (p_visible && t_cef_widget != NULL)
	{
		// Log Chrome_WidgetWin_0 size at the moment it becomes visible so we
		// can confirm it is correctly sized before being composited on screen.
		RECT t_wrc = {};
		GetWindowRect(t_cef_widget, &t_wrc);
		RECT t_crc = {};
		GetClientRect(t_cef_widget, &t_crc);
		MCLog("doSetVisible(true): Chrome_WidgetWin_0 hwnd=%p "
		      "screen=(%d,%d,%d,%d) clientwh=(%d,%d) "
		      "target=(%d,%d)",
		      (void*)t_cef_widget,
		      (int)t_wrc.left, (int)t_wrc.top,
		      (int)t_wrc.right, (int)t_wrc.bottom,
		      (int)(t_crc.right - t_crc.left),
		      (int)(t_crc.bottom - t_crc.top),
		      m_cef_target_width, m_cef_target_height);
	}
	// v17 GHOST FIX: move Chrome_WidgetWin_0 on/off-screen.
	// v19 GHOST FIX: the v18 SetWindowRgn(m_hwnd) approach broke mode switching
	// because SetWindowRgn sends WM_WINDOWPOSCHANGED(STATECHANGED) to
	// Chrome_WidgetWin_0 → Chrome processes it → visible_now=1 → some
	// CEF/LiveCode callback calls doSetVisible(false) again.
	//
	// Root cause discovered from v18 log (all WS_EX_NOREDIRECTIONBITMAP=0):
	// Chrome uses a DComp child target (topmost=FALSE) on Chrome_WidgetWin_0.
	// When WE move Chrome_WidgetWin_0 to (-32000,0), Chrome receives
	// WM_WINDOWPOSCHANGED (via old_proc) and COMPENSATES by adjusting the
	// DComp visual offset by +32000 so the ghost stays at screen (361,711).
	//
	// v19 fix: SUPPRESS old_proc for WM_WINDOWPOSCHANGED and WM_MOVE when the
	// window moves to x=-32000 in edit mode.  Chrome never sees the move →
	// never compensates the DComp offset → DComp visual stays at (0,0) within
	// Chrome_WidgetWin_0 → but Chrome_WidgetWin_0 HWND is at (-32000,0) within
	// m_hwnd → DComp visual screen pos = (-31639,711) = off-screen.  Ghost gone.
	// This suppression is implemented in MCCefWidgetWndProc below.
	//
	// WS_VISIBLE stays 1 on Chrome_RenderWidgetHostHWND so CEF's compositor
	// keeps running and OnLoadEnd fires normally.
	m_render_visible = p_visible;
	const int t_off_x = p_visible ? 0 : -32000;

	// v20: removed SetWindowRgn(Chrome_WidgetWin_0, 0x0) belt-and-suspenders block.
	// SetWindowRgn sends WM_WINDOWPOSCHANGED(STATECHANGED) to Chrome_WidgetWin_0,
	// which causes Chrome to fire the CEF visibility callback → doSetVisible(false)
	// re-entered during doSetVisible(true) → mode switching broken.
	// The DComp compensation is already prevented by the v19 WM_WINDOWPOSCHANGED
	// suppression in MCCefWidgetWndProc, so no SetWindowRgn is needed here.

	if (t_cef_widget != NULL)
	{
		SetWindowPos(t_cef_widget, NULL, t_off_x, 0, 0, 0,
		             SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
		HXTCefLog("doSetVisible(%d): v17/v19 moved cef_widget hwnd=%p to x=%d",
		          (int)p_visible, (void*)t_cef_widget, t_off_x);
	}
	// Also move the render HWND within Chrome_WidgetWin_0 (belt-and-suspenders).
	HWND t_render_hwnd = (t_cef_widget != NULL) ? GetWindow(t_cef_widget, GW_CHILD) : NULL;
	if (t_render_hwnd != NULL)
	{
		SetWindowPos(t_render_hwnd, NULL, t_off_x, 0, 0, 0,
		             SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
		HXTCefLog("doSetVisible(%d): moved render hwnd=%p to x=%d",
		          (int)p_visible, (void*)t_render_hwnd, t_off_x);
	}
	else
	{
		HXTCefLog("doSetVisible(%d): render hwnd not found (t_cef_widget=%p)",
		          (int)p_visible, (void*)t_cef_widget);
	}

	// v22: removed ShowWindow(t_cef_widget, ...) entirely.
	// ShowWindow(cef_widget, SW_SHOWNOACTIVATE) triggers Chrome's HideImpl
	// synchronously on the calling thread.  HideImpl fires the CEF visibility
	// callback → doSetVisible(false) re-enters while m_render_visible has
	// already been set to true → Chrome moves Chrome_WidgetWin_0 to x=-32000
	// BEFORE WM_WINDOWPOSCHANGING fires, so the position-block (which checks
	// isRenderVisible()) sees edit-mode state and allows the move.  The widget
	// ends up off-screen in browse mode and content is never visible.
	//
	// DComp surfaces are independent of WS_VISIBLE (the ghost proved this:
	// DComp content was visible even with WS_VISIBLE=0 on Chrome_WidgetWin_0).
	// Therefore no ShowWindow(cef_widget) is needed: in browse mode the HWND
	// sits at x=0 → DComp renders at (361,711) = visible content.  In edit
	// mode v19 suppresses the WM_WINDOWPOSCHANGED DComp-compensation move so
	// DComp stays at (-31639,711) = off-screen → ghost gone.  No ShowWindow =
	// no HideImpl = no CEF callback re-entry.
	ShowWindow(m_hwnd, p_visible ? SW_SHOWNOACTIVATE : SW_HIDE);
	ShowWindow(m_viewport_hwnd, p_visible ? SW_SHOWNOACTIVATE : SW_HIDE);
}

void MCNativeLayerWin32::doRelayer()
{
    // Find which native layer this should be inserted after
	MCObject *t_before;
	t_before = findNextLayerBelow(m_object);

	// Insert the widget in the correct place (but only if the card is current)
	if (isAttached() && m_object->getstack()->getcard() == m_object->getstack()->getcurcard())
	{
		HWND t_insert_after;
		if (t_before != NULL)
		{
			MCNativeLayerWin32 *t_before_layer;
			t_before_layer = reinterpret_cast<MCNativeLayerWin32*>(t_before->getNativeLayer());
			t_insert_after = t_before_layer->m_hwnd;
		}
		else
		{
			t_insert_after = HWND_BOTTOM;
		}

		// Only the window Z order needs to be adjusted
		SetWindowPos(m_hwnd, t_insert_after, 0, 0, 0, 0, SWP_NOMOVE|SWP_NOSIZE|SWP_NOACTIVATE);
	}	
}

HWND MCNativeLayerWin32::getStackWindow()
{
    return (HWND)m_object->getstack()->getrealwindow();
}

bool MCNativeLayerWin32::GetNativeView(void *&r_view)
{
	r_view = m_hwnd;
	return true;
}

////////////////////////////////////////////////////////////////////////////////

MCNativeLayer* MCNativeLayer::CreateNativeLayer(MCObject *p_object, void *p_view)
{
	return new MCNativeLayerWin32(p_object, (HWND)p_view);
}

extern HINSTANCE MChInst;
bool getcontainerclass(ATOM &r_class)
{
	static ATOM s_container_class = 0;

	if (s_container_class == 0)
	{
		WNDCLASSEX t_class;
		MCMemoryClear(t_class);

		t_class.cbSize = sizeof(WNDCLASSEX);
		t_class.lpfnWndProc = DefWindowProc;
		t_class.hInstance = MChInst;
		t_class.lpszClassName = "LCCONTAINER";

		s_container_class = RegisterClassEx(&t_class);

		DWORD t_err;
		t_err = GetLastError();

		if (s_container_class == 0)
			return false;
	}

	r_class = s_container_class;

	return true;
}

bool MCNativeLayer::CreateNativeContainer(MCObject *p_object, void *&r_container)
{
	ATOM t_class;
	if (!getcontainerclass(t_class))
		return false;

	HWND t_container;
	t_container = CreateWindow((LPCSTR)t_class, "Container", WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 1, 1, (HWND)p_object->getstack()->getrealwindow(), nil, MChInst, nil);

	DWORD t_err;
	t_err = GetLastError();

	if (t_container == nil)
		return false;

	r_container = t_container;
	return true;
}

void MCNativeLayer::ReleaseNativeView(void *p_view)
{
	DestroyWindow((HWND)p_view);
}

////////////////////////////////////////////////////////////////////////////////
                                    