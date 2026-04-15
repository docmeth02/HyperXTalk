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
// libbrowser_webview2_win.cpp
// Windows-specific factory / library lifecycle for the WebView2 backend.
//
// Wiring into the existing factory system
// ----------------------------------------
// MCWebView2BrowserFactoryCreate() is the entry point.  Call it from
// MCBrowserLibraryInitialize() (in libbrowser.cpp) alongside the CEF
// factory registration, or replace it entirely when building with
// MC_BROWSER_WEBVIEW2.  Register the returned factory under the ID
// "WebView2" via the MCBrowserFactoryMap mechanism.
//
// Minimum dependency
// ------------------
// WebView2 runtime must be installed on the end-user machine (ships with
// Windows 10/11 via Microsoft Edge).  The SDK files (WebView2.h,
// WebView2Loader.dll / WebView2LoaderStatic.lib) come from the
// Microsoft.Web.WebView2 NuGet package.
// ============================================================

#include <core.h>
#include "libbrowser_webview2.h"

#ifdef _WIN32

// ============================================================
// MCWebView2BrowserFactory
// ============================================================

bool MCWebView2BrowserFactory::CreateBrowser(void   *p_display,
                                              void   *p_parent_view,
                                              MCBrowser *&r_browser)
{
    // p_display   — unused on Windows (X11 display on Linux).
    // p_parent_view — the HWND of the viewport container created by
    //                 MCNativeLayerWin32.  Cast to HWND.
    HWND t_parent = (HWND)p_parent_view;
    if (t_parent == nullptr)
        return false;

    MCWebView2Browser *t_browser =
        new (nothrow) MCWebView2Browser(t_parent);

    if (t_browser == nullptr)
        return false;

    // Two-phase init: creates the WebView2 environment and controller
    // by pumping the Win32 message loop until the async callbacks complete.
    if (!t_browser->Initialize())
    {
        delete t_browser;
        return false;
    }

    r_browser = t_browser;
    return true;
}

// ============================================================
// MCWebView2BrowserFactoryCreate
// ============================================================
// Creates and returns the factory singleton.  Called from library
// initialisation.  The caller is responsible for registering the
// returned factory under the desired factory ID (e.g. "WebView2").

bool MCWebView2BrowserFactoryCreate(MCBrowserFactoryRef &r_factory)
{
    MCWebView2BrowserFactory *t_factory =
        new (nothrow) MCWebView2BrowserFactory();

    if (t_factory == nullptr)
        return false;

    r_factory = t_factory;
    return true;
}

// ============================================================
// Library initialisation / finalisation hooks
// ============================================================
// These are called from MCBrowserLibraryInitialize / Finalize in
// libbrowser.cpp.  When building with MC_BROWSER_WEBVIEW2, replace
// the equivalent MCCefBrowserFactoryCreate call with this one.
//
// NOTE: WebView2 has no global initialisation equivalent to
// CefInitialize().  The runtime is loaded on first
// CreateCoreWebView2EnvironmentWithOptions() call.  Similarly there
// is no global shutdown — releasing all ICoreWebView2Controller
// objects (via MCWebView2Browser::~MCWebView2Browser → Close()) is
// sufficient.

bool MCWebView2BrowserLibraryInitialize()
{
    // Nothing to do at library init time for WebView2.
    return true;
}

void MCWebView2BrowserLibraryFinalize()
{
    // Nothing to do at library finalize time for WebView2.
}

#endif // _WIN32
