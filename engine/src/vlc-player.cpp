/* Copyright (C) 2024 HyperXTalk Contributors

This file is part of HyperXTalk.

HyperXTalk is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License v3 as published by the Free
Software Foundation.  */

// vlc-player.cpp — MCVLCPlayer implementation.
//
// Cross-platform libVLC 3 media player backend for HyperXTalk.
//
// Platform-specific helper functions (NSView creation etc.) live in
// vlc-player-mac.mm (macOS) or are compiled inline below.

#include "prefix.h"

#include "globdefs.h"
#include "imagebitmap.h"
#include "region.h"
#include "notify.h"

#include "platform.h"
#include "platform-internal.h"

#include "graphics_util.h"

#include "vlc-player.h"

// Pull in the VLC headers as plain C.
#include <vlc/vlc.h>
#include <vlc/libvlc_media.h>
#include <vlc/libvlc_media_player.h>
#include <vlc/libvlc_events.h>

// ---------------------------------------------------------------------------
// Platform-specific helpers declared here, defined in vlc-player-mac.mm (Mac)
// or inline below (Win/Linux).
// ---------------------------------------------------------------------------

#if defined(TARGET_PLATFORM_MACOS_X)
// Implemented in vlc-player-mac.mm (compiled as Objective-C++, hence extern "C")
extern "C" void *MCVLCCreateNSView(void);
extern "C" void  MCVLCDestroyNSView(void *p_view);
extern "C" void  MCVLCSyncNSView(void *p_view,
                                  MCRectangle p_rect, bool p_visible);
#endif

// ---------------------------------------------------------------------------
// Shared VLC instance
// ---------------------------------------------------------------------------

libvlc_instance_t *MCVLCPlayer::s_vlc_instance = nullptr;
unsigned           MCVLCPlayer::s_vlc_refcount  = 0;

bool MCVLCPlayer::EnsureVLCInstance()
{
    if (s_vlc_instance != nullptr)
    {
        s_vlc_refcount++;
        return true;
    }

    const char *t_args[] = {
        "--no-xlib",          // avoid X threading issues
        "--quiet",
        "--no-osd",
        "--no-stats",
    };
    s_vlc_instance = libvlc_new(4, t_args);
    if (s_vlc_instance == nullptr)
        return false;

    s_vlc_refcount = 1;
    return true;
}

void MCVLCPlayer::ReleaseVLCInstance()
{
    if (s_vlc_refcount == 0)
        return;
    s_vlc_refcount--;
    if (s_vlc_refcount == 0)
    {
        libvlc_release(s_vlc_instance);
        s_vlc_instance = nullptr;
    }
}

// ---------------------------------------------------------------------------
// Constructor / Destructor
// ---------------------------------------------------------------------------

MCVLCPlayer::MCVLCPlayer()
    : m_player(nullptr),
      m_media(nullptr),
      m_view(nullptr),
      m_rect(MCRectangleMake(0, 0, 0, 0)),
      m_visible(true),
      m_offscreen(false),
      m_looping(false),
      m_play_selection_only(false),
      m_rate(1.0),
      m_volume(100),
      m_selection_start(0),
      m_selection_finish(0),
      m_playing(false),
      m_finished(false),
      m_has_invalid_filename(false),
      m_buffered_time(0),
      m_markers(nullptr),
      m_marker_count(0),
      m_last_marker(UINT64_MAX),
      m_offscreen_bitmap(nullptr),
      m_offscreen_width(0),
      m_offscreen_height(0)
{
    m_offscreen_planes[0] = nullptr;

    if (!EnsureVLCInstance())
        return;

    m_player = libvlc_media_player_new(s_vlc_instance);
    if (m_player == nullptr)
    {
        ReleaseVLCInstance();
        return;
    }

    // Subscribe to the events we care about.
    libvlc_event_manager_t *t_em = libvlc_media_player_event_manager(m_player);
    libvlc_event_attach(t_em, libvlc_MediaPlayerPlaying,     OnVLCEvent, this);
    libvlc_event_attach(t_em, libvlc_MediaPlayerEndReached,  OnVLCEvent, this);
    libvlc_event_attach(t_em, libvlc_MediaPlayerTimeChanged, OnVLCEvent, this);

    // Create the platform-specific native view.
#if defined(TARGET_PLATFORM_MACOS_X)
    m_view = MCVLCCreateNSView();
#endif
}

MCVLCPlayer::~MCVLCPlayer()
{
    // Stop any pending offscreen decode.
    if (m_offscreen_bitmap != nullptr)
    {
        MCImageFreeBitmap(m_offscreen_bitmap);
        m_offscreen_bitmap = nullptr;
    }

    // Destroy the VLC player (this detaches event listeners automatically).
    if (m_player != nullptr)
    {
        libvlc_media_player_stop(m_player);
        libvlc_media_player_release(m_player);
        m_player = nullptr;
    }

    // Release the current media.
    if (m_media != nullptr)
    {
        libvlc_media_release(m_media);
        m_media = nullptr;
    }

    // Destroy the native view.
#if defined(TARGET_PLATFORM_MACOS_X)
    if (m_view != nullptr)
    {
        MCVLCDestroyNSView(m_view);
        m_view = nullptr;
    }
#endif

    MCMemoryDeleteArray(m_markers);
    ReleaseVLCInstance();
}

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

void MCVLCPlayer::Realize()
{
    AttachNativeView();
    Synchronize();
}

void MCVLCPlayer::Unrealize()
{
    // In offscreen mode there is nothing native to detach.
    if (m_offscreen)
        return;

#if defined(TARGET_PLATFORM_MACOS_X)
    MCVLCSyncNSView(m_view,
                    MCRectangleMake(0, 0, 0, 0),
                    false);
#elif defined(TARGET_PLATFORM_WINDOWS)
    if (m_view != nullptr)
        ShowWindow((HWND)m_view, SW_HIDE);
#endif
}

void MCVLCPlayer::Synchronize()
{
    if (m_offscreen)
        return;

#if defined(TARGET_PLATFORM_MACOS_X)
    if (m_view != nullptr)
        MCVLCSyncNSView(m_view, m_rect, m_visible);
#elif defined(TARGET_PLATFORM_WINDOWS)
    if (m_view != nullptr)
    {
        HWND t_hwnd = (HWND)m_view;
        SetWindowPos(t_hwnd, nullptr,
                     m_rect.x, m_rect.y,
                     m_rect.width, m_rect.height,
                     SWP_NOZORDER | SWP_NOACTIVATE);
        ShowWindow(t_hwnd, m_visible ? SW_SHOWNA : SW_HIDE);
    }
#elif defined(TARGET_PLATFORM_LINUX)
    if (m_view != nullptr)
    {
        GdkWindow *t_win = (GdkWindow *)m_view;
        gdk_window_move_resize(t_win,
                               m_rect.x, m_rect.y,
                               m_rect.width, m_rect.height);
        if (m_visible)
            gdk_window_show_unraised(t_win);
        else
            gdk_window_hide(t_win);
    }
#endif
}

void MCVLCPlayer::AttachNativeView()
{
    if (m_player == nullptr || m_offscreen)
        return;

#if defined(TARGET_PLATFORM_MACOS_X)
    if (m_view != nullptr)
        libvlc_media_player_set_nsobject(m_player, m_view);
#elif defined(TARGET_PLATFORM_WINDOWS)
    if (m_view != nullptr)
        libvlc_media_player_set_hwnd(m_player, m_view);
#elif defined(TARGET_PLATFORM_LINUX)
    // XID is stored as a uintptr_t in m_view.
    libvlc_media_player_set_xwindow(m_player,
                                    (uint32_t)(uintptr_t)m_view);
#endif
}

// ---------------------------------------------------------------------------
// GetNativeView / SetNativeParentView
// ---------------------------------------------------------------------------

bool MCVLCPlayer::GetNativeView(void *&r_view)
{
    if (m_view == nullptr)
        return false;
    r_view = m_view;
    return true;
}

bool MCVLCPlayer::SetNativeParentView(void *p_parent_view)
{
#if defined(TARGET_PLATFORM_WINDOWS)
    // Create a child window hosted inside the stack window.
    if (p_parent_view == nullptr)
        return false;

    HWND t_parent = (HWND)p_parent_view;
    HWND t_child  = CreateWindowEx(0, "STATIC", nullptr,
                                   WS_CHILD | WS_CLIPSIBLINGS | WS_CLIPCHILDREN,
                                   m_rect.x, m_rect.y,
                                   m_rect.width, m_rect.height,
                                   t_parent, nullptr, nullptr, nullptr);
    if (t_child == nullptr)
        return false;

    if (m_view != nullptr)
        DestroyWindow((HWND)m_view);

    m_view = t_child;
    libvlc_media_player_set_hwnd(m_player, m_view);
    if (m_visible)
        ShowWindow(t_child, SW_SHOWNA);
#elif defined(TARGET_PLATFORM_LINUX)
    // Obtain the X11 window ID from the GDK parent window.
    if (p_parent_view == nullptr)
        return false;

    GdkWindow *t_parent = (GdkWindow *)p_parent_view;
    GdkWindowAttr t_wa;
    t_wa.colormap    = nullptr;
    t_wa.x           = m_rect.x;
    t_wa.y           = m_rect.y;
    t_wa.width       = m_rect.width  > 0 ? m_rect.width  : 1;
    t_wa.height      = m_rect.height > 0 ? m_rect.height : 1;
    t_wa.event_mask  = 0;
    t_wa.wclass      = GDK_INPUT_OUTPUT;
    t_wa.window_type = GDK_WINDOW_CHILD;

    GdkWindow *t_win = gdk_window_new(t_parent, &t_wa,
                                      GDK_WA_X | GDK_WA_Y);
    if (t_win == nullptr)
        return false;

    if (m_view != nullptr)
        gdk_window_destroy((GdkWindow *)m_view);

    m_view = t_win;
    uint32_t t_xid = gdk_x11_drawable_get_xid(t_win);
    libvlc_media_player_set_xwindow(m_player, t_xid);

    if (m_visible)
        gdk_window_show_unraised(t_win);
#else
    // macOS: the NSView is created at construction time; nothing to do here.
    (void)p_parent_view;
#endif

    return true;
}

// ---------------------------------------------------------------------------
// Load / Unload
// ---------------------------------------------------------------------------

void MCVLCPlayer::Load(MCStringRef p_filename, bool p_is_url)
{
    Unload();

    if (m_player == nullptr || MCStringIsEmpty(p_filename))
        return;

    MCAutoStringRefAsCString t_cstr;
    if (!t_cstr.Lock(p_filename))
        return;

    if (p_is_url)
        m_media = libvlc_media_new_location(s_vlc_instance, *t_cstr);
    else
        m_media = libvlc_media_new_path(s_vlc_instance, *t_cstr);

    if (m_media == nullptr)
    {
        m_has_invalid_filename = true;
        return;
    }

    libvlc_media_player_set_media(m_player, m_media);

    // Reset selection / state.
    m_selection_start  = 0;
    m_selection_finish = 0;
    m_last_marker      = UINT64_MAX;
    m_buffered_time    = 0;
    m_finished         = false;
    m_has_invalid_filename = false;

    // Wire up the native view (or offscreen callbacks) now that we have media.
    if (!m_offscreen)
        AttachNativeView();
    else
        SetupOffscreenCallbacks();

    // Apply current volume.
    libvlc_audio_set_volume(m_player, m_volume);
}

void MCVLCPlayer::Unload()
{
    if (m_player != nullptr)
        libvlc_media_player_stop(m_player);

    if (m_media != nullptr)
    {
        libvlc_media_release(m_media);
        m_media = nullptr;
    }

    m_playing  = false;
    m_finished = false;
}

// ---------------------------------------------------------------------------
// Offscreen rendering setup
// ---------------------------------------------------------------------------

void MCVLCPlayer::SetupOffscreenCallbacks()
{
    if (m_player == nullptr)
        return;

    libvlc_video_set_callbacks(m_player,
                               OnVideoLock,
                               OnVideoUnlock,
                               OnVideoDisplay,
                               this);

    libvlc_video_set_format_callbacks(m_player,
                                      OnVideoFormat,
                                      OnVideoCleanup);
}

// ---------------------------------------------------------------------------
// Playback control
// ---------------------------------------------------------------------------

bool MCVLCPlayer::IsPlaying()
{
    if (m_player == nullptr)
        return false;
    return libvlc_media_player_get_state(m_player) == libvlc_Playing;
}

void MCVLCPlayer::Start(double rate)
{
    if (m_player == nullptr)
        return;

    m_rate = rate;

    // Rewind if at the end and playing forward.
    if (m_finished && rate > 0)
    {
        libvlc_media_player_set_time(m_player, 0);
        m_finished = false;
    }

    libvlc_media_player_play(m_player);
    libvlc_media_player_set_rate(m_player, (float)rate);
    m_playing = true;
}

void MCVLCPlayer::Stop()
{
    if (m_player == nullptr)
        return;
    libvlc_media_player_pause(m_player);
    m_playing = false;
}

void MCVLCPlayer::Step(int amount)
{
    if (m_player == nullptr)
        return;

    libvlc_time_t t_cur = libvlc_media_player_get_time(m_player);
    libvlc_time_t t_new = t_cur + (libvlc_time_t)amount * 40; // ~40 ms per frame @25fps
    if (t_new < 0)
        t_new = 0;
    libvlc_media_player_set_time(m_player, t_new);
}

// ---------------------------------------------------------------------------
// LockBitmap / UnlockBitmap (offscreen snapshot)
// ---------------------------------------------------------------------------

bool MCVLCPlayer::LockBitmap(const MCGIntegerSize &p_size,
                              MCImageBitmap *&r_bitmap)
{
    if (m_offscreen_bitmap == nullptr)
        return false;

    // Scale the offscreen bitmap to the requested size if needed.
    if ((unsigned)p_size.width  == m_offscreen_width &&
        (unsigned)p_size.height == m_offscreen_height)
    {
        r_bitmap = m_offscreen_bitmap;
        return true;
    }

    // Allocate a scaled copy.
    MCImageBitmap *t_scaled = nullptr;
    if (!MCImageBitmapCreate(p_size.width, p_size.height, t_scaled))
        return false;

    // Simple nearest-neighbour scale.
    for (uint32_t ty = 0; ty < (uint32_t)p_size.height; ty++)
    {
        uint32_t sy = ty * m_offscreen_height / (uint32_t)p_size.height;
        uint32_t *t_src = (uint32_t *)((uint8_t *)m_offscreen_bitmap->data +
                                       sy * m_offscreen_bitmap->stride);
        uint32_t *t_dst = (uint32_t *)((uint8_t *)t_scaled->data +
                                       ty * t_scaled->stride);
        for (uint32_t tx = 0; tx < (uint32_t)p_size.width; tx++)
        {
            uint32_t sx = tx * m_offscreen_width / (uint32_t)p_size.width;
            t_dst[tx] = t_src[sx];
        }
    }

    r_bitmap = t_scaled;
    return true;
}

void MCVLCPlayer::UnlockBitmap(MCImageBitmap *bitmap)
{
    // Free the scaled copy (if any) — but never free m_offscreen_bitmap itself.
    if (bitmap != m_offscreen_bitmap)
        MCImageFreeBitmap(bitmap);
}

// ---------------------------------------------------------------------------
// SetProperty / GetProperty
// ---------------------------------------------------------------------------

void MCVLCPlayer::SetProperty(MCPlatformPlayerProperty p_property,
                               MCPlatformPropertyType   p_type,
                               void                    *p_value)
{
    switch (p_property)
    {
        // --- file / URL ---
        case kMCPlatformPlayerPropertyURL:
            Load(*(MCStringRef *)p_value, true);
            break;

        case kMCPlatformPlayerPropertyFilename:
            Load(*(MCStringRef *)p_value, false);
            break;

        // --- geometry ---
        case kMCPlatformPlayerPropertyRect:
            m_rect = *(MCRectangle *)p_value;
            Synchronize();
            break;

        case kMCPlatformPlayerPropertyVisible:
            m_visible = *(bool *)p_value;
            Synchronize();
            break;

        // --- offscreen mode ---
        case kMCPlatformPlayerPropertyOffscreen:
        {
            bool t_new_offscreen = *(bool *)p_value;
            if (t_new_offscreen == m_offscreen)
                break;
            m_offscreen = t_new_offscreen;
            if (m_media != nullptr)
            {
                // Re-attach VLC to the correct output.
                libvlc_media_player_stop(m_player);
                if (m_offscreen)
                    SetupOffscreenCallbacks();
                else
                    AttachNativeView();
            }
            break;
        }

        // --- time ---
        case kMCPlatformPlayerPropertyCurrentTime:
            if (m_player != nullptr)
                libvlc_media_player_set_time(m_player,
                    (libvlc_time_t)(*(MCPlatformPlayerDuration *)p_value));
            break;

        case kMCPlatformPlayerPropertyStartTime:
            m_selection_start = *(MCPlatformPlayerDuration *)p_value;
            if (m_selection_start > m_selection_finish)
                m_selection_start = m_selection_finish;
            break;

        case kMCPlatformPlayerPropertyFinishTime:
            m_selection_finish = *(MCPlatformPlayerDuration *)p_value;
            if (m_selection_start > m_selection_finish)
                m_selection_finish = m_selection_start;
            break;

        // --- playback ---
        case kMCPlatformPlayerPropertyPlayRate:
            m_rate = *(double *)p_value;
            if (m_player != nullptr && IsPlaying())
                libvlc_media_player_set_rate(m_player, (float)m_rate);
            break;

        case kMCPlatformPlayerPropertyVolume:
            m_volume = *(uint16_t *)p_value;
            if (m_player != nullptr)
                libvlc_audio_set_volume(m_player, (int)m_volume);
            break;

        case kMCPlatformPlayerPropertyLoop:
            m_looping = *(bool *)p_value;
            break;

        case kMCPlatformPlayerPropertyOnlyPlaySelection:
            m_play_selection_only = *(bool *)p_value;
            break;

        // --- markers ---
        case kMCPlatformPlayerPropertyMarkers:
        {
            MCPlatformPlayerDurationArray *t_arr =
                (MCPlatformPlayerDurationArray *)p_value;
            m_last_marker = UINT64_MAX;
            MCMemoryDeleteArray(m_markers);
            m_markers     = nullptr;
            m_marker_count = 0;
            if (t_arr->count > 0)
            {
                /* UNCHECKED */
                MCMemoryResizeArray(t_arr->count, m_markers, m_marker_count);
                MCMemoryCopy(m_markers, t_arr->ptr,
                             m_marker_count * sizeof(MCPlatformPlayerDuration));
            }
            break;
        }

        // --- ignored / not applicable ---
        case kMCPlatformPlayerPropertyShowSelection:
        case kMCPlatformPlayerPropertyMirrored:
        case kMCPlatformPlayerPropertyScalefactor:
        case kMCPlatformPlayerPropertyLeftBalance:
        case kMCPlatformPlayerPropertyRightBalance:
        case kMCPlatformPlayerPropertyPan:
        default:
            break;
    }
}

void MCVLCPlayer::GetProperty(MCPlatformPlayerProperty p_property,
                               MCPlatformPropertyType   p_type,
                               void                    *r_value)
{
    switch (p_property)
    {
        case kMCPlatformPlayerPropertyOffscreen:
            *(bool *)r_value = m_offscreen;
            break;

        case kMCPlatformPlayerPropertyRect:
            *(MCRectangle *)r_value = m_rect;
            break;

        case kMCPlatformPlayerPropertyVisible:
            *(bool *)r_value = m_visible;
            break;

        case kMCPlatformPlayerPropertyMovieRect:
        {
            unsigned t_w = 0, t_h = 0;
            if (m_player != nullptr)
                libvlc_video_get_size(m_player, 0, &t_w, &t_h);
            *(MCRectangle *)r_value = MCRectangleMake(0, 0, t_w, t_h);
            break;
        }

        case kMCPlatformPlayerPropertyDuration:
            *(MCPlatformPlayerDuration *)r_value =
                (m_player != nullptr)
                    ? (MCPlatformPlayerDuration)libvlc_media_player_get_length(m_player)
                    : 0;
            break;

        case kMCPlatformPlayerPropertyTimescale:
            // VLC uses milliseconds internally → timescale is 1000.
            *(MCPlatformPlayerDuration *)r_value = 1000;
            break;

        case kMCPlatformPlayerPropertyCurrentTime:
            *(MCPlatformPlayerDuration *)r_value =
                (m_player != nullptr)
                    ? (MCPlatformPlayerDuration)libvlc_media_player_get_time(m_player)
                    : 0;
            break;

        case kMCPlatformPlayerPropertyStartTime:
            *(MCPlatformPlayerDuration *)r_value = m_selection_start;
            break;

        case kMCPlatformPlayerPropertyFinishTime:
            *(MCPlatformPlayerDuration *)r_value = m_selection_finish;
            break;

        case kMCPlatformPlayerPropertyPlayRate:
            *(double *)r_value = m_rate;
            break;

        case kMCPlatformPlayerPropertyVolume:
            *(uint16_t *)r_value = m_volume;
            break;

        case kMCPlatformPlayerPropertyLoop:
            *(bool *)r_value = m_looping;
            break;

        case kMCPlatformPlayerPropertyOnlyPlaySelection:
            *(bool *)r_value = m_play_selection_only;
            break;

        case kMCPlatformPlayerPropertyInvalidFilename:
            *(bool *)r_value = m_has_invalid_filename;
            break;

        case kMCPlatformPlayerPropertyLoadedTime:
            *(MCPlatformPlayerDuration *)r_value = m_buffered_time;
            break;

        case kMCPlatformPlayerPropertyMediaTypes:
        {
            MCPlatformPlayerMediaTypes t_types = 0;
            if (m_media != nullptr)
            {
                libvlc_media_track_t **t_tracks = nullptr;
                unsigned t_count =
                    libvlc_media_tracks_get(m_media, &t_tracks);
                for (unsigned i = 0; i < t_count; i++)
                {
                    switch (t_tracks[i]->i_type)
                    {
                        case libvlc_track_video:
                            t_types |= kMCPlatformPlayerMediaTypeVideo; break;
                        case libvlc_track_audio:
                            t_types |= kMCPlatformPlayerMediaTypeAudio; break;
                        case libvlc_track_text:
                            t_types |= kMCPlatformPlayerMediaTypeText;  break;
                        default: break;
                    }
                }
                if (t_tracks != nullptr)
                    libvlc_media_tracks_release(t_tracks, t_count);
            }
            *(MCPlatformPlayerMediaTypes *)r_value = t_types;
            break;
        }

        // --- defaults for unsupported properties ---
        case kMCPlatformPlayerPropertyMirrored:
            *(bool *)r_value = false;
            break;
        case kMCPlatformPlayerPropertyScalefactor:
            *(double *)r_value = 1.0;
            break;
        case kMCPlatformPlayerPropertyLeftBalance:
        case kMCPlatformPlayerPropertyRightBalance:
            *(double *)r_value = 100.0;
            break;
        case kMCPlatformPlayerPropertyPan:
            *(double *)r_value = 0.0;
            break;

        default:
            break;
    }
}

// ---------------------------------------------------------------------------
// Track properties
// ---------------------------------------------------------------------------

void MCVLCPlayer::CountTracks(uindex_t &r_count)
{
    r_count = 0;
    if (m_media == nullptr)
        return;

    libvlc_media_track_t **t_tracks = nullptr;
    unsigned t_count = libvlc_media_tracks_get(m_media, &t_tracks);
    r_count = (uindex_t)t_count;
    if (t_tracks != nullptr)
        libvlc_media_tracks_release(t_tracks, t_count);
}

bool MCVLCPlayer::FindTrackWithId(uint32_t p_id, uindex_t &r_index)
{
    if (m_media == nullptr)
        return false;

    libvlc_media_track_t **t_tracks = nullptr;
    unsigned t_count = libvlc_media_tracks_get(m_media, &t_tracks);

    bool t_found = false;
    for (unsigned i = 0; i < t_count; i++)
    {
        if ((uint32_t)t_tracks[i]->i_id == p_id)
        {
            r_index = (uindex_t)i;
            t_found = true;
            break;
        }
    }

    if (t_tracks != nullptr)
        libvlc_media_tracks_release(t_tracks, t_count);

    return t_found;
}

void MCVLCPlayer::SetTrackProperty(uindex_t                     p_index,
                                    MCPlatformPlayerTrackProperty p_property,
                                    MCPlatformPropertyType        p_type,
                                    void                         *p_value)
{
    // Track enable/disable is not directly supported via the VLC track API
    // in the same way — leave as no-op for now.
    (void)p_index;
    (void)p_property;
    (void)p_type;
    (void)p_value;
}

void MCVLCPlayer::GetTrackProperty(uindex_t                     p_index,
                                    MCPlatformPlayerTrackProperty p_property,
                                    MCPlatformPropertyType        p_type,
                                    void                         *r_value)
{
    if (m_media == nullptr)
        return;

    libvlc_media_track_t **t_tracks = nullptr;
    unsigned t_count = libvlc_media_tracks_get(m_media, &t_tracks);

    if (p_index >= (uindex_t)t_count)
    {
        if (t_tracks != nullptr)
            libvlc_media_tracks_release(t_tracks, t_count);
        return;
    }

    libvlc_media_track_t *t_track = t_tracks[p_index];

    switch (p_property)
    {
        case kMCPlatformPlayerTrackPropertyId:
            *(uint32_t *)r_value = (uint32_t)t_track->i_id;
            break;

        case kMCPlatformPlayerTrackPropertyMediaTypeName:
        {
            const char *t_type_name = "unknown";
            switch (t_track->i_type)
            {
                case libvlc_track_video: t_type_name = "video"; break;
                case libvlc_track_audio: t_type_name = "audio"; break;
                case libvlc_track_text:  t_type_name = "text";  break;
                default: break;
            }
            /* UNCHECKED */
            MCStringCreateWithCString(t_type_name,
                                      *(MCStringRef *)r_value);
            break;
        }

        case kMCPlatformPlayerTrackPropertyOffset:
            *(MCPlatformPlayerDuration *)r_value = 0;
            break;

        case kMCPlatformPlayerTrackPropertyDuration:
            *(MCPlatformPlayerDuration *)r_value =
                (MCPlatformPlayerDuration)libvlc_media_player_get_length(m_player);
            break;

        case kMCPlatformPlayerTrackPropertyEnabled:
            *(bool *)r_value = true;
            break;

        default:
            break;
    }

    if (t_tracks != nullptr)
        libvlc_media_tracks_release(t_tracks, t_count);
}

// ---------------------------------------------------------------------------
// VLC event callback (VLC internal thread)
// ---------------------------------------------------------------------------

void MCVLCPlayer::OnVLCEvent(const struct libvlc_event_t *p_event, void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;

    switch (p_event->type)
    {
        case libvlc_MediaPlayerPlaying:
            // Retain so the player is not deleted before the notify fires.
            t_self->Retain();
            MCNotifyPush(DoPlaying, t_self, false, false);
            break;

        case libvlc_MediaPlayerEndReached:
            t_self->Retain();
            MCNotifyPush(DoFinished, t_self, false, false);
            break;

        case libvlc_MediaPlayerTimeChanged:
            t_self->Retain();
            MCNotifyPush(DoTimeChanged, t_self, false, false);
            break;

        default:
            break;
    }
}

// ---------------------------------------------------------------------------
// Main-thread notification dispatchers
// ---------------------------------------------------------------------------

void MCVLCPlayer::DoPlaying(void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    t_self->m_playing  = true;
    t_self->m_finished = false;
    t_self->Release();
}

void MCVLCPlayer::DoFinished(void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    t_self->m_playing  = false;
    t_self->m_finished = true;

    if (t_self->m_looping)
    {
        // Restart from the beginning (or selection start).
        libvlc_media_player_set_time(t_self->m_player,
            (libvlc_time_t)t_self->m_selection_start);
        libvlc_media_player_play(t_self->m_player);
    }
    else
    {
        MCPlatformCallbackSendPlayerFinished(t_self);
    }

    t_self->Release();
}

void MCVLCPlayer::DoTimeChanged(void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;

    if (t_self->m_player == nullptr)
    {
        t_self->Release();
        return;
    }

    MCPlatformPlayerDuration t_current =
        (MCPlatformPlayerDuration)libvlc_media_player_get_time(t_self->m_player);

    // Fire any markers that have been passed.
    if (t_self->m_marker_count > 0 && t_self->m_markers != nullptr)
    {
        // Find the highest marker index whose time <= current time.
        uindex_t t_new_last = UINDEX_MAX;
        for (uindex_t i = 0; i < t_self->m_marker_count; i++)
        {
            if (t_self->m_markers[i] <= t_current)
                t_new_last = i;
        }

        if (t_new_last != UINDEX_MAX &&
            t_new_last != (uindex_t)t_self->m_last_marker)
        {
            t_self->m_last_marker = (MCPlatformPlayerDuration)t_new_last;
            MCPlatformCallbackSendPlayerMarkerChanged(
                t_self, t_self->m_markers[t_new_last]);
        }
    }

    // Enforce play-selection end boundary.
    if (t_self->m_play_selection_only &&
        t_self->m_selection_finish > t_self->m_selection_start &&
        t_current >= t_self->m_selection_finish)
    {
        libvlc_media_player_pause(t_self->m_player);
        libvlc_media_player_set_time(t_self->m_player,
            (libvlc_time_t)t_self->m_selection_finish);
        MCPlatformCallbackSendPlayerFinished(t_self);
        t_self->Release();
        return;
    }

    MCPlatformCallbackSendPlayerCurrentTimeChanged(t_self);
    t_self->Release();
}

// ---------------------------------------------------------------------------
// Offscreen video callbacks (called on VLC decode thread)
// ---------------------------------------------------------------------------

unsigned MCVLCPlayer::OnVideoFormat(void     **pp_opaque,
                                     char      *p_chroma,
                                     unsigned  *p_width,
                                     unsigned  *p_height,
                                     unsigned  *p_pitches,
                                     unsigned  *p_lines)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)*pp_opaque;

    // Request RGBA from VLC.
    memcpy(p_chroma, "RV32", 4);

    // Remember the negotiated size.
    t_self->m_offscreen_width  = *p_width;
    t_self->m_offscreen_height = *p_height;

    // Bytes per row (4 bytes per pixel, aligned to 4 bytes).
    p_pitches[0] = ((*p_width) * 4 + 3) & ~3u;
    p_lines[0]   = *p_height;

    // Allocate the backing bitmap.
    if (t_self->m_offscreen_bitmap != nullptr)
        MCImageFreeBitmap(t_self->m_offscreen_bitmap);

    MCImageBitmapCreate(*p_width, *p_height, t_self->m_offscreen_bitmap);
    if (t_self->m_offscreen_bitmap != nullptr)
        t_self->m_offscreen_planes[0] = t_self->m_offscreen_bitmap->data;
    else
        t_self->m_offscreen_planes[0] = nullptr;

    return 1; // one plane
}

void MCVLCPlayer::OnVideoCleanup(void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    if (t_self->m_offscreen_bitmap != nullptr)
    {
        MCImageFreeBitmap(t_self->m_offscreen_bitmap);
        t_self->m_offscreen_bitmap     = nullptr;
        t_self->m_offscreen_planes[0]  = nullptr;
    }
}

void *MCVLCPlayer::OnVideoLock(void *p_opaque, void **pp_planes)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    pp_planes[0] = t_self->m_offscreen_planes[0];
    return nullptr; // no picture token needed
}

void MCVLCPlayer::OnVideoUnlock(void *p_opaque, void *p_picture,
                                  void *const *pp_planes)
{
    // Nothing to do — the bitmap is written in place.
    (void)p_opaque;
    (void)p_picture;
    (void)pp_planes;
}

static void MCVLCDoFrameChanged(void *p_opaque)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    MCPlatformCallbackSendPlayerFrameChanged(t_self);
    t_self->Release();
}

void MCVLCPlayer::OnVideoDisplay(void *p_opaque, void *p_picture)
{
    MCVLCPlayer *t_self = (MCVLCPlayer *)p_opaque;
    // Notify the engine on the main thread that a new frame is ready.
    t_self->Retain();
    MCNotifyPush(MCVLCDoFrameChanged, t_self, false, false);
    (void)p_picture;
}

// ---------------------------------------------------------------------------
// Factory
// ---------------------------------------------------------------------------

MCVLCPlayer *MCVLCPlayerCreate()
{
    return new (nothrow) MCVLCPlayer();
}
