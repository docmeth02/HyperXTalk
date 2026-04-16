/* config.h — pre-configured for macOS ARM64 (Apple Silicon).
 * Generated from config.h.cmake.in in libxml2 2.15.3.
 * Do not run cmake or autoconf on top of this file.
 */

/* Define to 1 if you have the declaration of 'getentropy' */
#define HAVE_DECL_GETENTROPY 1

/* Define to 1 if you have the declaration of 'glob' */
#define HAVE_DECL_GLOB 1

/* Define to 1 if you have the declaration of 'mmap' */
#define HAVE_DECL_MMAP 1

/* Define if __attribute__((destructor)) is accepted */
#define HAVE_FUNC_ATTRIBUTE_DESTRUCTOR 1

/* Have dlopen based dso */
#define HAVE_DLOPEN 1

/* Define if history library is there (-lhistory) */
/* #undef HAVE_LIBHISTORY */

/* Define if readline library is there (-lreadline) */
/* #undef HAVE_LIBREADLINE */

/* Have shl_load based dso */
/* #undef HAVE_SHLLOAD */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* System configuration directory (/etc) */
#define XML_SYSCONFDIR "/etc"

/* TLS specifier — _Thread_local is supported by clang on Apple platforms */
#define XML_THREAD_LOCAL _Thread_local
