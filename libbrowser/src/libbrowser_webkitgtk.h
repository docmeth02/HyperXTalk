/* Copyright (C) 2024 HyperXTalk contributors.

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

#ifndef __LIBBROWSER_WEBKITGTK_H__
#define __LIBBROWSER_WEBKITGTK_H__

#include "libbrowser_internal.h"

typedef unsigned long gulong;
typedef void *gpointer;

class MCWebKitGTKBrowser : public MCBrowserBase
{
public:
	MCWebKitGTKBrowser();
	virtual ~MCWebKitGTKBrowser();

	bool Init(void);

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

	void SyncJavaScriptHandlers();

private:
	void *m_plug;
	void *m_web_view;
	void *m_content_manager;

	char *m_js_handlers;
	char *m_htmltext;
	char *m_url;

	bool m_allow_new_windows;
	bool m_enable_context_menu;

	gulong m_load_changed_handler;
	gulong m_load_failed_handler;
	gulong m_decide_policy_handler;
	gulong m_context_menu_handler;
	gulong m_script_message_handler;
	gulong m_progress_handler;

	bool GetUrl(char *&r_url);
	bool GetHTMLText(char *&r_htmltext);
	bool SetHTMLText(const char *p_htmltext);
	bool GetJavaScriptHandlers(char *&r_handlers);
	bool SetJavaScriptHandlers(const char *p_handlers);
	bool GetUserAgent(char *&r_useragent);
	bool SetUserAgent(const char *p_useragent);
	bool GetIsSecure(bool &r_value);
	bool GetCanGoForward(bool &r_value);
	bool GetCanGoBack(bool &r_value);
	bool GetAllowUserInteraction(bool &r_value);
	bool SetAllowUserInteraction(bool p_value);
};

bool MCWebKitGTKBrowserFactoryCreate(MCBrowserFactoryRef &r_factory);

#endif // __LIBBROWSER_WEBKITGTK_H__
