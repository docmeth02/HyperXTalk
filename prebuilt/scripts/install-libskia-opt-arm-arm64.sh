#!/bin/sh
# GYP postbuild for the libskia_opt_arm Xcode target.
# Replaces the source-compiled archive (which may lack NEON objects because
# the target_conditions arch check failed at GYP time) with the prebuilt
# arm64 version built by build-libskia-opt-arm-mac-arm64.sh.
#
# SRCROOT and BUILT_PRODUCTS_DIR are set by Xcode in the build environment.

set -e

[ "$(uname -m)" = "arm64" ] || exit 0

# SRCROOT is thirdparty/libskia; repo root is two directories up.
PREBUILT="${SRCROOT}/../../prebuilt/lib/mac/libskia_opt_arm.a"

# Fallback: walk up from SRCROOT looking for the repo landmark
if [ ! -f "${PREBUILT}" ]; then
    d="${SRCROOT}"
    while [ "${d}" != "/" ] && [ ! -f "${d}/Makefile.mac" ]; do
        d="$(dirname "${d}")"
    done
    PREBUILT="${d}/prebuilt/lib/mac/libskia_opt_arm.a"
fi

if [ ! -f "${PREBUILT}" ]; then
    echo "warning: libskia_opt_arm postbuild: prebuilt not found — NEON symbols will be missing"
    exit 0
fi

cp "${PREBUILT}" "${BUILT_PRODUCTS_DIR}/libskia_opt_arm.a"
echo "note: libskia_opt_arm postbuild: installed arm64 prebuilt (${PREBUILT})"
