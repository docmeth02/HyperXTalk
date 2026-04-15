/*
 * revzip_newapi_shim.c
 *
 * Compatibility shim: provides libzip 1.x new API symbols by wrapping
 * the old API functions present in the pre-built libzip.lib.
 *
 * revzip.cpp is compiled against the new zip.h (2021) but links against
 * the pre-built libzip.lib which was built from the old API.
 */

#include <stdlib.h>
#include <string.h>

/* ------------------------------------------------------------------ */
/* Forward-declare old API types (matching pre-built libzip.lib)       */
/* ------------------------------------------------------------------ */

struct zip;           /* opaque */
struct zip_source;    /* opaque */

typedef int (*zip_old_progress_callback_t)(void *ctx, struct zip *za,
                                           const char *item, double progress);

/* old API declarations */
extern int            zip_add(struct zip *, const char *, struct zip_source *);
extern int            zip_rename(struct zip *, int, const char *);
extern int            zip_get_num_files(struct zip *);
extern int            zip_get_attributes(struct zip *, int, unsigned char *, unsigned int *);
extern int            zip_set_attributes(struct zip *, int, unsigned char, unsigned int);
extern int            zip_set_progress_callback(struct zip *, zip_old_progress_callback_t, void *);
extern int            zip_recompress(struct zip *, int, int);
extern int            zip_error_to_str(char *, size_t, int, int);

/* ------------------------------------------------------------------ */
/* New-API types (must match revzip/src/zip.h exactly)                 */
/* ------------------------------------------------------------------ */

typedef unsigned int   zip_flags_t;
typedef long long      zip_int64_t;
typedef int            zip_int32_t;
typedef unsigned int   zip_uint32_t;
typedef unsigned char  zip_uint8_t;
typedef void (*zip_progress_callback_t)(double);

/* zip_error_t layout from revzip/src/zip.h */
typedef struct {
    int   zip_err;
    int   sys_err;
    char *str;
} zip_error_t;

/* ------------------------------------------------------------------ */
/* New API implementations                                              */
/* ------------------------------------------------------------------ */

/* zip_file_add: new returns zip_int64_t (index), old returns int.
   Cast through (int) first so that int -1 is sign-extended to
   zip_int64_t -1 rather than zero-extended to +4294967295.           */
zip_int64_t zip_file_add(struct zip *za, const char *name,
                          struct zip_source *source, zip_flags_t flags)
{
    return (zip_int64_t)(int)zip_add(za, name, source);
}

/* zip_file_rename */
int zip_file_rename(struct zip *za, zip_int64_t index,
                    const char *name, zip_flags_t flags)
{
    return zip_rename(za, (int)index, name);
}

/* zip_get_num_entries */
zip_int64_t zip_get_num_entries(struct zip *za, zip_flags_t flags)
{
    return (zip_int64_t)zip_get_num_files(za);
}

/* zip_file_get_external_attributes */
int zip_file_get_external_attributes(struct zip *za, zip_int64_t index,
                                      zip_flags_t flags,
                                      zip_uint8_t *opsys,
                                      zip_uint32_t *attr)
{
    return zip_get_attributes(za, (int)index, opsys, attr);
}

/* zip_file_set_external_attributes */
int zip_file_set_external_attributes(struct zip *za, zip_int64_t index,
                                      zip_flags_t flags,
                                      zip_uint8_t opsys,
                                      zip_uint32_t attr)
{
    return zip_set_attributes(za, (int)index, opsys, attr);
}

/* zip_set_file_compression: map to zip_recompress (comp_flags ignored) */
int zip_set_file_compression(struct zip *za, zip_int64_t index,
                              zip_int32_t comp, zip_uint32_t comp_flags)
{
    return zip_recompress(za, (int)index, (int)comp);
}

/* zip_register_progress_callback: old API had different callback sig  */
void zip_register_progress_callback(struct zip *za,
                                    zip_progress_callback_t callback)
{
    /* Old callback takes (context, za, item, double); new takes (double).
       Pass NULL to disable – progress reporting is non-essential.       */
    zip_set_progress_callback(za, NULL, NULL);
}

/* zip_error_init_with_code: initialise a zip_error_t with an error code */
void zip_error_init_with_code(zip_error_t *err, int ze)
{
    err->zip_err = ze;
    err->sys_err = 0;
    err->str     = NULL;
}

/* zip_error_strerror: return human-readable string for a zip_error_t   */
const char *zip_error_strerror(zip_error_t *err)
{
    static char buf[256];
    zip_error_to_str(buf, sizeof(buf), err->zip_err, err->sys_err);
    return buf;
}
