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

#ifndef __MC_WIDGET_NATIVE__
#define __MC_WIDGET_NATIVE__

#include "native-layer.h"

#include <windows.h>

class MCNativeLayerWin32 : public MCNativeLayer
{
public:
    
	virtual bool GetNativeView(void *&r_view);
	
    MCNativeLayerWin32(MCObject *p_object, HWND p_view);
    ~MCNativeLayerWin32();
    
private:
    
    HWND m_hwnd;
    HBITMAP m_cached;

	HWND m_viewport_hwnd;
	MCRectangle m_intersect_rect;

	// Target physical-pixel size for Chrome_WidgetWin_0.  Kept in sync by
	// updateViewGeometry() and read by MCCefWidgetWndProc (a file-static free
	// function) to block Chromium's DPI-scaled resize back-correction.
	int m_cef_target_width;
	int m_cef_target_height;
	bool m_cef_subclassed;
	// v16: true = browse mode (render widget on-screen at (0,0));
	//       false = edit mode (render widget moved to -32000,0 so DComp is off-screen).
	// WS_VISIBLE is kept 1 in both modes so the CEF compositor keeps running
	// and OnLoadEnd fires normally.
	bool m_render_visible;

public:
	// Accessors for MCCefWidgetWndProc (free function, cannot access private members).
	int getCefTargetWidth()  const { return m_cef_target_width; }
	int getCefTargetHeight() const { return m_cef_target_height; }
	bool isRenderVisible()   const { return m_render_visible; }
private:

	// (WndProc replacement MCCefWidgetWndProc is a file-static free function
	//  in native-layer-win32.cpp — no longer a class member.)

    // Returns the HWND for the stack containing this widget
    HWND getStackWindow();

    // Performs the attach/detach operations
	virtual void doAttach();
	virtual void doDetach();

	virtual bool doPaint(MCGContextRef p_context);
	virtual void doSetGeometry(const MCRectangle &p_rect);
	virtual void doSetViewportGeometry(const MCRectangle &p_rect);
	virtual void doSetVisible(bool p_visible);

	void updateViewGeometry();

	// Performs a relayering operation
	virtual void doRelayer();
};

#endif // ifndef __MC_WIDGET_NATIVE__
