#!/bin/bash
# Build libz (zlib) as a universal library for macOS (x86_64 + arm64)
set -e

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
SRC="${REPO_ROOT}/thirdparty/libz/src"
INC="${REPO_ROOT}/thirdparty/libz/include"
OUT_LIB="${REPO_ROOT}/prebuilt/lib/mac/libz.a"
BUILD_OUT="${REPO_ROOT}/_build/mac/Debug/libz.a"

SDK_PATH="$(xcrun --sdk macosx --show-sdk-path)"
CLANG="$(xcrun -find clang)"

INCLUDES="-I${SRC} -I${INC}"

SOURCES="adler32.c compress.c crc32.c deflate.c gzclose.c gzlib.c gzread.c gzwrite.c \
         infback.c inffast.c inflate.c inftrees.c trees.c uncompr.c zutil.c"

build_for_arch() {
    local ARCH="$1"
    local BUILD_DIR="/tmp/libz_${ARCH}_build"
    local CFLAGS="-arch ${ARCH} -mmacosx-version-min=11.0 -isysroot ${SDK_PATH} -O2 -include unistd.h"

    echo "Building libz for ${ARCH}..."
    rm -rf "${BUILD_DIR}"
    mkdir -p "${BUILD_DIR}"
    cd "${BUILD_DIR}"

    for F in $SOURCES; do
        echo "  Compiling $F (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} -c "${SRC}/${F}" -o "${F%.c}.o"
    done

    local ARCH_LIB="${BUILD_DIR}/libz_${ARCH}.a"
    ar rcs "${ARCH_LIB}" *.o
    echo "  Archived: ${ARCH_LIB}"
}

build_for_arch x86_64
build_for_arch arm64

echo "Creating universal libz.a..."
rm -f "${OUT_LIB}"
lipo -create /tmp/libz_x86_64_build/libz_x86_64.a /tmp/libz_arm64_build/libz_arm64.a \
    -o "${OUT_LIB}"

# Also copy to _build/mac/Debug/ if it exists
for CONFIG in Debug Release Fast; do
    BUILD_DIR="${REPO_ROOT}/_build/mac/${CONFIG}"
    if [ -d "${BUILD_DIR}" ]; then
        cp "${OUT_LIB}" "${BUILD_DIR}/libz.a" 2>/dev/null && \
            echo "  Copied to ${BUILD_DIR}/libz.a" || true
    fi
done

echo "Done: ${OUT_LIB}"
file "${OUT_LIB}"
