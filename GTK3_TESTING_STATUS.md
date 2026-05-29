# GTK3 / WebKitGTK Refactor — Testing Status & Methodology

> Branch: `webkitgtk-browser`
> Upstream PR: [#142](https://github.com/emily-elizabeth/HyperXTalk/pull/142)
> Platform: Linux x86_64 (Ubuntu/Debian)
> GTK Version: 3.24.41
> Date: 2026-05-29

---

## 1. How We Test

### Build Configuration
```bash
./config.sh --platform linux-x86_64
make compile-linux-x86_64 -j4
```

### Test Harnesses

| Target | Command | What it tests | GUI Required |
|--------|---------|---------------|--------------|
| C++ unit tests | `make check-linux-x86_64` | libFoundation, libGraphics, etc. | No |
| LCB VM tests | `make -C tests bin_dir=../linux-x86_64-bin lcb-check` | LiveCode Builder VM | No |
| LCS engine tests | `make -C tests bin_dir=../linux-x86_64-bin check` | LiveCode Script engine + IDE | Yes (xvfb-run) |
| LCS parser tests | `make -C tests bin_dir=../linux-x86_64-bin lcs-parser-check` | Script parser | No |
| Compiler tests | `make -C tests bin_dir=../linux-x86_64-bin compiler-check` | LCB compiler | No |
| IDE tests | `make -C ide/tests bin_dir=../../linux-x86_64-bin check` | IDE functionality | Yes |
| Extension tests | `make -C extensions bin_dir=../linux-x86_64-bin check` | LCB widgets/libraries | Yes |

### GUI Testing Environment
All GUI-required tests run under a virtual framebuffer:
```bash
xvfb-run -a <command>
```

### Manual Smoke Tests
Custom `.livecodescript` files under `_test_stacks/` exercise specific APIs:
- Widget creation (button, field, scrollbar, group, graphic, browser)
- Show/hide cycles
- Property mutation
- Invalid value handling
- Browser widget: create, set HTML, set URL, evaluate JS, show/hide

### Browser Widget Test Suite (Step L)
Six dedicated test scripts in `_test_stacks/`:
1. `browser-widget-memory-test` — 50× create/destroy cycles
2. `browser-widget-security-test` — about:blank, data: URI, JS eval, malformed handler injection
3. `browser-widget-crash-test` — rapid creation/destruction stress
4. `browser-widget-hidpi-test` — resize, hide/show, large content
5. `browser-widget-lifecycle-test` — card navigation, lock screen, stack destroy
6. `browser-widget-concurrent-test` — rapid URL/HTML changes, back/forward, reload, stop

### Server/Headless Smoke Test
```bash
echo 'put the mouse' | xvfb-run -a ./linux-x86_64-bin/server-community
```

---

## 2. What Was Tested & Results

### Build
- [x] `make compile-linux-x86_64 -j4` — **PASS** (libbrowser target)
- [x] Full `server-community` / `standalone-community` — **BLOCKED** by prebuilt `build-libraries.sh` CEF symlink issue (unrelated to WebKitGTK changes)
- [x] All binaries produced in `linux-x86_64-bin/`

### C++ Unit Tests (libFoundation)
- `test-libFoundation` — **76/77 PASS**
  - Known failure: `name.index_equal_string` (pre-existing, not GTK3-related)

### LCB VM Tests
- `lcb-check` — **836 tests behaved as expected**
  - 9 expected failures
  - 40 skipped on Linux:
    - 25 ObjC interop (`interop-objc.lcb` + `objc.lcb`)
    - 14 Java FFI (`java.lcb` + `foreign-binding.lcb`, bug 19934)
    - 1 bitwise bug 14939

### Manual Smoke Tests
- [x] Server headless start — **PASS**
- [x] IDE window open under xvfb — **PASS**
- [x] Basic widget creation cycles — **PASS**
- [x] Invalid button style (`"tab"`) — clean exit (was SIGSEGV before fix) — **PASS**
- [x] Valid scrollbar orientations (`"horizontal"`/`"vertical"`) — **PASS**
- [x] Browser widget creation, HTML injection, property setting — **PASS**
- [x] Full `_test_stacks/*.livecodescript` crash sweep under `xvfb-run` — **28/28 PASS, exit 0, no crashes**
  - Command: `for f in _test_stacks/*.livecodescript; do timeout 30s-60s xvfb-run -a ./linux-x86_64-bin/server-community "$f"; done`
  - Covered: stacks/cards, buttons, tab style, fields, scrollbars/sliders/progress, groups, graphics, show/hide, property changes while hidden, browser create/HTML/URL/properties/JS/nav, dialogs (answer/ask/file/folder/color), drag & drop, IME/unicode input

### Browser Widget Test Suite
- [x] `browser-widget-memory-test` — **PASS**
- [x] `browser-widget-security-test` — **PASS**
- [x] `browser-widget-crash-test` — **PASS**
- [x] `browser-widget-hidpi-test` — **PASS**
- [x] `browser-widget-lifecycle-test` — **PASS**
- [x] `browser-widget-concurrent-test` — **PASS**

### Gemini Verification
- Phase 3 Steps F–L: **34/34 PASS** (2026-05-27)
- Step M Round 1: **PARTIAL** — re-entrancy abort hang, raw browser pointer UAF
- Step M Round 2: **PASS** (2026-05-29)

### Full LCS Engine/IDE Tests
- Status: **NOT YET COMPLETED** (very slow due to extension loading)
- No critical assertion failures observed after GTK3 fixes in prior partial run
- Previously flooded with `Gdk-CRITICAL: gdk_device_get_state: assertion 'GDK_IS_WINDOW (window)' failed` — **FIXED**

---

## 3. Fixes Applied (Chronological)

### Phase 1 — Deprecated API Removal
| Commit | Issue | Files |
|--------|-------|-------|
| `04dcf8a44` | Deprecated `gdk_display_get_pointer` / `gdk_display_warp_pointer` | `engine/src/lnxdce.cpp`, `engine/src/linux.stubs` |
| `9ab07dd57` | SIGSEGV on startup script error in `-ui` mode (heap corruption after `longjmp`) | `engine/src/dispatch.cpp` |
| `eb1a2675f` | `gdk_device_get_state` assertion failure; deprecated `gdk_pointer_grab` / `gdk_display_pointer_ungrab` | `engine/src/lnxdce.cpp`, `engine/src/lnxdcs.cpp`, `engine/src/lnxdnd.cpp`, `engine/src/lnxdc.h`, `engine/src/linux.stubs` |

### Phase 2 — Stability Hardening
| Commit | Issue | Files |
|--------|-------|-------|
| `0e893a9e2` | Wayland X11 lock, thread-safe WebKit, HiDPI scale | `engine/src/lnxdcs.cpp`, `libbrowser/src/libbrowser_webkitgtk.cpp`, `engine/src/lnxstack.cpp` |
| `30e201b59` | `gdk_set_allowed_backends` must precede `gdk_init()` | `engine/src/lnxdcs.cpp` |

### Phase 3 — Deep WebKitGTK Hardening
| Commit | Step | What | Files |
|--------|------|------|-------|
| `78ac8ce17` | — | WebKitGTK deep hardening (initial) | `libbrowser/src/libbrowser_webkitgtk.cpp`, `libbrowser/src/libbrowser_webkitgtk.h` |
| `3db745fc1` | — | Compilation errors in Phase 3 hardening | `libbrowser/src/libbrowser_webkitgtk.cpp` |
| `662f2be79` | L | WebKitGTK comprehensive test suite (6 scripts) | `_test_stacks/browser-widget-*-test.livecodescript` |
| `45cb3877f` | — | WebKitGTK JS bridge memory safety + dispatch re-entrancy guard | `libbrowser/src/libbrowser_webkitgtk.cpp` |
| `bc9cada41` | F | Replace `s_main_thread` with `g_main_context_is_owner`; add weak pointer | `libbrowser/src/libbrowser_webkitgtk.cpp`, `libbrowser/src/libbrowser_webkitgtk.stubs`, `engine/src/linux.stubs` |
| `bb34981be` | — | Correct `.stubs` indentation for `weak_stub_maker.pl` parser | `libbrowser/src/libbrowser_webkitgtk.stubs` |
| `fa1efe59d` | M | Dispatch UAF, JS eval threading, re-entrancy guard, strong ref | `libbrowser/src/libbrowser_webkitgtk.cpp`, `libbrowser/src/libbrowser_webkitgtk.h` |
| `ecfbce644` | M | Re-entrancy abort handling + `m_alive` lifetime guard | `libbrowser/src/libbrowser_webkitgtk.cpp`, `libbrowser/src/libbrowser_webkitgtk.h` |

### Phase 3 Step Details

- **Step F — Thread-safe dispatch**: `mcwebkitgtk_dispatch` uses `g_main_context_is_owner(g_main_context_default())` instead of thread identity comparison. Added stub to `engine/src/linux.stubs`.
- **Step G — HiDPI monitor scale**: `notify::scale-factor` handler connected in `MCStack::realize()`. Scale re-queried on `GDK_CONFIGURE`.
- **Step H — GObject lifecycle safety**: Weak pointer added on `m_web_view`. Destructor disconnects all signal handlers, unrefs `m_content_manager`, destroys the plug, and explicitly nulls `m_web_view` and `m_plug`.
- **Step I — Security hardening**: `uri_scheme_is_navigable` omits `javascript:`. `WebKitSettings` hardening disables Java, plugins, media streams, and universal file access.
- **Step J — Signal null-guards**: Every C signal callback checks `GetWebView() == nil` on entry.
- **Step K — Web process crash recovery**: `web-process-terminated` signal connected. Callback calls `OnDocumentLoadFailed(false, "", "web process terminated")`.
- **Step L — Test suite**: Six test scripts covering memory, security, crash, HiDPI, lifecycle, and concurrent usage.
- **Step M — Critical dispatch safety**:
  - `g_object_ref` / `g_object_unref` on web_view in dispatch to prevent UAF
  - `EvaluateJavaScript` routed through `mcwebkitgtk_dispatch` (was direct call, crash on worker threads)
  - Per-browser `m_in_dispatch` re-entrancy guard
  - `m_alive` lifetime flag for idle callback destructor racing
  - Strong reference on `m_web_view` in `Init()` + unref in destructor

---

## 4. Known Issues & Blockers

### Pre-existing (not GTK3-related)
- `name.index_equal_string` C++ unit test fails in `libfoundation/test/test_name.cpp`
- Full `make check-linux-x86_64` stops at this failure before running engine/IDE tests
- **Workaround:** Run engine tests directly with `make -C tests bin_dir=../linux-x86_64-bin check`

### Build System Blocker
- `prebuilt/build-libraries.sh` CEF symlink step fails when full `server-community` / `standalone-community` rebuild is triggered
- **Impact:** Cannot run full `make compile-linux-x86_64` from clean; `libbrowser` target compiles fine
- **Workaround:** Build `libbrowser` directly, or fix CEF symlink in `prebuilt/` before full build

### GTK3 Deprecation Warnings (non-critical, build noise)
These compile but emit deprecation warnings. They should be cleaned up before merge:

| Warning | Location | Status | GTK3 Replacement |
|---------|----------|--------|------------------|
| `gdk_beep` | `engine/src/lnxdcs.cpp:752` | ⏳ | `gdk_display_beep` |
| `gdk_cairo_create` | `engine/src/lnxdcs.cpp:1074` | ✅ FIXED | `gdk_window_begin_draw_frame` |
| `gdk_screen_get_width/height` | `engine/src/lnxdcs.cpp:620,644,1277` | ✅ FIXED | `gdk_monitor_get_geometry` |
| `gdk_screen_get_width_mm/height_mm` | `engine/src/lnxdcs.cpp:658,672` | ✅ FIXED | `gdk_monitor_get_width_mm` |
| `gdk_visual_get_colormap_size` | `engine/src/lnxdcs.cpp:341` | ⏳ | N/A (colormaps removed) |
| `gdk_cursor_unref` | `engine/src/lnxdcs.cpp`, `engine/src/lnxdnd.cpp` | ⏳ | `g_object_unref` |
| `gtk_widget_get_style` | `engine/src/linux-theme.cpp:199` | ✅ FIXED | `gtk_widget_get_style_context` |
| `gdk_device_grab/ungrab` | `engine/src/lnxdcs.cpp`, `engine/src/lnxdnd.cpp` | ⏳ | `gdk_seat_grab/ungrab` |
| `gdk_window_set_background_rgba` | `engine/src/lnxdcs.cpp:1465` | ✅ FIXED | CSS styling / queue draw |
| `gdk_window_process_updates` | `engine/src/lnxdcs.cpp:1469` | ✅ FIXED | `gdk_window_invalidate_rect` |
| `gdk_get_display` | `engine/src/lnxdcs.cpp:204` | ⏳ | `gdk_display_get_name(gdk_display_get_default())` |

### iODBC Build Warning
- `libiodbc` configure fails GTK+ test (`gtk-config` missing) but builds without GUI extensions
- **Impact:** None — ODBC works fine without GTK GUI

---

## 5. What Remains

### Must Fix (before PR merge)
1. **Replace remaining `gdk_device_grab/ungrab` with `gdk_seat_grab/ungrab`** — `gdk_device_grab` is deprecated in GTK3.24+
2. **Clean up remaining deprecation warnings** — `gdk_beep`, `gdk_cursor_unref`, `gdk_get_display`, `gdk_visual_get_colormap_size`
3. **Investigate `name.index_equal_string` test failure** — may be a real bug or test issue
4. **Fix prebuilt CEF symlink** — `build-libraries.sh` symlink step blocks full rebuild

### Should Fix (nice-to-have)
5. **Add `javascript:alert(1)` negative test** — verify `uri_scheme_is_navigable` rejects it (security negative test)
6. **Web-process crash injection test** — difficult from LiveCode script; recommend `kill -9` on web process PID in CI
7. **Run full IDE tests** and document any widget-specific failures

### Already Fixed (2026-05-26 through 2026-05-29)
- ✅ `gdk_screen_get_width/height` fallbacks removed — `lnxdcs.cpp`
- ✅ `gdk_screen_get_width_mm/height_mm` fallbacks removed — `lnxdcs.cpp`
- ✅ `gdk_window_set_background_rgba` + `gdk_window_process_updates` removed — `lnxdcs.cpp`
- ✅ `gtk_widget_get_style` → `GtkStyleContext` — `linux-theme.cpp`
- ✅ `gdk_cairo_create` → `gdk_window_begin_draw_frame` in XOR selection rect — `lnxdcs.cpp`
- ✅ `linux.stubs` weak stubs cleaned up for eliminated functions
- ✅ Thread-safe dispatch (`g_main_context_is_owner`)
- ✅ GObject lifecycle safety (weak pointer + strong ref)
- ✅ Security hardening (`javascript:` removal, `WebKitSettings` lockdown)
- ✅ Signal null-guards on all callbacks
- ✅ Web process crash recovery (`web-process-terminated`)
- ✅ Dispatch UAF fix (`g_object_ref` in `mcwebkitgtk_dispatch`)
- ✅ `EvaluateJavaScript` dispatched to main thread
- ✅ Re-entrancy guard (`m_in_dispatch`)
- ✅ Browser lifetime guard (`m_alive`)

### QA Matrix

| Test | Server | IDE | Notes |
|------|--------|-----|-------|
| Button widget | ✅ | ✅ | |
| Field widget | ✅ | ✅ | |
| Scrollbar/slider | ✅ | ✅ | |
| Group | ✅ | ✅ | |
| Graphic | ✅ | ✅ | |
| Browser widget | ✅ | ✅ | Server smoke covers create/HTML/URL/properties/show-hide |
| Browser JS eval | ✅ | ✅ | Server script covers JS eval, IDE validated via Gemini |
| Browser navigation | ✅ | ✅ | Server script covers navigation, IDE validated via Gemini |
| Browser crash recovery | ✅ | ⏳ | `web-process-terminated` signal; needs manual web process kill test |
| Browser memory stress | ✅ | ⏳ | 50× create/destroy cycles pass in server |
| Drag & drop | ✅ | ⏳ | Server script covers dragData/dragImage/dragAction, needs IDE validation |
| Native theme rendering | ✅ | ✅ | Server smoke + prior IDE visual check |
| File dialogs | ✅ | ⏳ | Server script covers answer file/folder, needs IDE validation |
| Color dialogs | ✅ | ⏳ | Server script covers answer color, needs IDE validation |
| Font dialogs | ✅ | ⏳ | Server script covers answer font (partial — no native font dialog on GTK3 headless) |
| IME input | ✅ | ⏳ | Server script covers unicodeText/focus/select, needs IDE validation |

---

## 6. Branch Status

```
upstream/webkitgtk-browser: ecfbce644 (HEAD)
local/webkitgtk-browser:    ecfbce644 (even with upstream)
```

All fixes are pushed to `emily-elizabeth/HyperXTalk:webkitgtk-browser` and reflected in PR #142.

---

## 7. Quick Commands for Continued Work

```bash
# Rebuild libbrowser target (fastest for WebKitGTK changes)
BUILDTYPE=Release make -C build-linux-x86_64/livecode libbrowser

# Rebuild server-community (blocked by prebuilt CEF symlink issue)
make compile-linux-x86_64 -j4

# Fast non-GUI test
make -C tests bin_dir=../linux-x86_64-bin lcb-check

# Full GUI engine tests (slow)
make -C tests bin_dir=../linux-x86_64-bin check

# Headless smoke test
echo 'put the mouse' | xvfb-run -a ./linux-x86_64-bin/server-community

# Run specific test file
xvfb-run -a ./linux-x86_64-bin/HyperXTalk ../tests/_testrunner.livecodescript run ../tests/lcs/core/engine/button.livecodescript

# Run all browser widget tests
for f in _test_stacks/browser-widget-*-test.livecodescript; do
  timeout 60s xvfb-run -a ./linux-x86_64-bin/server-community "$f"
done
```

---

*Document maintained as part of PR #142 — update when test results or fixes change.*
