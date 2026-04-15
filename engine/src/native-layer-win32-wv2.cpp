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

// ============================================================
// native-layer-win32-wv2.cpp
// Simplified Win32 native layer for the WebView2 browser backend.
//
// This file replaces native-layer-win32.cpp when building with
// MC_BROWSER_WEBVIEW2.  It provides the same MCNativeLayerWin32 class
// but without all the CEF ghost-fix HWND manipulation.
//
// How it works
// ------------
//  MCNativeLayerWin32 creates a viewport container HWND (m_viewport_hwnd)
//  and parents the browser's HWND (m_hwnd) inside it.  The browser widget
//  layer creates an MCWebView2Browser via the factory, passing m_hwnd as
//  p_parent_view.  MCWebView2Browser::Initialize() creates an
//  ICoreWebView2Controller parented to m_hwnd and installs a WM_SIZE
//  subclass so the controller bounds automatically track m_hwnd's size.
//
//  The native layer only needs to:
//    - create / destroy m_viewport_hwnd
//    - show / hide both HWNDs
//    - move / resize both HWNDs via updateViewGeometry()
//
//  No WNDPROC replacement, no DComp offset manipulation, no ghost fixes.
// ============================================================

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

// Use the WebView2 native-layer header (not the CEF one).
#include "native-layer-win32-wv2.h"

// ============================================================
// Constructor / Destructor
// ============================================================

MCNativeLayerWin32::MCNativeLayerWin32(MCObject *p_object, HWND p_view)
    : m_hwnd(p_view)
    , m_cached(NULL)
    , m_viewport_hwnd(NULL)
{
    m_object = p_object;
    MCMemoryClear(&m_intersect_rect, sizeof(m_intersect_rect));
}

MCNativeLayerWin32::~MCNativeLayerWin32()
{
    if (m_viewport_hwnd != NULL)
    {
        if (m_hwnd != NULL)
            doDetach();
        DestroyWindow(m_viewport_hwnd);
    }
    if (m_cached != NULL)
        DeleteObject(m_cached);
}

// ============================================================
// doAttach / doDetach
// ============================================================

void MCNativeLayerWin32::doAttach()
{
    HWND t_parent = getStackWindow();

    if (m_viewport_hwnd == NULL)
        /* UNCHECKED */ CreateNativeContainer(m_object, (void *&)m_viewport_hwnd);

    // Only re-wire the parent chain when genuinely needed — repeated SetParent
    // calls during widget open phases can cause visual artefacts.
    bool t_reparent =
        (GetParent(m_viewport_hwnd) != t_parent) ||
        (GetParent(m_hwnd) != m_viewport_hwnd);

    if (t_reparent)
    {
        ShowWindow(m_hwnd, SW_HIDE);
        SetParent(m_viewport_hwnd, t_parent);
        SetParent(m_hwnd, m_viewport_hwnd);
    }

    // Restore geometry / visibility to the last known state.
    doSetViewportGeometry(m_viewport_rect);
    doSetGeometry(m_rect);
    doSetVisible(ShouldShowLayer());
}

void MCNativeLayerWin32::doDetach()
{
    // Hide without reparenting — keeps the HWND hierarchy intact for the
    // next attach cycle and avoids any DWM snapshot artefacts.
    doSetVisible(false);
}

// ============================================================
// doPaint  (renders cached bitmap in edit mode — identical to CEF version)
// ============================================================

bool MCNativeLayerWin32::doPaint(MCGContextRef p_context)
{
    MCRectangle t_rect = m_rect;

    bool t_success = true;

    HDC t_hwindowdc = GetDC(m_hwnd);
    HDC t_hdc = NULL;

    if (t_success)
    {
        t_hdc = CreateCompatibleDC(t_hwindowdc);
        t_success = (t_hdc != NULL);
    }

    if (t_success && m_cached == NULL)
    {
        m_cached = CreateCompatibleBitmap(t_hwindowdc,
                                          t_rect.width, t_rect.height);
        t_success = (m_cached != NULL);
    }

    BITMAP t_bitmap;
    void  *t_bits = NULL;

    if (t_success)
    {
        SelectObject(t_hdc, m_cached);
        SendMessage(m_hwnd, WM_PRINT, (WPARAM)t_hdc,
                    PRF_CHILDREN | PRF_CLIENT);
        GetObjectW(m_cached, sizeof(BITMAP), &t_bitmap);
        t_success = MCMemoryAllocate(t_bitmap.bmWidth * t_bitmap.bmHeight * 4,
                                     t_bits);
    }

    MCGImageRef t_gimage = NULL;

    if (t_success)
    {
        BITMAPINFOHEADER t_bi;
        t_bi.biSize          = sizeof(BITMAPINFOHEADER);
        t_bi.biWidth         = t_bitmap.bmWidth;
        t_bi.biHeight        = -t_bitmap.bmHeight; // top-down
        t_bi.biPlanes        = 1;
        t_bi.biBitCount      = 32;
        t_bi.biCompression   = BI_RGB;
        t_bi.biSizeImage     = 0;
        t_bi.biXPelsPerMeter = 0;
        t_bi.biYPelsPerMeter = 0;
        t_bi.biClrUsed       = 0;
        t_bi.biClrImportant  = 0;

        GetDIBits(t_hdc, m_cached, 0, t_bitmap.bmHeight, t_bits,
                  (LPBITMAPINFO)&t_bi, DIB_RGB_COLORS);

        // Force fully-opaque alpha.
        uint32_t *t_argb = reinterpret_cast<uint32_t *>(t_bits);
        for (int i = 0; i < t_bitmap.bmWidth * t_bitmap.bmHeight; i++)
            t_argb[i] |= 0xFF000000;

        MCGRaster t_raster;
        t_raster.format = kMCGRasterFormat_ARGB;
        t_raster.width  = t_bitmap.bmWidth;
        t_raster.height = t_bitmap.bmHeight;
        t_raster.stride = 4 * t_bitmap.bmWidth;
        t_raster.pixels = t_bits;

        t_success = MCGImageCreateWithRasterNoCopy(t_raster, t_gimage);
    }

    if (t_success)
    {
        MCGRectangle t_r = {{0, 0},
                            {MCGFloat(t_rect.width), MCGFloat(t_rect.height)}};
        MCGContextDrawImage(p_context, t_gimage, t_r, kMCGImageFilterNone);
    }

    if (t_gimage != NULL) MCGImageRelease(t_gimage);
    if (t_bits != NULL)   MCMemoryDeallocate(t_bits);
    if (t_hdc != NULL)    DeleteDC(t_hdc);
    ReleaseDC(m_hwnd, t_hwindowdc);

    return t_success;
}

// ============================================================
// Geometry
// ============================================================

void MCNativeLayerWin32::updateViewGeometry()
{
    // Clamp the widget rect to the visible viewport intersection.
    m_intersect_rect = MCU_intersect_rect(m_viewport_rect, m_rect);

    // Transform to device (physical pixel) coordinates.
    MCRectangle t_dev_intersect =
        MCRectangleGetTransformedBounds(m_intersect_rect,
                                        m_object->getstack()->getdevicetransform());
    MCRectangle t_dev_rect =
        MCRectangleGetTransformedBounds(m_rect,
                                        m_object->getstack()->getdevicetransform());

    // Position and size the viewport container.
    MoveWindow(m_viewport_hwnd,
               t_dev_intersect.x, t_dev_intersect.y,
               t_dev_intersect.width, t_dev_intersect.height,
               ShouldShowLayer());

    // Position m_hwnd within the viewport so that the visible portion of
    // the widget appears at the correct offset inside the clipping container.
    int t_hwnd_x = t_dev_rect.x - t_dev_intersect.x;
    int t_hwnd_y = t_dev_rect.y - t_dev_intersect.y;
    MoveWindow(m_hwnd,
               t_hwnd_x, t_hwnd_y,
               t_dev_rect.width, t_dev_rect.height,
               ShouldShowLayer());

    // The WM_SIZE subclass installed by MCWebView2Browser::Initialize()
    // will fire in response to the MoveWindow above and call
    // controller->put_Bounds(GetClientRect(m_hwnd)) automatically.

    // Invalidate the paint cache.
    if (m_cached != NULL)
    {
        DeleteObject(m_cached);
        m_cached = NULL;
    }
}

void MCNativeLayerWin32::doSetGeometry(const MCRectangle &p_rect)
{
    m_rect = p_rect;
    updateViewGeometry();
}

void MCNativeLayerWin32::doSetViewportGeometry(const MCRectangle &p_rect)
{
    m_viewport_rect = p_rect;
    updateViewGeometry();
}

// ============================================================
// Visibility
// ============================================================

void MCNativeLayerWin32::doSetVisible(bool p_visible)
{
    // WebView2 is a proper Win32 control: hiding the parent HWND hierarchy
    // is sufficient.  The ICoreWebView2Controller.put_IsVisible() call is
    // handled by the MCWebView2Browser layer via its own visibility logic
    // when the LiveCode widget transitions between edit and browse modes.
    ShowWindow(m_hwnd,          p_visible ? SW_SHOWNOACTIVATE : SW_HIDE);
    ShowWindow(m_viewport_hwnd, p_visible ? SW_SHOWNOACTIVATE : SW_HIDE);
}

// ============================================================
// Z-order
// ============================================================

void MCNativeLayerWin32::doRelayer()
{
    MCObject *t_before = findNextLayerBelow(m_object);

    if (isAttached() &&
        m_object->getstack()->getcard() ==
        m_object->getstack()->getcurcard())
    {
        HWND t_insert_after;
        if (t_before != NULL)
        {
            MCNativeLayerWin32 *t_layer =
                reinterpret_cast<MCNativeLayerWin32 *>(
                    t_before->getNativeLayer());
            t_insert_after = t_layer->m_hwnd;
        }
        else
        {
            t_insert_after = HWND_BOTTOM;
        }

        SetWindowPos(m_hwnd, t_insert_after, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
    }
}

// ============================================================
// Accessors
// ============================================================

HWND MCNativeLayerWin32::getStackWindow()
{
    return (HWND)m_object->getstack()->getrealwindow();
}

bool MCNativeLayerWin32::GetNativeView(void *&r_view)
{
    r_view = m_hwnd;
    return true;
}

// ============================================================
// Static factory functions (same as CEF version — platform entry points)
// ============================================================

MCNativeLayer *MCNativeLayer::CreateNativeLayer(MCObject *p_object,
                                                 void    *p_view)
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
        t_class.cbSize        = sizeof(WNDCLASSEX);
        t_class.lpfnWndProc   = DefWindowProc;
        t_class.hInstance     = MChInst;
        t_class.lpszClassName = "LCCONTAINER";

        s_container_class = RegisterClassEx(&t_class);
        if (s_container_class == 0)
            return false;
    }

    r_class = s_container_class;
    return true;
}

bool MCNativeLayer::CreateNativeContainer(MCObject *p_object,
                                           void   *&r_container)
{
    ATOM t_class;
    if (!getcontainerclass(t_class))
        return false;

    HWND t_container = CreateWindow(
        (LPCSTR)t_class, "Container",
        WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS,
        0, 0, 1, 1,
        (HWND)p_object->getstack()->getrealwindow(),
        NULL, MChInst, NULL);

    if (t_container == NULL)
        return false;

    r_container = t_container;
    return true;
}

void MCNativeLayer::ReleaseNativeView(void *p_view)
{
    DestroyWindow((HWND)p_view);
}

////////////////////////////////////////////////////////////////////////////////
