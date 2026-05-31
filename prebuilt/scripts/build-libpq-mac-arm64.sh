#!/bin/bash
# Install PostgreSQL C client library (libpq) from Homebrew into the repo.
# Builds a universal libpq.a if both x86_64 and arm64 Homebrew libraries are available.
#
# Requires: brew install libpq
#
# Usage (from repo root):
#   sh prebuilt/scripts/build-libpq-mac-arm64.sh

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

OUT_LIB="${REPO_ROOT}/prebuilt/lib/mac/libpq.a"
THIRDPARTY_PQ="${REPO_ROOT}/thirdparty/libpq"

echo "=== PostgreSQL C client library (libpq) — Homebrew install ==="
echo ""

# ── Locate the brew libpq prefix ──────────────────────────────────────────────
# Try formulae in preference order: latest, then versioned LTS releases.
PQ_PREFIX=""
PQ_FORMULA=""
for formula in libpq libpq@17 libpq@16; do
    PREFIX="$(brew --prefix "${formula}" 2>/dev/null)" || continue
    if [ -f "${PREFIX}/lib/libpq.a" ]; then
        PQ_PREFIX="${PREFIX}"
        PQ_FORMULA="${formula}"
        break
    fi
done

if [ -z "${PQ_PREFIX}" ]; then
    echo "ERROR: PostgreSQL client library not found via Homebrew."
    echo ""
    echo "Install with:"
    echo "  brew install libpq       # latest (recommended)"
    echo "  brew install libpq@17    # PostgreSQL 17 LTS"
    exit 1
fi

# ── Show what we found ────────────────────────────────────────────────────────
PQ_VER="$(cat "${PQ_PREFIX}/include/libpq-fe.h" 2>/dev/null | \
    grep 'PG_VERSION' | head -1 | sed 's/.*"\(.*\)".*/\1/' || echo "unknown")"
if [ "${PQ_VER}" = "unknown" ]; then
    PQ_VER="$("${PQ_PREFIX}/bin/pg_config" --version 2>/dev/null | sed 's/PostgreSQL //' || echo "unknown")"
fi

echo "  Formula : ${PQ_FORMULA}"
echo "  Prefix  : ${PQ_PREFIX}"
echo "  Version : PostgreSQL ${PQ_VER}"
echo ""

# ── Check for universal build possibility ──────────────────────────────────────
# On Apple Silicon, /usr/local is the Intel (x86_64) Homebrew prefix.
X86_64_PREFIX=""
if [ -d "/usr/local" ] && [ -f "/usr/local/lib/libpq.a" ]; then
    X86_64_PREFIX="/usr/local"
fi

# Also check for x86_64 in versioned prefixes
for prefix in /usr/local/opt/libpq /usr/local/opt/libpq@17 /usr/local/opt/libpq@16; do
    if [ -f "${prefix}/lib/libpq.a" ]; then
        X86_64_PREFIX="${prefix}"
        break
    fi
done

# ── Build universal or single-arch library ───────────────────────────────────
mkdir -p "$(dirname "${OUT_LIB}")"
rm -f "${OUT_LIB}"

if [ -n "${X86_64_PREFIX}" ] && [ "${PQ_PREFIX}" != "${X86_64_PREFIX}" ]; then
    echo "Creating universal libpq.a from:"
    echo "  x86_64: ${X86_64_PREFIX}/lib/libpq.a"
    echo "  arm64:  ${PQ_PREFIX}/lib/libpq.a"
    lipo -create "${X86_64_PREFIX}/lib/libpq.a" "${PQ_PREFIX}/lib/libpq.a" \
        -o "${OUT_LIB}"
    echo "  Universal: ${OUT_LIB}"
else
    echo "--- Installing prebuilt/lib/mac/libpq.a ---"
    cp "${PQ_PREFIX}/lib/libpq.a" "${OUT_LIB}"
    ARCH_INFO="$(file "${OUT_LIB}" 2>/dev/null | grep -o 'arm64\|x86_64\|universal' | head -1 || echo 'unknown')"
    echo "  Architecture : ${ARCH_INFO}"
    if [ "${ARCH_INFO}" = "x86_64" ]; then
        echo ""
        echo "WARNING: Library is x86_64 only."
        echo "For universal binaries, install libpq via both Intel and ARM Homebrew."
    fi
fi

SIZE_KB="$(du -k "${OUT_LIB}" | cut -f1)"
echo "  Size    : ${SIZE_KB} KB"

if nm "${OUT_LIB}" 2>/dev/null | grep -q " T _PQconnectdb"; then
    echo "  Symbols : PQconnectdb OK"
else
    echo "  Symbols : (could not verify)"
fi

# ── Update thirdparty/libpq/include ───────────────────────────────────────────
echo ""
echo "--- Updating thirdparty/libpq/include ---"

INCLUDE_DST="${THIRDPARTY_PQ}/include"
mkdir -p "${INCLUDE_DST}"

INCLUDE_SRC="${PQ_PREFIX}/include"
if [ ! -f "${INCLUDE_SRC}/libpq-fe.h" ]; then
    echo "ERROR: Could not find libpq-fe.h under ${INCLUDE_SRC}/"
    exit 1
fi

cp "${INCLUDE_SRC}"/*.h "${INCLUDE_DST}/" 2>/dev/null || true
UPDATED=$(ls "${INCLUDE_SRC}"/*.h 2>/dev/null | wc -l | tr -d ' ')
echo "  Copied ${UPDATED} header(s)"

# ── Update ORIGIN ─────────────────────────────────────────────────────────────
cat > "${THIRDPARTY_PQ}/ORIGIN" <<EOF
Files in this folder use the PostgreSQL C client library (libpq) from Homebrew.

  Formula : ${PQ_FORMULA}
  Version : PostgreSQL ${PQ_VER}
  Prefix  : ${PQ_PREFIX}

To rebuild prebuilt/lib/mac/libpq.a:
  brew install libpq
  sh prebuilt/scripts/build-libpq-mac-arm64.sh
EOF
echo ""
echo "--- Updated ORIGIN ---"

# ── Propagate to _build/ directories if present ───────────────────────────────
for CONFIG in Debug Release Fast; do
    BUILD_DIR="${REPO_ROOT}/_build/mac/${CONFIG}"
    if [ -d "${BUILD_DIR}" ]; then
        cp "${OUT_LIB}" "${BUILD_DIR}/libpq.a" 2>/dev/null && \
            echo "  Propagated to _build/mac/${CONFIG}/libpq.a" || true
    fi
done

echo ""
echo "=== Done ==="
echo ""
echo "libpq.a is now PostgreSQL ${PQ_VER} (static, from Homebrew)."
echo "Next: run ./rebuild-dbpostgresql.sh to recompile dbpostgresql.bundle."
