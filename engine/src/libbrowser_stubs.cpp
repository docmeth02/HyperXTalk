/* libbrowser_stubs.cpp
 *
 * Null/stub implementations of the MCBrowser C API for Windows builds
 * where CEF (libbrowser.dll) is not present at link time.
 *
 * The browser widget is loaded at runtime via libbrowser.dll when available.
 * These stubs satisfy the linker for standalone.exe / standalone-community.exe
 * builds where the CEF source tree is unavailable on Windows.
 *
 * All stub functions return false / nullptr / do nothing.
 */

#include <stdint.h>
#include <stddef.h>

// Forward-declare the opaque types used in the C API signatures.
// We don't need the full libbrowser.h header -- just enough to define the symbols.

typedef class MCBrowserList   *MCBrowserListRef;
typedef class MCBrowserDictionary *MCBrowserDictionaryRef;
typedef class MCBrowserNavigationRequest *MCBrowserNavigationRequestRef;
typedef class MCBrowser       *MCBrowserRef;
typedef class MCBrowserFactory *MCBrowserFactoryRef;

typedef bool (*MCBrowserWaitFunction)(void);
typedef void (*MCBrowserBreakWaitFunction)(void);
typedef void (*MCBrowserRunloopCallback)(void *p_context);

enum MCBrowserProperty { _MCBrowserProperty_unused = 0 };
enum MCBrowserNavigationType { _MCBrowserNavigationType_unused = 0 };
enum MCBrowserValueType { kMCBrowserValueTypeNone = 0 };

typedef bool (*MCBrowserNavigationRequestCallback)(void *p_context, MCBrowserRef p_browser, MCBrowserNavigationRequestRef p_request);
typedef void (*MCBrowserNavigationCallback)(void *p_context, MCBrowserRef p_browser, int p_type, int p_state, bool p_in_frame, const char *p_url, const char *p_error);
typedef void (*MCBrowserJavaScriptCallback)(void *p_context, MCBrowserRef p_browser, const char *p_handler, MCBrowserListRef p_params);
typedef void (*MCBrowserProgressCallback)(void *p_context, MCBrowserRef p_browser, const char *p_url, uint32_t p_progress);

extern "C" {

// Library lifecycle
bool MCBrowserLibraryInitialize()                               { return false; }
void MCBrowserLibraryFinalize()                                 {}
void MCBrowserLibrarySetWaitFunction(MCBrowserWaitFunction)     {}
void MCBrowserLibrarySetBreakWaitFunction(MCBrowserBreakWaitFunction) {}
bool MCBrowserLibraryGetRunloopCallback(MCBrowserRunloopCallback &r_cb, void *&r_ctx)
    { r_cb = nullptr; r_ctx = nullptr; return false; }

// Factory
bool MCBrowserFactoryGet(const char *, MCBrowserFactoryRef &r_f) { r_f = nullptr; return false; }
bool MCBrowserFactoryCreateBrowser(MCBrowserFactoryRef, void *, void *, MCBrowserRef &r_b) { r_b = nullptr; return false; }

// Browser ref-counting
MCBrowserRef MCBrowserRetain(MCBrowserRef p)   { return p; }
void         MCBrowserRelease(MCBrowserRef)    {}

// Browser properties / actions
void *MCBrowserGetNativeLayer(MCBrowserRef)    { return nullptr; }
bool MCBrowserGetBoolProperty(MCBrowserRef, MCBrowserProperty, bool &r)    { r = false; return false; }
bool MCBrowserSetBoolProperty(MCBrowserRef, MCBrowserProperty, bool)       { return false; }
bool MCBrowserGetStringProperty(MCBrowserRef, MCBrowserProperty, char *&r) { r = nullptr; return false; }
bool MCBrowserSetStringProperty(MCBrowserRef, MCBrowserProperty, const char *) { return false; }
bool MCBrowserGetIntegerProperty(MCBrowserRef, MCBrowserProperty, int32_t &r)  { r = 0; return false; }
bool MCBrowserSetIntegerProperty(MCBrowserRef, MCBrowserProperty, int32_t)     { return false; }
bool MCBrowserGoBack(MCBrowserRef)             { return false; }
bool MCBrowserGoForward(MCBrowserRef)          { return false; }
bool MCBrowserGoToURL(MCBrowserRef, const char *) { return false; }
bool MCBrowserLoadHTMLText(MCBrowserRef, const char *, const char *) { return false; }
bool MCBrowserStopLoading(MCBrowserRef)        { return false; }
bool MCBrowserReload(MCBrowserRef)             { return false; }
bool MCBrowserEvaluateJavaScript(MCBrowserRef, const char *, char *&r) { r = nullptr; return false; }
bool MCBrowserSetAppearance(MCBrowserRef, bool) { return false; }

// Navigation request
MCBrowserNavigationRequestRef MCBrowserNavigationRequestRetain(MCBrowserNavigationRequestRef p) { return p; }
void MCBrowserNavigationRequestRelease(MCBrowserNavigationRequestRef) {}
bool MCBrowserNavigationRequestGetURL(MCBrowserNavigationRequestRef, char *&r)             { r = nullptr; return false; }
bool MCBrowserNavigationRequestGetNavigationType(MCBrowserNavigationRequestRef, MCBrowserNavigationType &r) { r = _MCBrowserNavigationType_unused; return false; }
bool MCBrowserNavigationRequestIsFrame(MCBrowserNavigationRequestRef, bool &r)             { r = false; return false; }
bool MCBrowserNavigationRequestContinue(MCBrowserNavigationRequestRef)                     { return false; }
bool MCBrowserNavigationRequestCancel(MCBrowserNavigationRequestRef)                       { return false; }

// List accessors
bool MCBrowserListGetSize(MCBrowserListRef, uint32_t &r)        { r = 0; return false; }
bool MCBrowserListGetType(MCBrowserListRef, uint32_t, MCBrowserValueType &r) { r = kMCBrowserValueTypeNone; return false; }
bool MCBrowserListGetBoolean(MCBrowserListRef, uint32_t, bool &r)  { r = false; return false; }
bool MCBrowserListGetInteger(MCBrowserListRef, uint32_t, int32_t &r) { r = 0; return false; }
bool MCBrowserListGetDouble(MCBrowserListRef, uint32_t, double &r)  { r = 0.0; return false; }
bool MCBrowserListGetUTF8String(MCBrowserListRef, uint32_t, char *&r) { r = nullptr; return false; }
bool MCBrowserListGetList(MCBrowserListRef, uint32_t, MCBrowserListRef &r) { r = nullptr; return false; }
bool MCBrowserListGetDictionary(MCBrowserListRef, uint32_t, MCBrowserDictionaryRef &r) { r = nullptr; return false; }

// Dictionary accessors
bool MCBrowserDictionaryGetKeys(MCBrowserDictionaryRef, char **&r_keys, uint32_t &r_count) { r_keys = nullptr; r_count = 0; return false; }
bool MCBrowserDictionaryGetKeyCount(MCBrowserDictionaryRef, uint32_t &r)    { r = 0; return false; }
bool MCBrowserDictionaryGetKey(MCBrowserDictionaryRef, uint32_t, char *&r)  { r = nullptr; return false; }
bool MCBrowserDictionaryGetType(MCBrowserDictionaryRef, const char *, MCBrowserValueType &r) { r = kMCBrowserValueTypeNone; return false; }
bool MCBrowserDictionaryGetBoolean(MCBrowserDictionaryRef, const char *, bool &r)   { r = false; return false; }
bool MCBrowserDictionaryGetInteger(MCBrowserDictionaryRef, const char *, int32_t &r) { r = 0; return false; }
bool MCBrowserDictionaryGetDouble(MCBrowserDictionaryRef, const char *, double &r)  { r = 0.0; return false; }
bool MCBrowserDictionaryGetUTF8String(MCBrowserDictionaryRef, const char *, char *&r) { r = nullptr; return false; }
bool MCBrowserDictionaryGetList(MCBrowserDictionaryRef, const char *, MCBrowserListRef &r) { r = nullptr; return false; }
bool MCBrowserDictionaryGetDictionary(MCBrowserDictionaryRef, const char *, MCBrowserDictionaryRef &r) { r = nullptr; return false; }

// Event / handler setters
bool MCBrowserSetNavigationRequestHandler(MCBrowserRef, MCBrowserNavigationRequestCallback, void *) { return false; }
bool MCBrowserSetNavigationHandler(MCBrowserRef, MCBrowserNavigationCallback, void *)               { return false; }
bool MCBrowserSetJavaScriptHandler(MCBrowserRef, MCBrowserJavaScriptCallback, void *)               { return false; }
bool MCBrowserSetProgressHandler(MCBrowserRef, MCBrowserProgressCallback, void *)                   { return false; }

} // extern "C"
