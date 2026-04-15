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
// libbrowser_webview2.h
// Windows WebView2 backend for the LiveCode browser widget.
//
// Replaces the CEF backend (libbrowser_cef*.cpp) for the Windows path.
// Requires the Microsoft.Web.WebView2 NuGet package (WebView2.h / WebView2Loader.dll).
//
// Architecture
// ------------
//  MCWebView2Browser       — implements MCBrowser via ICoreWebView2Controller
//  MCWebView2BrowserFactory — MCBrowserFactory that produces MCWebView2Browser
//
// Thread model
// ------------
//  Initialize() must be called on the UI thread that owns m_parent_hwnd.
//  All WebView2 event callbacks are delivered on that same UI thread.
//  EvaluateJavaScript() pumps the message loop while waiting for the async
//  result so it appears synchronous to callers (same pattern as CEF).
// ============================================================

#ifndef __LIBBROWSER_WEBVIEW2_H__
#define __LIBBROWSER_WEBVIEW2_H__

#include "libbrowser_internal.h"

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <wrl/client.h>

// WebView2 SDK — requires Microsoft.Web.WebView2 NuGet package.
// Add $(SolutionDir)packages\Microsoft.Web.WebView2.X.Y.Z\build\native\include
// to the project's Additional Include Directories.
#include <WebView2.h>

// ============================================================
// MCWebView2Browser
// ============================================================

class MCWebView2Browser : public MCBrowserBase
{
public:
    MCWebView2Browser(HWND p_parent_hwnd);
    virtual ~MCWebView2Browser();

    // Two-phase init: creates the WebView2 environment + controller synchronously
    // by pumping the Win32 message loop while the async callbacks complete.
    // Must be called on the UI thread before any other method.
    bool Initialize();

    // ----------------------------------------------------------------
    // MCBrowser interface
    // ----------------------------------------------------------------
    virtual void *GetNativeLayer();

    virtual bool GetRect(MCBrowserRect &r_rect);
    virtual bool SetRect(const MCBrowserRect &p_rect);

    virtual bool GetBoolProperty(MCBrowserProperty p_property, bool &r_value);
    virtual bool SetBoolProperty(MCBrowserProperty p_property, bool p_value);

    virtual bool GetStringProperty(MCBrowserProperty p_property, char *&r_utf8_string);
    virtual bool SetStringProperty(MCBrowserProperty p_property, const char *p_utf8_string);

    virtual bool GetIntegerProperty(MCBrowserProperty p_property, int32_t &r_value);
    virtual bool SetIntegerProperty(MCBrowserProperty p_property, int32_t p_value);

    virtual bool GoBack();
    virtual bool GoForward();
    virtual bool GoToURL(const char *p_url);
    virtual bool LoadHTMLText(const char *p_htmltext, const char *p_base_url);
    virtual bool StopLoading();
    virtual bool Reload();
    virtual bool EvaluateJavaScript(const char *p_script, char *&r_result);

private:
    // ----------------------------------------------------------------
    // String helpers (no CEF/ICU dependency — plain Win32 API)
    // ----------------------------------------------------------------
    static bool Utf8ToWide(const char *p_utf8, wchar_t *&r_wide);
    static bool WideToUtf8(const wchar_t *p_wide, char *&r_utf8);

    // Allocate + copy a UTF-8 string using MCBrowserMemoryAllocate.
    // Frees the existing *x_dst (via MCBrowserMemoryDeallocate) first.
    static bool StringCopy(const char *p_src, char *&x_dst);

    // ----------------------------------------------------------------
    // Message-loop pump (blocks caller until *r_done == true)
    // ----------------------------------------------------------------
    static bool PumpUntilDone(bool &r_done, DWORD p_timeout_ms = 10000);

    // ----------------------------------------------------------------
    // Internal state management
    // ----------------------------------------------------------------
    // Re-injects the livecode.* handler shim into every new document.
    void UpdateHandlerShim();

    // Pushes current m_js_enabled, m_context_menu_enabled, m_user_agent
    // into the ICoreWebView2Settings object.
    void ApplySettings();

    // ----------------------------------------------------------------
    // WebView2 event callbacks (all delivered on the UI thread)
    // ----------------------------------------------------------------
    HRESULT OnNavigationStarting(ICoreWebView2 *p_sender,
                                  ICoreWebView2NavigationStartingEventArgs *p_args);
    HRESULT OnNavigationCompleted(ICoreWebView2 *p_sender,
                                   ICoreWebView2NavigationCompletedEventArgs *p_args);
    HRESULT OnContentLoading(ICoreWebView2 *p_sender,
                              ICoreWebView2ContentLoadingEventArgs *p_args);
    HRESULT OnSourceChanged(ICoreWebView2 *p_sender,
                             ICoreWebView2SourceChangedEventArgs *p_args);
    HRESULT OnWebMessageReceived(ICoreWebView2 *p_sender,
                                  ICoreWebView2WebMessageReceivedEventArgs *p_args);
    HRESULT OnNewWindowRequested(ICoreWebView2 *p_sender,
                                  ICoreWebView2NewWindowRequestedEventArgs *p_args);

    // Parse the newline-delimited message sent by the JS shim and
    // invoke the registered MCBrowserJavaScriptHandler.
    // Message format:
    //   line 0: "lc_handler"
    //   line 1: handler name (UTF-8)
    //   line 2+: typed args  ("b:true", "i:42", "d:3.14", "s:text", "n:")
    void DispatchWebMessage(const wchar_t *p_msg);

    // ----------------------------------------------------------------
    // WebView2 COM objects
    // ----------------------------------------------------------------
    Microsoft::WRL::ComPtr<ICoreWebView2Environment> m_environment;
    Microsoft::WRL::ComPtr<ICoreWebView2Controller>  m_controller;
    Microsoft::WRL::ComPtr<ICoreWebView2>            m_webview;

    // ----------------------------------------------------------------
    // Host windows
    // ----------------------------------------------------------------
    // m_parent_hwnd — the stack window HWND passed to CreateBrowser().
    //   Used only to create m_host_hwnd; never passed to WebView2 or
    //   the native layer.
    HWND m_parent_hwnd;

    // m_host_hwnd — a dedicated WS_CHILD HWND created inside m_parent_hwnd
    //   during Initialize().  The WebView2 controller is parented to THIS
    //   HWND, not to m_parent_hwnd.  GetNativeLayer() returns m_host_hwnd so
    //   that MCNativeLayerWin32 correctly positions/sizes/shows/hides it.
    //
    //   This mirrors how MCCefWin32Browser::GetNativeLayer() returns the
    //   CEF-created child HWND (Chrome_WidgetWin_0's parent) rather than
    //   m_parent_window (the stack window).  Without a separate host HWND,
    //   the WebView2 DComp surface is anchored to the full stack window and
    //   appears everywhere — the "ghost render" the user observes.
    HWND m_host_hwnd;

    // ----------------------------------------------------------------
    // Event registration tokens (needed to unregister on destruction)
    // ----------------------------------------------------------------
    EventRegistrationToken m_tok_nav_starting;
    EventRegistrationToken m_tok_nav_completed;
    EventRegistrationToken m_tok_content_loading;
    EventRegistrationToken m_tok_source_changed;
    EventRegistrationToken m_tok_web_message;
    EventRegistrationToken m_tok_new_window;

    // ID returned by AddScriptToExecuteOnDocumentCreated for the live-code shim.
    // CoTaskMemAlloc'd — freed with CoTaskMemFree.
    LPWSTR m_shim_script_id;

    // WM_SIZE / WM_SHOWWINDOW subclass installed on m_host_hwnd so the
    // controller bounds track the host HWND size automatically, and
    // put_IsVisible is synchronised whenever the HWND is shown or hidden.
    static const UINT_PTR k_size_subclass_id = 0x574532; // 'WV2'
    static LRESULT CALLBACK SizeSubclassProc(HWND hwnd, UINT msg,
                                              WPARAM wp, LPARAM lp,
                                              UINT_PTR id, DWORD_PTR data);

    // ----------------------------------------------------------------
    // Cached / deferred state
    // (properties set before Initialize() completes are applied on init)
    // ----------------------------------------------------------------
    MCBrowserRect m_rect;

    char *m_url;           // last known source URL (UTF-8)
    char *m_pending_url;   // URL deferred until after Initialize()
    char *m_html_text;     // HTML deferred until after Initialize()
    char *m_html_base_url; // base URL for deferred HTML load (informational)
    char *m_user_agent;    // custom user-agent override
    char *m_handler_list;  // '\n'-separated JS handler names

    bool m_js_enabled;
    bool m_allow_new_windows;
    bool m_allow_user_interaction;
    bool m_context_menu_enabled;
    bool m_vscroll_enabled;
    bool m_hscroll_enabled;
};

// ============================================================
// MCWebView2BrowserFactory
// ============================================================

class MCWebView2BrowserFactory : public MCBrowserFactory
{
public:
    virtual bool CreateBrowser(void *p_display, void *p_parent_view,
                               MCBrowser *&r_browser);
};

bool MCWebView2BrowserFactoryCreate(MCBrowserFactoryRef &r_factory);

#endif // _WIN32
#endif // __LIBBROWSER_WEBVIEW2_H__
