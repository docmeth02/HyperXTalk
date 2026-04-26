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
#include "graphicscontext.h"
#include "objptr.h"

#include "globals.h"
#include "context.h"

#include "lnxdc.h"
#include "graphicscontext.h"
#include "graphics_util.h"

#include "native-layer-x11.h"

#include <gdk/gdk.h>
#include <gtk/gtk.h>

extern "C" {
void *gtk_socket_new(void);
void gtk_socket_add_id(void *, int);
void *gtk_socket_get_plug_window(void *);
int gtk_socket_get_id(void *);
}
#define GTK_SOCKET(x) ((GtkSocket*)(x))


MCNativeLayerX11::MCNativeLayerX11(MCObject *p_object, x11Window p_view) :
  m_child_window(NULL),
  m_input_shape(NULL),
  m_socket(NULL),
  m_widget_xid(p_view)
{
	m_object = p_object;
	m_intersect_rect = MCRectangleMake(0,0,0,0);
}

MCNativeLayerX11::~MCNativeLayerX11()
{
    if (m_socket != NULL)
    {
        g_object_unref(m_socket);
    }
    if (m_child_window != NULL)
    {
        gtk_widget_destroy(GTK_WIDGET(m_child_window));
    }
    if (m_input_shape != NULL)
    {
        cairo_region_destroy(m_input_shape);
    }
}

void MCNativeLayerX11::OnToolChanged(Tool p_new_tool)
{
    updateInputShape();
	MCNativeLayer::OnToolChanged(p_new_tool);
}

void MCNativeLayerX11::updateInputShape()
{
    GdkWindow *t_socket_window;
    t_socket_window = m_socket != NULL ? gtk_widget_get_window(GTK_WIDGET(m_socket)) : NULL;
    if (t_socket_window == NULL)
        return;

    if (!m_show_for_tool)
        // In edit mode. Mask out all input events
        gdk_window_input_shape_combine_region(t_socket_window, m_input_shape, 0, 0);
    else
        // In run mode. Unset the input event mask
        gdk_window_input_shape_combine_region(t_socket_window, NULL, 0, 0);
}

void MCNativeLayerX11::doAttach()
{
    GdkWindow *t_stack_window = getStackGdkWindow();

    if (t_stack_window == NULL || !GDK_IS_WINDOW(t_stack_window))
        return;

    if (m_socket == NULL)
    {
        GtkSocket *t_socket;
        GdkWindow *t_socket_window;
        MCRectangle t_rect;

        t_socket = GTK_SOCKET(gtk_socket_new());
        t_rect = m_object->getrect();

        // GTK3 requires the GtkSocket to be anchored (part of a shown widget
        // tree) before gtk_socket_add_id() can be called.  Use an offscreen
        // window as the anchor — it can be realized without being mapped
        // on-screen, satisfying the anchoring requirement.
        m_child_window = GTK_WINDOW(gtk_offscreen_window_new());
        gtk_container_add(GTK_CONTAINER(m_child_window), GTK_WIDGET(t_socket));
        gtk_widget_show_all(GTK_WIDGET(m_child_window));

        t_socket_window = gtk_widget_get_window(GTK_WIDGET(t_socket));

        if (t_socket_window == NULL)
        {
            // Fallback: place a POPUP window far off-screen so it can be shown
            // (which anchors and realizes the socket) without being visible.
            gtk_widget_destroy(GTK_WIDGET(m_child_window));
            m_child_window = GTK_WINDOW(gtk_window_new(GTK_WINDOW_POPUP));
            gtk_window_move(m_child_window, -10000, -10000);
            gtk_container_add(GTK_CONTAINER(m_child_window), GTK_WIDGET(t_socket));
            gtk_widget_show_all(GTK_WIDGET(m_child_window));
            t_socket_window = gtk_widget_get_window(GTK_WIDGET(t_socket));
        }

        if (t_socket_window == NULL)
        {
            gtk_widget_destroy(GTK_WIDGET(m_child_window));
            m_child_window = NULL;
            return;
        }

        // Reparent the socket's GdkWindow (not the anchor's) into the stack
        // window.  The socket stays anchored/realized via the offscreen
        // container while its underlying X window lives under the stack.
        gdk_window_reparent(t_socket_window, t_stack_window, t_rect.x, t_rect.y);

        m_input_shape = cairo_region_create();
        m_socket = GTK_SOCKET(g_object_ref(G_OBJECT(t_socket)));
    }
    else if (!gtk_widget_get_visible(GTK_WIDGET(m_child_window)))
    {
        gtk_widget_show(GTK_WIDGET(m_child_window));
    }

    if (gtk_socket_get_plug_window(m_socket) == NULL)
        gtk_socket_add_id(m_socket, m_widget_xid);

    doRelayer();
    doSetViewportGeometry(m_viewport_rect);
    doSetGeometry(m_rect);
    doSetVisible(ShouldShowLayer());
}

void MCNativeLayerX11::doDetach()
{
    // We don't really detach; just stop showing the socket
    if (m_socket != NULL)
        gtk_widget_hide(GTK_WIDGET(m_socket));
    if (m_child_window != NULL)
        gtk_widget_hide(GTK_WIDGET(m_child_window));
}

// We can't get a snapshot of X11 windows so override this to return false
bool MCNativeLayerX11::GetCanRenderToContext()
{
	return false;
}

bool MCNativeLayerX11::doPaint(MCGContextRef p_context)
{
    return false;
}

void MCNativeLayerX11::updateContainerGeometry()
{
    GdkWindow *t_socket_window;

    m_intersect_rect = MCU_intersect_rect(m_viewport_rect, m_rect);

    if (m_child_window != NULL)
        gtk_widget_set_size_request(GTK_WIDGET(m_child_window), m_intersect_rect.width, m_intersect_rect.height);

    if (m_socket == NULL)
        return;

    // All positioning is done on the socket's GdkWindow directly, since it
    // has been reparented into the stack window (not the anchor container).
    gtk_widget_set_size_request(GTK_WIDGET(m_socket), -1, -1);
    t_socket_window = gtk_widget_get_window(GTK_WIDGET(m_socket));
    if (t_socket_window != NULL)
        gdk_window_move_resize(t_socket_window,
                               m_intersect_rect.x, m_intersect_rect.y,
                               m_intersect_rect.width, m_intersect_rect.height);
    gtk_widget_set_size_request(GTK_WIDGET(m_socket), m_intersect_rect.width, m_intersect_rect.height);
}

void MCNativeLayerX11::doSetViewportGeometry(const MCRectangle &p_rect)
{
	m_viewport_rect = p_rect;
	updateContainerGeometry();
}

// IM-2016-01-21: [[ NativeLayer ]] Place the socket window relative to its
//    container, so only the visible area (clipped by any containing groups)
//    is displayed.
void MCNativeLayerX11::doSetGeometry(const MCRectangle& p_rect)
{
	m_rect = p_rect;
	updateContainerGeometry();

	if (m_socket == NULL)
		return;

	MCRectangle t_rect;
	t_rect = m_rect;
	t_rect.x -= m_intersect_rect.x;
	t_rect.y -= m_intersect_rect.y;

    GdkWindow* t_remote;
    t_remote = (GdkWindow*)gtk_socket_get_plug_window(m_socket);
    if (t_remote != NULL)
        gdk_window_move_resize(t_remote, t_rect.x, t_rect.y, t_rect.width, t_rect.height);
}

void MCNativeLayerX11::doSetVisible(bool p_visible)
{
    GdkWindow *t_socket_window;
    t_socket_window = m_socket != NULL ? gtk_widget_get_window(GTK_WIDGET(m_socket)) : NULL;

    if (p_visible)
    {
        if (m_child_window != NULL)
            gtk_widget_show(GTK_WIDGET(m_child_window));
        if (m_socket != NULL)
            gtk_widget_show(GTK_WIDGET(m_socket));
        if (t_socket_window != NULL)
            gdk_window_show(t_socket_window);
        doSetGeometry(m_object->getrect());
    }
    else
    {
        if (t_socket_window != NULL)
            gdk_window_hide(t_socket_window);
        if (m_socket != NULL)
            gtk_widget_hide(GTK_WIDGET(m_socket));
    }

    updateInputShape();
}

void MCNativeLayerX11::doRelayer()
{
    // Ensure that the input mask for the widget is up to date
    updateInputShape();
    
    // Find which native layer this should be inserted below
    MCObject *t_before;
    t_before = findNextLayerAbove(m_object);
    
    // Insert the widget in the correct place (but only if the card is current)
    if (isAttached() && m_object->getstack()->getcard() == m_object->getstack()->getcurcard())
    {
        // If t_before_window == NULL, this will put the widget on the bottom layer
        MCNativeLayerX11 *t_before_layer;
        GdkWindow* t_before_window;
        if (t_before != NULL)
        {
            t_before_layer = reinterpret_cast<MCNativeLayerX11*>(t_before->getNativeLayer());
            // Use the socket's GdkWindow for stacking (it is the window that
            // lives in the stack's GdkWindow child tree after reparenting).
            t_before_window = t_before_layer->m_socket != NULL
                ? gtk_widget_get_window(GTK_WIDGET(t_before_layer->m_socket))
                : NULL;
        }
        else
        {
            t_before_layer = NULL;
            t_before_window = NULL;
        }

        GdkWindow *t_socket_window;
        t_socket_window = m_socket != NULL ? gtk_widget_get_window(GTK_WIDGET(m_socket)) : NULL;
        if (t_socket_window != NULL)
            gdk_window_restack(t_socket_window, t_before_window, FALSE);
    }
}

////////////////////////////////////////////////////////////////////////////////

bool MCNativeLayerX11::GetNativeView(void *&r_view)
{
    r_view = (void*)m_widget_xid;
    return true;
}

////////////////////////////////////////////////////////////////////////////////

x11Window MCNativeLayerX11::getStackX11Window()
{
    return gdk_x11_window_get_xid(getStackGdkWindow());
}

GdkWindow* MCNativeLayerX11::getStackGdkWindow()
{
    return m_object->getstack()->getwindow();
}

////////////////////////////////////////////////////////////////////////////////

MCNativeLayer* MCNativeLayer::CreateNativeLayer(MCObject *p_object, void *p_native_view)
{
    return new MCNativeLayerX11(p_object, (x11Window)p_native_view);
}

bool MCNativeLayer::CreateNativeContainer(MCObject *p_object, void *&r_view)
{
	return false;
}

void MCNativeLayer::ReleaseNativeView(void *p_view)
{
}

////////////////////////////////////////////////////////////////////////////////
