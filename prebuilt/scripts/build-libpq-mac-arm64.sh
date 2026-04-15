#!/bin/bash
# Install PostgreSQL C client library (libpq) from Homebrew into the repo.
#
# Requires: brew install libpq
#
# Usage (from repo root):
#   sh prebuilt/scripts/build-libpq-mac-arm64.sh
#
# What it does:
#   1. Locates the pre-built arm64 libpq.a from Homebrew
#   2. Copies it to prebuilt/lib/mac/libpq.a
#   3. Updates thirdparty/libpq/include/ with the modern headers
#   4. Updates thirdparty/libpq/ORIGIN

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
# If not in libpq-fe.h, try pg_config
if [ "${PQ_VER}" = "unknown" ]; then
    PQ_VER="$("${PQ_PREFIX}/bin/pg_config" --version 2>/dev/null | sed 's/PostgreSQL //' || echo "unknown")"
fi

echo "  Formula : ${PQ_FORMULA}"
echo "  Prefix  : ${PQ_PREFIX}"
echo "  Version : PostgreSQL ${PQ_VER}"
echo ""

# Verify architecture
ARCH_INFO="$(file "${PQ_PREFIX}/lib/libpq.a" 2>/dev/null | \
    grep -o 'arm64\|x86_64\|universal' | head -1 || echo 'unknown')"
echo "  Architecture : ${ARCH_INFO}"
if [ "${ARCH_INFO}" = "x86_64" ]; then
    echo ""
    echo "WARNING: Library is x86_64, not arm64."
    echo "Make sure you installed libpq using the arm64 Homebrew"
    echo "at /opt/homebrew (not /usr/local which is the Intel prefix)."
    echo ""
    read -r -p "Continue anyway? [y/N] " reply
    case "${reply}" in [yY]*) ;; *) exit 1 ;; esac
fi
echo ""

# ── Copy static library ───────────────────────────────────────────────────────
echo "--- Installing prebuilt/lib/mac/libpq.a ---"
mkdir -p "$(dirname "${OUT_LIB}")"
cp "${PQ_PREFIX}/lib/libpq.a" "${OUT_LIB}"

SIZE_KB="$(du -k "${OUT_LIB}" | cut -f1)"
echo "  Size    : ${SIZE_KB} KB"

# Spot-check for PQconnectdb symbol
if nm "${OUT_LIB}" 2>/dev/null | grep -q " T _PQconnectdb"; then
    echo "  Symbols : PQconnectdb OK"
else
    echo "  Symbols : (could not verify — nm not available or symbol mangled)"
fi

# ── Update thirdparty/libpq/include ───────────────────────────────────────────
echo ""
echo "--- Updating thirdparty/libpq/include ---"

INCLUDE_DST="${THIRDPARTY_PQ}/include"
mkdir -p "${INCLUDE_DST}"

# Homebrew's libpq places headers directly in {prefix}/include/
# The driver only needs libpq-fe.h and its transitive includes
# (libpq-events.h, postgres_ext.h, pg_config_ext.h).
# Copy all .h files from the Homebrew include root so every transitive
# #include is satisfied without guessing.
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
echo "libpq.a is now PostgreSQL ${PQ_VER} (arm64, static, from Homebrew)."
echo "Next: run ./rebuild-dbpostgresql.sh to recompile dbpostgresql.bundle."
