/* Copyright (C) 2024 HyperXTalk Contributors

This file is part of HyperXTalk.

HyperXTalk is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License v3 as published by the Free
Software Foundation.  */

// vlc-player-mac.mm — macOS helper functions for MCVLCPlayer.
//
// Creates and manages the NSView that VLC renders into.

#import <Cocoa/Cocoa.h>

#include "globdefs.h"
#include "platform.h"
#include "graphics_util.h"

// ---------------------------------------------------------------------------
// MCVLCPlayerView — a plain layer-hosting NSView for VLC to render into.
// ---------------------------------------------------------------------------

@interface MCVLCPlayerView : NSView
@end

@implementation MCVLCPlayerView

- (BOOL)isOpaque
{
    return YES;
}

- (BOOL)wantsLayer
{
    return YES;
}

- (void)dealloc
{
    [super dealloc];
}

@end

// ---------------------------------------------------------------------------
// C helper API called from vlc-player.cpp
// ---------------------------------------------------------------------------

extern "C"
{

void *MCVLCCreateNSView(void)
{
    MCVLCPlayerView *t_view =
        [[MCVLCPlayerView alloc] initWithFrame: NSZeroRect];
    if (t_view == nil)
        return nullptr;

    // Give it a black background so the area is clearly defined.
    [t_view setWantsLayer: YES];
    t_view.layer.backgroundColor =
        [[NSColor blackColor] CGColor];

    return (void *)t_view;
}

void MCVLCDestroyNSView(void *p_view)
{
    if (p_view == nullptr)
        return;

    MCVLCPlayerView *t_view = (MCVLCPlayerView *)p_view;

    // Remove from superview if it has one.
    if ([t_view superview] != nil)
        [t_view removeFromSuperview];

    [t_view release];
}

void MCVLCSyncNSView(void *p_view, MCRectangle p_rect, bool p_visible)
{
    if (p_view == nullptr)
        return;

    MCVLCPlayerView *t_view = (MCVLCPlayerView *)p_view;

    if (!p_visible || (p_rect.width == 0 && p_rect.height == 0))
    {
        [t_view setHidden: YES];
        return;
    }

    NSView *t_parent = [t_view superview];
    if (t_parent == nil)
    {
        // Not yet embedded — nothing to position.
        [t_view setHidden: !p_visible];
        return;
    }

    // Convert from HyperXTalk (top-left origin) to Cocoa (bottom-left origin).
    NSRect t_parent_bounds = [t_parent bounds];
    NSRect t_frame = NSMakeRect(
        p_rect.x,
        (CGFloat)t_parent_bounds.size.height - p_rect.y - p_rect.height,
        p_rect.width,
        p_rect.height);

    [t_view setFrame: t_frame];
    [t_view setHidden: !p_visible];
}

} // extern "C"
