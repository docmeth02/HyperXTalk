#!/bin/sh
# Build a static universal libffi.a for macOS (x86_64 + arm64) from the sources
# already in the repo and install it into prebuilt/lib/mac/libffi.a
#
# Run from any directory; the script resolves paths relative to itself.
# Usage:  sh prebuilt/scripts/build-libffi-mac-arm64.sh

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

LIBFFI_DARWIN_COMMON="${REPO_ROOT}/thirdparty/libffi/git_master/darwin_common"
LIBFFI_DARWIN_IOS="${REPO_ROOT}/thirdparty/libffi/git_master/darwin_ios"
LIBFFI_INCLUDE_DARWIN="${REPO_ROOT}/thirdparty/libffi/include_darwin"
OUT_DIR="${REPO_ROOT}/prebuilt/lib/mac"
OUT_LIB="${OUT_DIR}/libffi.a"

# Detect SDK path
SDK_PATH="$(xcrun --sdk macosx --show-sdk-path)"
CLANG="$(xcrun -find clang)"

build_for_arch() {
    local ARCH="$1"
    local WORK_DIR="$(mktemp -d /tmp/build-libffi-${ARCH}.XXXXXX)"
    trap 'rm -rf "${WORK_DIR}"' EXIT

    local ARCH_SRC="${REPO_ROOT}/thirdparty/libffi/git_master/src"
    local CFLAGS="-arch ${ARCH} -mmacosx-version-min=11.0 -isysroot ${SDK_PATH} -O2 -fPIC"
    local INCLUDES="-I${LIBFFI_INCLUDE_DARWIN} -I${LIBFFI_DARWIN_IOS}/include -I${LIBFFI_DARWIN_COMMON}/include"
    local OBJECTS=""

    echo "Building ${ARCH} libffi for macOS..."

    # ── Compile common C sources ─────────────────────────────────────────
    for SRC in \
        "${LIBFFI_DARWIN_COMMON}/src/prep_cif.c" \
        "${LIBFFI_DARWIN_COMMON}/src/types.c" \
        "${LIBFFI_DARWIN_COMMON}/src/raw_api.c" \
        "${LIBFFI_DARWIN_COMMON}/src/java_raw_api.c" \
        "${LIBFFI_DARWIN_COMMON}/src/closures.c" \
        "${LIBFFI_DARWIN_COMMON}/src/debug.c"
    do
        BASE="$(basename "${SRC}" .c)"
        OBJ="${WORK_DIR}/${BASE}.o"
        echo "  CC  ${BASE}.c (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} -c "${SRC}" -o "${OBJ}"
        OBJECTS="${OBJECTS} ${OBJ}"
    done

    if [ "${ARCH}" = "arm64" ]; then
        # ── Compile arm64-specific C source ───────────────────────────────
        SRC="${LIBFFI_DARWIN_IOS}/src/aarch64/ffi_arm64.c"
        OBJ="${WORK_DIR}/ffi_arm64.o"
        echo "  CC  ffi_arm64.c (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} \
            -I${ARCH_SRC}/aarch64 \
            -DFFI_TRAMPOLINE_CLOSURE_OFFSET=40 \
            -c "${SRC}" -o "${OBJ}"
        OBJECTS="${OBJECTS} ${OBJ}"

        # ── Assemble arm64 trampoline ───────────────────────────────────
        ASM="${LIBFFI_DARWIN_IOS}/src/aarch64/sysv_arm64.S"
        ASM_PP="${WORK_DIR}/sysv_arm64.s"
        OBJ="${WORK_DIR}/sysv_arm64.o"
        echo "  CPP sysv_arm64.S (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} -E -x assembler-with-cpp "${ASM}" -o "${ASM_PP}"
        sed -i '' '/^[[:space:]]*\.cfi_/d' "${ASM_PP}"
        echo "  AS  sysv_arm64.s (${ARCH})"
        ${CLANG} -arch ${ARCH} -mmacosx-version-min=11.0 -isysroot "${SDK_PATH}" \
                 -x assembler -c "${ASM_PP}" -o "${OBJ}"
        OBJECTS="${OBJECTS} ${OBJ}"
    elif [ "${ARCH}" = "x86_64" ]; then
        # ── Compile x86_64-specific C source ──────────────────────────────
        SRC="${LIBFFI_DARWIN_IOS}/src/x86/ffi64_x86_64.c"
        OBJ="${WORK_DIR}/ffi64_x86_64.o"
        echo "  CC  ffi64_x86_64.c (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} -I${ARCH_SRC}/x86 -c "${SRC}" -o "${OBJ}"
        OBJECTS="${OBJECTS} ${OBJ}"

        # ── Assemble x86_64 trampoline ────────────────────────────────────
        ASM="${LIBFFI_DARWIN_IOS}/src/x86/unix64_x86_64.S"
        ASM_PP="${WORK_DIR}/unix64_x86_64.s"
        OBJ="${WORK_DIR}/unix64_x86_64.o"
        echo "  CPP unix64_x86_64.S (${ARCH})"
        ${CLANG} ${CFLAGS} ${INCLUDES} -E -x assembler-with-cpp "${ASM}" -o "${ASM_PP}"
        sed -i '' '/^[[:space:]]*\.cfi_/d' "${ASM_PP}"
        echo "  AS  unix64_x86_64.s (${ARCH})"
        ${CLANG} -arch ${ARCH} -mmacosx-version-min=11.0 -isysroot "${SDK_PATH}" \
                 -x assembler -c "${ASM_PP}" -o "${OBJ}"
        OBJECTS="${OBJECTS} ${OBJ}"
    fi

    # ── Archive ───────────────────────────────────────────────────────────
    local ARCH_LIB="${WORK_DIR}/libffi_${ARCH}.a"
    echo "  AR  libffi_${ARCH}.a"
    ar rcs "${ARCH_LIB}" ${OBJECTS}
    echo "${ARCH_LIB}"
}

ARM64_LIB=$(build_for_arch arm64)
X86_64_LIB=$(build_for_arch x86_64)

mkdir -p "${OUT_DIR}"
rm -f "${OUT_LIB}"
echo ""
echo "Creating universal libffi.a..."
lipo -create "${X86_64_LIB}" "${ARM64_LIB}" -o "${OUT_LIB}"

echo ""
echo "Done — installed universal libffi.a:"
file "${OUT_LIB}"
echo "Symbols:"
nm -g "${OUT_LIB}" | grep " T _ffi_" | head -10

# ── Copy to _build/mac/Debug/ and _build/mac/Release/ ────────────────────────
for BUILD_CONF in Debug Release; do
    BUILD_CONF_DIR="${REPO_ROOT}/_build/mac/${BUILD_CONF}"
    mkdir -p "${BUILD_CONF_DIR}"
    cp "${OUT_LIB}" "${BUILD_CONF_DIR}/libffi.a"
    echo "  CP  -> _build/mac/${BUILD_CONF}/libffi.a"
done
