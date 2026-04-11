/*
 * libcurl_stub.c
 * Stub implementation of libcurl for Windows MSVC builds.
 * Provides link-time symbols so server-community.exe can be built and used as
 * a build tool (e.g. descriptify_stack). The HTTP code paths are not exercised
 * during the build-time script processing, so empty stubs are sufficient.
 */

#define CURL_STATICLIB
#include <stdarg.h>
#include "../../../../thirdparty/libcurl/include/curl/curl.h"

CURL *curl_easy_init(void)
{
    return (CURL *)0;
}

void curl_easy_cleanup(CURL *curl)
{
    (void)curl;
}

CURLcode curl_easy_setopt(CURL *curl, CURLoption option, ...)
{
    (void)curl;
    (void)option;
    return CURLE_OK;
}

CURLcode curl_easy_perform(CURL *curl)
{
    (void)curl;
    return CURLE_UNSUPPORTED_PROTOCOL;
}

CURLcode curl_easy_getinfo(CURL *curl, CURLINFO info, ...)
{
    (void)curl;
    (void)info;
    return CURLE_OK;
}

struct curl_slist *curl_slist_append(struct curl_slist *list, const char *string)
{
    (void)list;
    (void)string;
    return (struct curl_slist *)0;
}

void curl_slist_free_all(struct curl_slist *list)
{
    (void)list;
}
