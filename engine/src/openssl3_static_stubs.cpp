/* openssl3_static_stubs.cpp
 *
 * No-op implementations of the dynamic-loader stubs for OpenSSL.
 *
 * The original LiveCode architecture used libopenssl_stubs.lib to dlopen
 * revsecurity.dll at runtime and resolve OpenSSL symbols lazily.
 * When building with OpenSSL 3 statically linked, all symbols are resolved
 * at link time.  These stubs satisfy the references in mcssl.cpp without
 * performing any dynamic loading.
 */

extern "C" int initialise_weak_link_crypto(void) { return 1; }
extern "C" int initialise_weak_link_ssl(void)    { return 1; }
extern "C" void finalise_weak_link_crypto(void)  {}
extern "C" void finalise_weak_link_ssl(void)     {}
