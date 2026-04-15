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
	m_cef_subclassed(false)
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
    HXTCefLog("doAttach: entry m_hwnd=%p m_viewport_hwnd=%p",
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
        // Forcing SWP_NOMOVE keeps it at (0,0) within its parent.
        if (t_layer != NULL && !(t_wp->flags & SWP_NOMOVE))
        {
            if (t_wp->x != 0 || t_wp->y != 0)
            {
                HXTCefLog("MCCefWidgetWndProc: blocking position (%d,%d) -> SWP_NOMOVE",
                          t_wp->x, t_wp->y);
                t_wp->flags |= SWP_NOMOVE;
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
        // CEF 74 sends WM_SIZE directly (not via SetWindowPos) with DIP
        // dimensions after it processes a resize internally.  This bypasses
        // WM_WINDOWPOSCHANGING, so SWP_NOSIZE cannot block it.  Instead we
        // override lParam here so that CEF's WM_SIZE handler allocates its
        // compositor surface at the correct physical-pixel size rather than
        // the DPI-divided DIP size.
        if (t_layer != NULL && t_target_w > 0 && t_target_h > 0 &&
            (t_new_w != t_target_w || t_new_h != t_target_h))
        {
            HXTCefLog("MCCefWidgetWndProc: WM_SIZE overriding %dx%d -> %dx%d",
                      t_new_w, t_new_h, t_target_w, t_target_h);
            lParam = MAKELPARAM((WORD)t_target_w, (WORD)t_target_h);
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
			HXTCefLog("updateViewGeometry: found child hwnd=%p class='%s' "
			          "widget_tid=%lu cur_tid=%lu same_thread=%d",
			          (void*)t_cef_widget, t_class,
			          (unsigned long)t_widget_tid, (unsigned long)t_cur_tid,
			          (t_widget_tid == t_cur_tid));

			// Update the target size BEFORE installing/updating the WndProc so
			// the new proc never sees a stale target when it first fires.
			m_cef_target_width  = t_rect.width;
			m_cef_target_height = t_rect.height;

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

			// Force Chrome_WidgetWin_0 to the correct physical size now.
			// MCCefWidgetWndProc will block any subsequent CEF-initiated resize
			// that would shrink it back to DIP dimensions.
			SetWindowPos(t_cef_widget, NULL, 0, 0, t_rect.width, t_rect.height,
			             SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
			HXTCefLog("updateViewGeometry: forced child hwnd=%p to %dx%d",
			          (void*)t_cef_widget, t_rect.width, t_rect.height);

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

				// Also force Chrome_RenderWidgetHostHWND position to (0,0) right
				// now, in case CEF already offset it before we installed the hook.
				SetWindowPos(t_render_hwnd, NULL, 0, 0, 0, 0,
				             SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOOWNERZORDER);
				HXTCefLog("updateViewGeometry: forced render hwnd=%p to (0,0)",
				          (void*)t_render_hwnd);
			}
			else
			{
				HXTCefLog("updateViewGeometry: Chrome_WidgetWin_0 hwnd=%p "
				          "has no child yet (render hwnd not created)",
				          (void*)t_cef_widget);
			}
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
					HXTCefLog("updateViewGeometry: depth=%d child[%d] hwnd=%p class='%s' screen=(%d,%d,%d,%d) clientwh=(%d,%d) visible=%d",
						p_depth, t_idx, (void*)t_child, t_cls,
						(int)t_wr.left, (int)t_wr.top, (int)t_wr.right, (int)t_wr.bottom,
						(int)(t_cr.right - t_cr.left), (int)(t_cr.bottom - t_cr.top),
						(t_style & WS_VISIBLE) ? 1 : 0);
					// Recurse one more level to catch Chrome_WidgetWin_0 children
					if (p_depth < 2)
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
	if (t_cef_widget != NULL)
		ShowWindow(t_cef_widget, p_visible ? SW_SHOWNOACTIVATE : SW_HIDE);
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