#!/bin/bash
# Build ICU 58.2 as a universal library for macOS (x86_64 + arm64).
#
# Produces in one step:
#   - prebuilt/bin/mac/icupkg           (host tool used by minimal_icu_data)
#   - prebuilt/lib/mac/libicudata.a     (universal)
#   - prebuilt/lib/mac/libicui18n.a     (universal)
#   - prebuilt/lib/mac/libicuio.a       (universal)
#   - prebuilt/lib/mac/libicutu.a       (universal)
#   - prebuilt/lib/mac/libicuuc.a       (universal)
#
# Version is pinned to 58.2 deliberately — see prebuilt/versions/icu for the
# attempted-bump history (65.1 coredumps during lc-compile grammar generation).

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
ICU_VERSION="58.2"
ICU_VERSION_ALT="58_2"
ICU_VERSION_DASH="${ICU_VERSION_ALT//_/-}"

DOWNLOAD_URL="https://github.com/unicode-org/icu/releases/download/release-${ICU_VERSION_DASH}/icu4c-${ICU_VERSION_ALT}-src.tgz"
TARBALL_SHA256="2b0a4410153a9b20de0e20c7d8b66049a72aef244b53683d0d7521371683da0c"

BUILD_BASE="${REPO_ROOT}/prebuilt/build/icu-58-mac-universal"
ICU_TGZ="${BUILD_BASE}/icu4c-${ICU_VERSION_ALT}-src.tgz"
ICU_SRC="${BUILD_BASE}/icu"

PREBUILT_BIN="${REPO_ROOT}/prebuilt/bin/mac"
PREBUILT_LIB="${REPO_ROOT}/prebuilt/lib/mac"

SDK="$(xcrun --sdk macosx --show-sdk-path)"
MACOS_MIN="11.0"

ICU_CONFIGURE_FLAGS=(
    "--disable-shared"
    "--enable-static"
    "--with-data-packaging=archive"
    "--disable-samples"
    "--disable-tests"
)

export CC="$(xcrun -find clang)"
export CXX="$(xcrun -find clang++)"

build_for_arch() {
    local ARCH="$1"
    local ICU_BUILD="${BUILD_BASE}/icu_build_${ARCH}"
    local ICU_INSTALL="${BUILD_BASE}/icu_install_${ARCH}"
    local CFLAGS="-arch ${ARCH} -mmacosx-version-min=${MACOS_MIN} -isysroot ${SDK}"
    local CXXFLAGS="${CFLAGS} -std=c++11 -stdlib=libc++"
    local LDFLAGS="-arch ${ARCH} -mmacosx-version-min=${MACOS_MIN} -isysroot ${SDK}"

    echo "=== Building ICU ${ICU_VERSION} for ${ARCH} ==="

    rm -rf "${ICU_BUILD}" "${ICU_INSTALL}"
    mkdir -p "${ICU_BUILD}"

    export CFLAGS="${CFLAGS}"
    export CXXFLAGS="${CXXFLAGS}"
    export LDFLAGS="${LDFLAGS}"

    echo "Configuring ICU (${ARCH})..."
    (cd "${ICU_BUILD}" && "${ICU_SRC}/source/runConfigureICU" MacOSX \
        "${ICU_CONFIGURE_FLAGS[@]}" "--prefix=${ICU_INSTALL}")

    echo "Building ICU (${ARCH})..."
    make -C "${ICU_BUILD}" -j"$(sysctl -n hw.logicalcpu)" 2>&1 | tail -5

    echo "Installing ICU (${ARCH})..."
    make -C "${ICU_BUILD}" install 2>&1 | tail -5

    echo "${ICU_INSTALL}"
}

# ── 1. Fetch + verify source ──────────────────────────────────────────────────
mkdir -p "${BUILD_BASE}"

if [ ! -f "${ICU_TGZ}" ]; then
    echo "Downloading ICU ${ICU_VERSION} source..."
    curl -fL -o "${ICU_TGZ}.partial" "${DOWNLOAD_URL}"
    mv "${ICU_TGZ}.partial" "${ICU_TGZ}"
fi

echo "Verifying SHA256..."
ACTUAL_SHA="$(shasum -a 256 "${ICU_TGZ}" | awk '{print $1}')"
if [ "${ACTUAL_SHA}" != "${TARBALL_SHA256}" ]; then
    echo "ERROR: SHA256 mismatch for ${ICU_TGZ}"
    rm -f "${ICU_TGZ}"
    exit 1
fi

echo "Unpacking..."
rm -rf "${ICU_SRC}"
tar -xf "${ICU_TGZ}" -C "${BUILD_BASE}"

# ── 2. Build for both architectures ────────────────────────────────────────────
ARM64_INSTALL=$(build_for_arch arm64)
X86_64_INSTALL=$(build_for_arch x86_64)

# ── 3. Place icupkg (host arm64 tool) ──────────────────────────────────────────
BUILT_ICUPKG=""
for candidate in "${ARM64_INSTALL}/bin/icupkg" "${ARM64_INSTALL}/sbin/icupkg"; do
    if [ -f "${candidate}" ]; then
        BUILT_ICUPKG="${candidate}"
        break
    fi
done

if [ -z "${BUILT_ICUPKG}" ]; then
    echo "ERROR: icupkg not found"
    exit 1
fi

mkdir -p "${PREBUILT_BIN}"
rm -f "${PREBUILT_BIN}/icupkg"
cp "${BUILT_ICUPKG}" "${PREBUILT_BIN}/icupkg"
chmod +x "${PREBUILT_BIN}/icupkg"
codesign --force --sign - "${PREBUILT_BIN}/icupkg"

# ── 4. Create universal static libraries ─────────────────────────────────────
mkdir -p "${PREBUILT_LIB}"
for f in libicudata.a libicui18n.a libicuio.a libicutu.a libicuuc.a; do
    if [ ! -f "${X86_64_INSTALL}/lib/${f}" ] || [ ! -f "${ARM64_INSTALL}/lib/${f}" ]; then
        echo "ERROR: ${f} missing after make install"
        exit 1
    fi
    rm -f "${PREBUILT_LIB}/${f}"
    lipo -create "${X86_64_INSTALL}/lib/${f}" "${ARM64_INSTALL}/lib/${f}" \
        -o "${PREBUILT_LIB}/${f}"
    echo "  Universal: ${PREBUILT_LIB}/${f}"
done

# ── 4b. Place icudt58l.dat ────────────────────────────────────────────────────
ICU_DAT="${ARM64_INSTALL}/share/icu/${ICU_VERSION}/icudt${ICU_VERSION_ALT%_*}l.dat"
if [ ! -f "${ICU_DAT}" ]; then
    ICU_DAT="$(find "${ARM64_INSTALL}/share" -name "icudt*.dat" | head -1)"
fi
if [ -z "${ICU_DAT}" ] || [ ! -f "${ICU_DAT}" ]; then
    echo "ERROR: icudt58l.dat not found"
    exit 1
fi
mkdir -p "${REPO_ROOT}/prebuilt/share"
cp "${ICU_DAT}" "${REPO_ROOT}/prebuilt/share/icudt58l.dat"
echo "Installed ICU data: prebuilt/share/icudt58l.dat"

# ── 5. Summary ────────────────────────────────────────────────────────────────
echo ""
echo "=== Done. Installed universal artifacts: ==="
ls -la "${PREBUILT_BIN}/icupkg"
for f in libicudata.a libicui18n.a libicuio.a libicutu.a libicuuc.a; do
    ls -la "${PREBUILT_LIB}/${f}"
    file "${PREBUILT_LIB}/${f}"
done
echo ""
echo "Verify with:"
echo "  ${PREBUILT_BIN}/icupkg --help"
