#pragma once
// Workaround for Windows SDK 10.0.26100.0 compatibility with older compilers
// This header MUST be included before ANY Windows headers

// These macros need to be defined to skip the C++20 code in winnt.h
// They must be defined BEFORE windows.h is included

// Skip the problematic policy types - these are optional Windows features
#ifndef _DISABLE_IMAGE_POLICY
#define _DISABLE_IMAGE_POLICY
#endif
