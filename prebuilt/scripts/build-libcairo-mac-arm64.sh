#!/bin/bash
# Build libcairo 1.18.4 as a universal static library for macOS (x86_64 + arm64).
#
# Prerequisites (install once):
#   brew install meson ninja pixman pkg-config
#
# Build order: this script must run AFTER build-libz-mac-arm64.sh and
# build-mac-extras.sh.  cairo is configured to link the repo's own zlib
# (prebuilt/lib/mac/libz.a) and libpng (prebuilt/lib/mac/libpng.a) rather
# than the macOS SDK / Homebrew copies — see Makefile.Mac.
#
# Usage (from repo root):
#   sh prebuilt/scripts/build-libcairo-mac-arm64.sh

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
CAIRO_SRC="${REPO_ROOT}/thirdparty/libcairo"
PREBUILT_LIB="${REPO_ROOT}/prebuilt/lib/mac"

echo "=== Checking prerequisites ==="
for tool in meson ninja pkg-config; do
    if ! command -v "$tool" >/dev/null 2>&1; then
        echo "ERROR: '$tool' not found. Run: brew install meson ninja pkg-config"
        exit 1
    fi
done
if ! brew --prefix pixman >/dev/null 2>&1; then
    echo "ERROR: pixman not found. Run: brew install pixman"
    exit 1
fi

PIXMAN_PKG="$(brew --prefix pixman)/lib/pkgconfig"
echo "Using pixman from: $(brew --prefix pixman)"

# ---------------------------------------------------------------------------
# Make cairo link the repo's own zlib + libpng instead of the macOS SDK /
# Homebrew copies.
# ---------------------------------------------------------------------------
LIBZ_A="${PREBUILT_LIB}/libz.a"
LIBPNG_A="${PREBUILT_LIB}/libpng.a"
for dep_a in "${LIBZ_A}" "${LIBPNG_A}"; do
    if [ ! -f "${dep_a}" ]; then
        echo "ERROR: required prebuilt library not found: ${dep_a}"
        echo "  build-libcairo-mac-arm64.sh must run AFTER build-libz-mac-arm64.sh"
        echo "  and build-mac-extras.sh.  Check the prebuilt-mac order in Makefile.Mac."
        exit 1
    fi
done

PKG_DIR="${REPO_ROOT}/_cache/mac/cairo-pkgconfig"
rm -rf "${PKG_DIR}"
mkdir -p "${PKG_DIR}"

LIBZ_VERSION="$(head -n1 "${REPO_ROOT}/prebuilt/versions/libz" | tr -d '[:space:]')"
LIBPNG_VERSION="$(head -n1 "${REPO_ROOT}/prebuilt/versions/libpng" | tr -d '[:space:]')"
echo "Pointing cairo at vendored zlib ${LIBZ_VERSION} + libpng ${LIBPNG_VERSION}"

cat > "${PKG_DIR}/zlib.pc" <<EOF
Name: zlib
Description: zlib (HyperXTalk vendored copy)
Version: ${LIBZ_VERSION}
Libs: -L${PREBUILT_LIB} -lz
Cflags: -I${REPO_ROOT}/thirdparty/libz/src -I${REPO_ROOT}/thirdparty/libz/include
EOF

cat > "${PKG_DIR}/libpng.pc" <<EOF
Name: libpng
Description: libpng (HyperXTalk vendored copy)
Version: ${LIBPNG_VERSION}
Requires.private: zlib
Libs: -L${PREBUILT_LIB} -lpng
Libs.private: -lm
Cflags: -I${REPO_ROOT}/thirdparty/libpng/include
EOF

build_for_arch() {
    local ARCH="$1"
    local BUILD_DIR="${REPO_ROOT}/_cache/mac/cairo-build-${ARCH}"
    local CFLAGS="-arch ${ARCH} -mmacosx-version-min=11.0 -O2"
    local LDFLAGS="-arch ${ARCH} -mmacosx-version-min=11.0"

    echo "=== Configuring cairo 1.18.4 for ${ARCH} ==="
    rm -rf "${BUILD_DIR}"
    mkdir -p "${BUILD_DIR}"

    CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}" \
    PKG_CONFIG_PATH="${PKG_DIR}:${PIXMAN_PKG}" \
    meson setup "${BUILD_DIR}" "${CAIRO_SRC}" \
        --buildtype=release \
        --default-library=static \
        --wrap-mode=nofallback \
        -Dquartz=enabled \
        -Dpng=enabled \
        -Dfontconfig=disabled \
        -Dfreetype=disabled \
        -Dglib=disabled \
        -Dxlib=disabled \
        -Dxcb=disabled \
        -Dtee=disabled \
        -Dlzo=disabled \
        -Dspectre=disabled \
        -Dsymbol-lookup=disabled \
        -Dtests=disabled \
        -Dgtk_doc=false

    echo "=== Building cairo for ${ARCH} ==="
    PKG_CONFIG_PATH="${PKG_DIR}:${PIXMAN_PKG}" ninja -C "${BUILD_DIR}"

    local LIBCAIRO=$(find "${BUILD_DIR}" -name "libcairo.a" | head -1)
    if [ -z "${LIBCAIRO}" ]; then
        echo "ERROR: libcairo.a not found in ${ARCH} build output"
        exit 1
    fi
    echo "${LIBCAIRO}"
}

# Build both architectures
ARM64_LIBCAIRO=$(build_for_arch arm64)
X86_64_LIBCAIRO=$(build_for_arch x86_64)

echo "=== Copying generated headers into thirdparty/libcairo/src ==="
cp "${REPO_ROOT}/_cache/mac/cairo-build-arm64/src/cairo-features.h" \
    "${CAIRO_SRC}/src/cairo-features.h"

echo "=== Installing universal libcairo.a into prebuilt/lib/mac ==="
mkdir -p "${PREBUILT_LIB}"

# Merge pixman into each arch's libcairo.a, then lipo them together
LIBPIXMAN="$(brew --prefix pixman)/lib/libpixman-1.a"
if [ ! -f "${LIBPIXMAN}" ]; then
    echo "ERROR: libpixman-1.a not found. Run: brew install pixman"
    exit 1
fi

for ARCH in arm64 x86_64; do
    BUILD_DIR="${REPO_ROOT}/_cache/mac/cairo-build-${ARCH}"
    LIBCAIRO=$(find "${BUILD_DIR}" -name "libcairo.a" | head -1)
    MERGE_DIR="${BUILD_DIR}/merge_tmp"
    rm -rf "${MERGE_DIR}"
    mkdir -p "${MERGE_DIR}/cairo" "${MERGE_DIR}/pixman"
    (cd "${MERGE_DIR}/cairo"  && ar -x "${LIBCAIRO}")
    (cd "${MERGE_DIR}/pixman" && ar -x "${LIBPIXMAN}")
    ar -rcs "${BUILD_DIR}/libcairo_merged_${ARCH}.a" \
        "${MERGE_DIR}/cairo"/*.o \
        "${MERGE_DIR}/pixman"/*.o
    rm -rf "${MERGE_DIR}"
done

rm -f "${PREBUILT_LIB}/libcairo.a"
lipo -create \
    "${REPO_ROOT}/_cache/mac/cairo-build-x86_64/libcairo_merged_x86_64.a" \
    "${REPO_ROOT}/_cache/mac/cairo-build-arm64/libcairo_merged_arm64.a" \
    -o "${PREBUILT_LIB}/libcairo.a"

echo "=== Done: prebuilt/lib/mac/libcairo.a updated to universal cairo 1.18.4 (with pixman merged) ==="
file "${PREBUILT_LIB}/libcairo.a"
