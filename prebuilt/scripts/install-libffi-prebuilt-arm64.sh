#!/bin/sh
# GYP postbuild for the libffi Xcode target.
# Runs after Xcode compiles and archives libffi from source.
# Replaces the source-built libffi.a with the prebuilt arm64 version so that
# the correct ffi_call / ffi_prep_cif_machdep symbols are available to
# dependent targets (lc-bootstrap-compile, libScript, libFoundation, etc).
#
# SRCROOT and BUILT_PRODUCTS_DIR are set by Xcode in the build environment.

set -e

# Only substitute on arm64 hosts
[ "$(uname -m)" = "arm64" ] || exit 0

# Primary path: SRCROOT is thirdparty/libffi (the .gyp source directory),
# so repo root is two directories up.
PREBUILT="${SRCROOT}/../../prebuilt/lib/mac/libffi.a"

# Fallback: walk up from SRCROOT looking for the repo landmark
if [ ! -f "${PREBUILT}" ]; then
    d="${SRCROOT}"
    while [ "${d}" != "/" ] && [ ! -f "${d}/Makefile.mac" ]; do
        d="$(dirname "${d}")"
    done
    PREBUILT="${d}/prebuilt/lib/mac/libffi.a"
fi

if [ ! -f "${PREBUILT}" ]; then
    echo "warning: libffi postbuild: prebuilt arm64 libffi.a not found — using source-built version"
    exit 0
fi

cp "${PREBUILT}" "${BUILT_PRODUCTS_DIR}/libffi.a"
echo "note: libffi postbuild: installed arm64 prebuilt libffi.a (${PREBUILT})"
