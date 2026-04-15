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
// native-layer-win32-wv2.h
// Simplified Win32 native layer for the WebView2 browser backend.
//
// Drop-in replacement for native-layer-win32.h when building with
// MC_BROWSER_WEBVIEW2.  Uses the same class name (MCNativeLayerWin32)
// and the same include guard so only one definition is compiled.
//
// Differences from the CEF version
// ---------------------------------
//  * No MCCefWidgetWndProc / SetWindowLongPtr subclassing.
//  * No DComp ghost-fix logic (v15–v22).
//  * No m_render_visible / edit↔browse mode position tracking.
//  * No physical-pixel DPI override for Chrome_WidgetWin_0.
//
// WebView2 handles DPI correctly as a proper Win32 control, so none
// of the above is needed.  The native layer's job is simply to create
// a viewport container HWND and show/hide/resize it on demand.
// ============================================================

#ifndef __MC_WIDGET_NATIVE__
#define __MC_WIDGET_NATIVE__

#include "native-layer.h"
#include <windows.h>

class MCNativeLayerWin32 : public MCNativeLayer
{
public:
    MCNativeLayerWin32(MCObject *p_object, HWND p_view);
    ~MCNativeLayerWin32();

    virtual bool GetNativeView(void *&r_view);

private:
    // The HWND passed in at construction time (the browser widget's native
    // window — WebView2 creates its controller inside this window).
    HWND     m_hwnd;

    // Cached bitmap for painting in edit mode (same as CEF version).
    HBITMAP  m_cached;

    // Viewport container HWND (child of the stack window, parent of m_hwnd).
    // Clips the web content to the widget's visible intersection rect.
    HWND     m_viewport_hwnd;

    // Last known intersection of the widget rect and its viewport rect.
    MCRectangle m_intersect_rect;

    // Returns the stack's top-level HWND.
    HWND getStackWindow();

    // WebView2 renders via DirectComposition, not GDI, so WM_PRINT-based
    // rendering to an MCGContext does not capture live content.  Returning
    // false here causes the edit-mode path in widget-ref.cpp to fall through
    // to the LCB OnPaint handler (globe placeholder) instead of calling the
    // broken doPaint() / WM_PRINT path.
    virtual bool GetCanRenderToContext() { return false; }

    // Native-layer lifecycle
    virtual void doAttach();
    virtual void doDetach();

    // Paint (not called when GetCanRenderToContext() returns false, but kept
    // to satisfy the base-class vtable)
    virtual bool doPaint(MCGContextRef p_context);

    // Geometry
    virtual void doSetGeometry(const MCRectangle &p_rect);
    virtual void doSetViewportGeometry(const MCRectangle &p_rect);

    // Visibility
    virtual void doSetVisible(bool p_visible);

    // Z-order
    virtual void doRelayer();

    // Internal — recomputes m_viewport_hwnd position + size from m_rect
    // and m_viewport_rect, then resizes m_hwnd to match.
    void updateViewGeometry();
};

#endif // __MC_WIDGET_NATIVE__
