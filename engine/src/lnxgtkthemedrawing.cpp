/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 2002
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *  Brian Ryner <bryner@netscape.com>  (Original Author)
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

/*
 * GTK 3 theme drawing implementation.
 * Ported from the GTK 2 version (gtkdrawing.c / Mozilla).
 * Uses gtk_render_* and GtkStyleContext instead of gtk_paint_* and GtkStyle.
 */

#include "lnxprefix.h"

#include "globdefs.h"
#include "objdefs.h"
#include "parsedef.h"
#include "filedefs.h"
#include "globals.h"

#include "util.h"

#include "mctheme.h"
#include "lnxdc.h"
#include "lnxgtkthemedrawing.h"

#include <gtk/gtk.h>
#include <string.h>
#include <math.h>

typedef void (*gtk_widget_style_getPTR)(GtkWidget*, const gchar*, ...);
extern gtk_widget_style_getPTR gtk_widget_style_get_ptr;
#define gtk_widget_style_get gtk_widget_style_get_ptr

gint moz_gtk_init();

static GtkWidget *gProtoWindow = NULL;
static GtkWidget *gProtoContainer = NULL;
static GtkWidget *gButtonWidget = NULL;
static GtkWidget *gCheckboxWidget = NULL;
static GtkWidget *gRadiobuttonWidget = NULL;
static GtkWidget *gHorizScrollbarWidget = NULL;
static GtkWidget *gVertScrollbarWidget = NULL;
static GtkWidget *gEntryWidget = NULL;
static GtkWidget *gFrameWidget = NULL;
static GtkWidget *gProgressWidget = NULL;
static GtkWidget *gTabWidget = NULL;
static GtkWidget *gTooltipWidget = NULL;
static GtkWidget *gMenuitemWidget = NULL;
static GtkWidget *gProtoMenu = NULL;
static GtkWidget *gSpinbuttonWidget = NULL;
static GtkWidget *gHScaleWidget = NULL;
static GtkWidget *gVScaleWidget = NULL;
static GtkWidget *gComboBoxWidget = NULL;
static GtkWidget *gListboxWidget = NULL;

static GtkStyleContext* GetWidgetStyleContext(GtkWidget *widget)
{
    return gtk_widget_get_style_context(widget);
}

static void ensure_proto_container()
{
    if (!gProtoWindow)
        moz_gtk_init();
}

static void ensure_button_widget()
{
    if (!gButtonWidget) {
        ensure_proto_container();
        gButtonWidget = gtk_button_new_with_label("M");
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gButtonWidget);
        gtk_widget_realize(gButtonWidget);
    }
}

static void ensure_checkbox_widget()
{
    if (!gCheckboxWidget) {
        ensure_proto_container();
        gCheckboxWidget = gtk_check_button_new_with_label("M");
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gCheckboxWidget);
        gtk_widget_realize(gCheckboxWidget);
    }
}

static void ensure_radiobutton_widget()
{
    if (!gRadiobuttonWidget) {
        ensure_proto_container();
        gRadiobuttonWidget = gtk_radio_button_new_with_label(NULL, "M");
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gRadiobuttonWidget);
        gtk_widget_realize(gRadiobuttonWidget);
    }
}

static void ensure_scrollbar_widget()
{
    if (!gHorizScrollbarWidget) {
        ensure_proto_container();
        gHorizScrollbarWidget = gtk_scrollbar_new(GTK_ORIENTATION_HORIZONTAL, NULL);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gHorizScrollbarWidget);
        gtk_widget_realize(gHorizScrollbarWidget);
    }
    if (!gVertScrollbarWidget) {
        gVertScrollbarWidget = gtk_scrollbar_new(GTK_ORIENTATION_VERTICAL, NULL);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gVertScrollbarWidget);
        gtk_widget_realize(gVertScrollbarWidget);
    }
}

static void ensure_entry_widget()
{
    if (!gEntryWidget) {
        ensure_proto_container();
        gEntryWidget = gtk_entry_new();
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gEntryWidget);
        gtk_widget_realize(gEntryWidget);
    }
}

static void ensure_scale_widget()
{
    if (!gHScaleWidget) {
        ensure_proto_container();
        gHScaleWidget = gtk_scale_new(GTK_ORIENTATION_HORIZONTAL, NULL);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gHScaleWidget);
        gtk_widget_realize(gHScaleWidget);
    }
    if (!gVScaleWidget) {
        gVScaleWidget = gtk_scale_new(GTK_ORIENTATION_VERTICAL, NULL);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gVScaleWidget);
        gtk_widget_realize(gVScaleWidget);
    }
}

static void ensure_frame_widget()
{
    if (!gFrameWidget) {
        ensure_proto_container();
        gFrameWidget = gtk_frame_new(NULL);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gFrameWidget);
        gtk_widget_realize(gFrameWidget);
    }
}

static void ensure_progress_widget()
{
    if (!gProgressWidget) {
        ensure_proto_container();
        gProgressWidget = gtk_progress_bar_new();
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gProgressWidget);
        gtk_widget_realize(gProgressWidget);
    }
}

static void ensure_tab_widget()
{
    if (!gTabWidget) {
        ensure_proto_container();
        gTabWidget = gtk_notebook_new();
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gTabWidget);
        gtk_widget_realize(gTabWidget);
    }
}

static void ensure_combo_widget()
{
    if (!gComboBoxWidget) {
        ensure_proto_container();
        gComboBoxWidget = gtk_combo_box_text_new();
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gComboBoxWidget);
        gtk_widget_realize(gComboBoxWidget);
    }
}

static void ensure_tooltip_widget()
{
    if (!gTooltipWidget) {
        gTooltipWidget = gtk_window_new(GTK_WINDOW_POPUP);
        gtk_widget_set_name(gTooltipWidget, "gtk-tooltip");
        gtk_widget_realize(gTooltipWidget);
    }
}

static void ensure_menu_item_widget()
{
    if (!gMenuitemWidget) {
        if (!gProtoMenu)
            gProtoMenu = gtk_menu_new();
        gMenuitemWidget = gtk_menu_item_new();
        gtk_menu_shell_append(GTK_MENU_SHELL(gProtoMenu), gMenuitemWidget);
    }
}

static void ensure_spin_widget()
{
    if (!gSpinbuttonWidget) {
        ensure_proto_container();
        gSpinbuttonWidget = gtk_spin_button_new(NULL, 1, 0);
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gSpinbuttonWidget);
        gtk_widget_realize(gSpinbuttonWidget);
    }
}

static void ensure_listbox_widget()
{
    if (!gListboxWidget) {
        ensure_proto_container();
        gListboxWidget = gtk_tree_view_new();
        gtk_container_add(GTK_CONTAINER(gProtoContainer), gListboxWidget);
        gtk_widget_realize(gListboxWidget);
    }
}

static GtkStateFlags ConvertWidgetState(GtkWidgetState *state)
{
    GtkStateFlags flags = GTK_STATE_FLAG_NORMAL;
    if (state->disabled)
        flags = (GtkStateFlags)(flags | GTK_STATE_FLAG_INSENSITIVE);
    if (state->active)
        flags = (GtkStateFlags)(flags | GTK_STATE_FLAG_ACTIVE);
    if (state->inHover)
        flags = (GtkStateFlags)(flags | GTK_STATE_FLAG_PRELIGHT);
    if (state->focused)
        flags = (GtkStateFlags)(flags | GTK_STATE_FLAG_FOCUSED);
    return flags;
}

static gint moz_gtk_generic_paint(cairo_t *cr, GdkRectangle *rect,
                                   GtkWidget *widget, GtkWidgetState *state)
{
    GtkStyleContext *style = GetWidgetStyleContext(widget);
    gtk_style_context_save(style);
    GtkStateFlags flags = ConvertWidgetState(state);
    gtk_style_context_set_state(style, flags);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_button_paint(cairo_t *cr, GdkRectangle *rect,
                                  GdkRectangle *cliprect, GtkWidgetState *state,
                                  gint flags)
{
    ensure_button_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gButtonWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    if (state->focused)
        gtk_render_focus(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_checkbox_paint(cairo_t *cr, GdkRectangle *rect,
                                    GdkRectangle *cliprect, GtkWidgetState *state,
                                    gint checked)
{
    ensure_checkbox_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gCheckboxWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    if (checked)
        sf = (GtkStateFlags)(sf | GTK_STATE_FLAG_CHECKED);
    gtk_style_context_set_state(style, sf);
    gtk_render_check(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_radiobutton_paint(cairo_t *cr, GdkRectangle *rect,
                                       GdkRectangle *cliprect, GtkWidgetState *state,
                                       gint checked)
{
    ensure_radiobutton_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gRadiobuttonWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    if (checked)
        sf = (GtkStateFlags)(sf | GTK_STATE_FLAG_CHECKED);
    gtk_style_context_set_state(style, sf);
    gtk_render_option(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_scrollbar_button_paint(cairo_t *cr, GdkRectangle *rect,
                                            GdkRectangle *cliprect, GtkWidgetState *state,
                                            gint arrow_type)
{
    ensure_scrollbar_widget();
    GtkWidget *widget = (arrow_type == GTK_ARROW_LEFT || arrow_type == GTK_ARROW_RIGHT)
                         ? gHorizScrollbarWidget : gVertScrollbarWidget;
    GtkStyleContext *style = GetWidgetStyleContext(widget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    gdouble angle = 0;
    if (arrow_type == GTK_ARROW_DOWN) angle = G_PI;
    else if (arrow_type == GTK_ARROW_LEFT) angle = 3 * G_PI / 2;
    else if (arrow_type == GTK_ARROW_RIGHT) angle = G_PI / 2;
    gint arrow_size = MIN(rect->width, rect->height) / 2;
    gtk_render_arrow(style, cr, angle, rect->x + (rect->width - arrow_size) / 2,
                     rect->y + (rect->height - arrow_size) / 2, arrow_size);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_scrollbar_trough_paint(cairo_t *cr, GdkRectangle *rect,
                                            GdkRectangle *cliprect, GtkWidgetState *state,
                                            GtkWidget *widget)
{
    GtkStyleContext *style = GetWidgetStyleContext(widget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_scrollbar_thumb_paint(cairo_t *cr, GdkRectangle *rect,
                                           GdkRectangle *cliprect, GtkWidgetState *state,
                                           GtkOrientation orientation)
{
    ensure_scrollbar_widget();
    GtkWidget *widget = (orientation == GTK_ORIENTATION_HORIZONTAL)
                         ? gHorizScrollbarWidget : gVertScrollbarWidget;
    GtkStyleContext *style = GetWidgetStyleContext(widget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_slider(style, cr, rect->x, rect->y, rect->width, rect->height, orientation);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_entry_paint(cairo_t *cr, GdkRectangle *rect,
                                 GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_entry_widget();
    return moz_gtk_generic_paint(cr, rect, gEntryWidget, state);
}

static gint moz_gtk_tooltip_paint(cairo_t *cr, GdkRectangle *rect,
                                   GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_tooltip_widget();
    return moz_gtk_generic_paint(cr, rect, gTooltipWidget, state);
}

static gint moz_gtk_frame_paint(cairo_t *cr, GdkRectangle *rect,
                                 GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_frame_widget();
    return moz_gtk_generic_paint(cr, rect, gFrameWidget, state);
}

static gint moz_gtk_progressbar_paint(cairo_t *cr, GdkRectangle *rect,
                                       GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_progress_widget();
    return moz_gtk_generic_paint(cr, rect, gProgressWidget, state);
}

static gint moz_gtk_progress_chunk_paint(cairo_t *cr, GdkRectangle *rect,
                                          GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_progress_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gProgressWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_activity(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_tab_paint(cairo_t *cr, GdkRectangle *rect,
                               GdkRectangle *cliprect, GtkWidgetState *state, gint flags)
{
    ensure_tab_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gTabWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    if (flags & MOZ_GTK_TAB_SELECTED)
        sf = (GtkStateFlags)(sf | GTK_STATE_FLAG_ACTIVE);
    gtk_style_context_set_state(style, sf);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    if (state->focused)
        gtk_render_focus(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

static gint moz_gtk_tabpanels_paint(cairo_t *cr, GdkRectangle *rect,
                                     GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_tab_widget();
    return moz_gtk_generic_paint(cr, rect, gTabWidget, state);
}

static gint moz_gtk_dropdown_arrow_paint(cairo_t *cr, GdkRectangle *rect,
                                          GdkRectangle *cliprect, GtkWidgetState *state)
{
    ensure_combo_widget();
    GtkStyleContext *style = GetWidgetStyleContext(gComboBoxWidget);
    gtk_style_context_save(style);
    GtkStateFlags sf = ConvertWidgetState(state);
    gtk_style_context_set_state(style, sf);
    gtk_render_background(style, cr, rect->x, rect->y, rect->width, rect->height);
    gtk_render_frame(style, cr, rect->x, rect->y, rect->width, rect->height);
    gint arrow_size = MIN(rect->width, rect->height) / 2;
    gtk_render_arrow(style, cr, G_PI, rect->x + (rect->width - arrow_size) / 2,
                     rect->y + (rect->height - arrow_size) / 2, arrow_size);
    gtk_style_context_restore(style);
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_init()
{
    gProtoWindow = gtk_window_new(GTK_WINDOW_POPUP);
    gProtoContainer = gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(gProtoWindow), gProtoContainer);
    gtk_widget_realize(gProtoWindow);
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_initDL()
{
    return moz_gtk_init();
}

gint moz_gtk_enable_style_props(style_prop_t styleGetProp)
{
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_shutdown()
{
    if (gProtoWindow) {
        gtk_widget_destroy(gProtoWindow);
        gProtoWindow = NULL;
        gProtoContainer = NULL;
    }
    gButtonWidget = NULL;
    gCheckboxWidget = NULL;
    gRadiobuttonWidget = NULL;
    gHorizScrollbarWidget = NULL;
    gVertScrollbarWidget = NULL;
    gEntryWidget = NULL;
    gFrameWidget = NULL;
    gProgressWidget = NULL;
    gTabWidget = NULL;
    gTooltipWidget = NULL;
    gMenuitemWidget = NULL;
    gProtoMenu = NULL;
    gSpinbuttonWidget = NULL;
    gHScaleWidget = NULL;
    gVScaleWidget = NULL;
    gComboBoxWidget = NULL;
    gListboxWidget = NULL;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_widget_paint(GtkThemeWidgetType widget, cairo_t *cr,
                           GdkRectangle *rect, GdkRectangle *cliprect,
                           GtkWidgetState *state, gint flags)
{
    cairo_save(cr);
    if (cliprect) {
        cairo_rectangle(cr, cliprect->x, cliprect->y, cliprect->width, cliprect->height);
        cairo_clip(cr);
    }

    gint result = MOZ_GTK_SUCCESS;
    switch (widget) {
        case MOZ_GTK_BUTTON:
            result = moz_gtk_button_paint(cr, rect, cliprect, state, flags);
            break;
        case MOZ_GTK_CHECKBUTTON:
            result = moz_gtk_checkbox_paint(cr, rect, cliprect, state, flags);
            break;
        case MOZ_GTK_RADIOBUTTON:
            result = moz_gtk_radiobutton_paint(cr, rect, cliprect, state, flags);
            break;
        case MOZ_GTK_SCROLLBAR_BUTTON:
            result = moz_gtk_scrollbar_button_paint(cr, rect, cliprect, state, flags);
            break;
        case MOZ_GTK_SCROLLBAR_TRACK_HORIZONTAL:
            ensure_scrollbar_widget();
            result = moz_gtk_scrollbar_trough_paint(cr, rect, cliprect, state, gHorizScrollbarWidget);
            break;
        case MOZ_GTK_SCROLLBAR_TRACK_VERTICAL:
            ensure_scrollbar_widget();
            result = moz_gtk_scrollbar_trough_paint(cr, rect, cliprect, state, gVertScrollbarWidget);
            break;
        case MOZ_GTK_SCROLLBAR_THUMB_HORIZONTAL:
            result = moz_gtk_scrollbar_thumb_paint(cr, rect, cliprect, state, GTK_ORIENTATION_HORIZONTAL);
            break;
        case MOZ_GTK_SCROLLBAR_THUMB_VERTICAL:
            result = moz_gtk_scrollbar_thumb_paint(cr, rect, cliprect, state, GTK_ORIENTATION_VERTICAL);
            break;
        case MOZ_GTK_GRIPPER:
            ensure_button_widget();
            result = moz_gtk_generic_paint(cr, rect, gButtonWidget, state);
            break;
        case MOZ_GTK_ENTRY:
        case MOZ_GTK_ENTRY_FRAME:
            result = moz_gtk_entry_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_DROPDOWN_ARROW:
            result = moz_gtk_dropdown_arrow_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_CHECKBUTTON_CONTAINER:
            ensure_checkbox_widget();
            result = moz_gtk_generic_paint(cr, rect, gCheckboxWidget, state);
            break;
        case MOZ_GTK_RADIOBUTTON_CONTAINER:
            ensure_radiobutton_widget();
            result = moz_gtk_generic_paint(cr, rect, gRadiobuttonWidget, state);
            break;
        case MOZ_GTK_TOOLBAR:
            ensure_button_widget();
            result = moz_gtk_generic_paint(cr, rect, gProtoWindow, state);
            break;
        case MOZ_GTK_TOOLTIP:
            result = moz_gtk_tooltip_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_FRAME:
            result = moz_gtk_frame_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_PROGRESSBAR:
            result = moz_gtk_progressbar_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_PROGRESS_CHUNK:
            result = moz_gtk_progress_chunk_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_TAB:
            result = moz_gtk_tab_paint(cr, rect, cliprect, state, flags);
            break;
        case MOZ_GTK_LABEL:
            break;
        case MOZ_GTK_TABPANELS:
            result = moz_gtk_tabpanels_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_OPTIONBUTTON:
            result = moz_gtk_dropdown_arrow_paint(cr, rect, cliprect, state);
            break;
        case MOZ_GTK_LISTBOX:
            ensure_listbox_widget();
            result = moz_gtk_generic_paint(cr, rect, gListboxWidget, state);
            break;
        case MOZ_GTK_SPINBUTTON:
            ensure_spin_widget();
            result = moz_gtk_generic_paint(cr, rect, gSpinbuttonWidget, state);
            break;
        case MOZ_GTK_MENUITEMHIGHLIGHT:
            ensure_menu_item_widget();
            result = moz_gtk_generic_paint(cr, rect, gMenuitemWidget, state);
            break;
        case MOZ_GTK_SCALE_TRACK_HORIZONTAL:
            ensure_scale_widget();
            result = moz_gtk_generic_paint(cr, rect, gHScaleWidget, state);
            break;
        case MOZ_GTK_SCALE_TRACK_VERTICAL:
            ensure_scale_widget();
            result = moz_gtk_generic_paint(cr, rect, gVScaleWidget, state);
            break;
        default:
            result = MOZ_GTK_UNKNOWN_WIDGET;
            break;
    }

    cairo_restore(cr);
    return result;
}

gint moz_gtk_get_widget_border(GtkThemeWidgetType widget, gint *xthickness, gint *ythickness)
{
    GtkWidget *w = NULL;
    switch (widget) {
        case MOZ_GTK_BUTTON:
            ensure_button_widget();
            w = gButtonWidget;
            break;
        case MOZ_GTK_ENTRY:
        case MOZ_GTK_ENTRY_FRAME:
            ensure_entry_widget();
            w = gEntryWidget;
            break;
        case MOZ_GTK_FRAME:
            ensure_frame_widget();
            w = gFrameWidget;
            break;
        case MOZ_GTK_SCROLLBAR_TRACK_HORIZONTAL:
            ensure_scrollbar_widget();
            w = gHorizScrollbarWidget;
            break;
        case MOZ_GTK_SCROLLBAR_TRACK_VERTICAL:
            ensure_scrollbar_widget();
            w = gVertScrollbarWidget;
            break;
        default:
            *xthickness = 2;
            *ythickness = 2;
            return MOZ_GTK_SUCCESS;
    }

    GtkStyleContext *style = GetWidgetStyleContext(w);
    GtkBorder border;
    gtk_style_context_get_border(style, gtk_style_context_get_state(style), &border);
    *xthickness = border.left;
    *ythickness = border.top;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_checkbox_get_metrics(gint *indicator_size, gint *indicator_spacing)
{
    ensure_checkbox_widget();
    gint size = 0, spacing = 0;
    gtk_widget_style_get(gCheckboxWidget,
                         "indicator-size", &size,
                         "indicator-spacing", &spacing,
                         NULL);
    if (size == 0) size = 13;
    if (spacing == 0) spacing = 2;
    if (indicator_size) *indicator_size = size;
    if (indicator_spacing) *indicator_spacing = spacing;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_radiobutton_get_metrics(gint *indicator_size, gint *indicator_spacing)
{
    ensure_radiobutton_widget();
    gint size = 0, spacing = 0;
    gtk_widget_style_get(gRadiobuttonWidget,
                         "indicator-size", &size,
                         "indicator-spacing", &spacing,
                         NULL);
    if (size == 0) size = 13;
    if (spacing == 0) spacing = 2;
    if (indicator_size) *indicator_size = size;
    if (indicator_spacing) *indicator_spacing = spacing;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_get_scrollbar_metrics(gint *slider_width, gint *trough_border,
                                    gint *stepper_size, gint *stepper_spacing,
                                    gint *min_slider_size, gint *p6, gint *p7)
{
    ensure_scrollbar_widget();
    gtk_widget_style_get(gVertScrollbarWidget,
                         "slider-width", slider_width,
                         "trough-border", trough_border,
                         "stepper-size", stepper_size,
                         "min-slider-length", min_slider_size,
                         NULL);
    if (*slider_width == 0) *slider_width = 14;
    if (*stepper_size == 0) *stepper_size = 14;
    if (*min_slider_size == 0) *min_slider_size = 21;
    *stepper_spacing = 0;
    if (p6) *p6 = 0;
    if (p7) *p7 = 0;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_get_slider_metrics(gint *slider_width, gint *trough_border,
                                 gint *stepper_size, gint *stepper_spacing,
                                 gint *min_slider_size, gint *p6, gint *p7)
{
    ensure_scale_widget();
    gtk_widget_style_get(gHScaleWidget,
                         "slider-length", min_slider_size,
                         NULL);
    if (slider_width) *slider_width = 14;
    if (trough_border) *trough_border = 1;
    if (stepper_size) *stepper_size = 0;
    if (stepper_spacing) *stepper_spacing = 0;
    if (*min_slider_size == 0) *min_slider_size = 21;
    if (p6) *p6 = 0;
    if (p7) *p7 = 0;
    return MOZ_GTK_SUCCESS;
}

gint moz_gtk_get_dropdown_arrow_size(gint *width, gint *height)
{
    ensure_combo_widget();
    *width = 12;
    *height = 12;
    return MOZ_GTK_SUCCESS;
}

void spinbutton_get_rects(GtkArrowType type, GdkRectangle *rect,
                           GdkRectangle &framerect, GdkRectangle &btnrect)
{
    framerect = *rect;
    btnrect = *rect;
    btnrect.width = rect->width / 2;
    if (type == GTK_ARROW_UP) {
        btnrect.x = rect->x + rect->width - btnrect.width;
        btnrect.height = rect->height / 2;
    } else {
        btnrect.x = rect->x + rect->width - btnrect.width;
        btnrect.y = rect->y + rect->height / 2;
        btnrect.height = rect->height - rect->height / 2;
    }
}

void moz_gtk_get_widget_color(GtkStateType widgettype,
                               uint2 &red, uint2 &blue, uint2 &green)
{
    ensure_proto_container();
    if (!gProtoWindow)
        return;
    GtkStyleContext *style = GetWidgetStyleContext(gProtoWindow);
    GdkRGBA color;
    gtk_style_context_get_background_color(style, GTK_STATE_FLAG_NORMAL, &color);

    switch (widgettype) {
        case GTK_STATE_SELECTED:
            gtk_style_context_get_background_color(style, GTK_STATE_FLAG_SELECTED, &color);
            break;
        default:
            break;
    }
    red = (uint2)(color.red * 65535);
    green = (uint2)(color.green * 65535);
    blue = (uint2)(color.blue * 65535);
}
