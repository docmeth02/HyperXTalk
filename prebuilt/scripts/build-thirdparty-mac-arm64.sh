#!/bin/bash
# Build the seven vendored thirdparty libraries that have working xcodeprojs
# (libskia libsqlite libxml libzip libcairo libxslt libiodbc) and copy their
# .a outputs from _build/mac/Debug/ into prebuilt/lib/mac/.
#
# Extracted from BUILD1.md steps 2 + 4 so `make prebuilt-mac` can call a
# single script instead of embedding the loop in the Makefile.
#
# Usage (from repo root):
#   sh prebuilt/scripts/build-thirdparty-mac-arm64.sh

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

BUILD_OUT="${REPO_ROOT}/_build/mac/Debug"
PREBUILT_LIB="${REPO_ROOT}/prebuilt/lib/mac"

mkdir -p "${PREBUILT_LIB}"

LIBS="libskia libsqlite libxml libzip libcairo libxslt libiodbc"

for LIB in ${LIBS}; do
    echo "=== Building ${LIB} ==="
    xcodebuild \
        -project "${REPO_ROOT}/build-mac/livecode/thirdparty/${LIB}/${LIB}.xcodeproj" \
        -configuration Debug \
        -arch arm64 \
        SOLUTION_DIR="${REPO_ROOT}" \
        2>&1 | grep -E "BUILD (SUCCEEDED|FAILED)|error:" || true
done

echo ""
echo "=== Copying outputs into prebuilt/lib/mac ==="
cp "${BUILD_OUT}/libcairo.a"  "${PREBUILT_LIB}/libcairo.a"
cp "${BUILD_OUT}/libxslt.a"   "${PREBUILT_LIB}/libxslt.a"
cp "${BUILD_OUT}/libiodbc.a"  "${PREBUILT_LIB}/libiodbc.a"
cp "${BUILD_OUT}/libxml.a"    "${PREBUILT_LIB}/libxml.a"
cp "${BUILD_OUT}/libzip.a"    "${PREBUILT_LIB}/libzip.a"
cp "${BUILD_OUT}/libsqlite.a" "${PREBUILT_LIB}/libsqlite.a"
for F in "${BUILD_OUT}"/libskia*.a; do
    cp "$F" "${PREBUILT_LIB}/$(basename "$F")"
done

# Rebuild libskia_opt_arm.a with real NEON + CRC32 objects.
# The GYP target_conditions arch check often fails to select NEON sources at
# config time, leaving the archive as a stub (opts_dummy.o only). This script
# compiles the correct sources directly and replaces the stub.
echo "=== Rebuilding libskia_opt_arm.a with NEON + CRC32 sources ==="
sh "${SCRIPT_DIR}/build-libskia-opt-arm-mac-arm64.sh"

echo ""
echo "=== Done. prebuilt/lib/mac now has: ==="
ls "${PREBUILT_LIB}/" | sort
