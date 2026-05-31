#!/bin/bash
# Install MySQL C API (libmysqlclient) from Homebrew into the repo.
# Builds a universal libmysql.a if both x86_64 and arm64 Homebrew libraries are available.
#
# Requires: brew install mysql-client   (or mysql-client@8.4)
#
# Usage (from repo root):
#   sh prebuilt/scripts/build-libmysql-mac-arm64.sh

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

OUT_LIB="${REPO_ROOT}/prebuilt/lib/mac/libmysql.a"
THIRDPARTY_MYSQL="${REPO_ROOT}/thirdparty/libmysql"

echo "=== MySQL C API (libmysqlclient) — Homebrew install ==="
echo ""

# ── Locate the brew mysql-client prefix ───────────────────────────────────────
# Try formulae in preference order: latest, then LTS 8.4, then 8.0.
MYSQL_PREFIX=""
MYSQL_FORMULA=""
for formula in mysql-client mysql-client@8.4 mysql-client@8.0; do
    PREFIX="$(brew --prefix "${formula}" 2>/dev/null)" || continue
    if [ -f "${PREFIX}/lib/libmysqlclient.a" ]; then
        MYSQL_PREFIX="${PREFIX}"
        MYSQL_FORMULA="${formula}"
        break
    fi
done

if [ -z "${MYSQL_PREFIX}" ]; then
    echo "ERROR: MySQL client library not found via Homebrew."
    echo ""
    echo "Install with:"
    echo "  brew install mysql-client       # latest (recommended)"
    echo "  brew install mysql-client@8.4   # MySQL 8.4 LTS"
    exit 1
fi

# ── Show what we found ────────────────────────────────────────────────────────
MYSQL_VER="$(cat "${MYSQL_PREFIX}/include/mysql/mysql_version.h" 2>/dev/null | \
    grep 'MYSQL_SERVER_VERSION' | head -1 | sed 's/.*"\(.*\)".*/\1/')"

echo "  Formula : ${MYSQL_FORMULA}"
echo "  Prefix  : ${MYSQL_PREFIX}"
echo "  Version : ${MYSQL_VER}"
echo ""

# ── Check for universal build possibility ──────────────────────────────────────
X86_64_PREFIX=""
if [ -d "/usr/local" ] && [ -f "/usr/local/lib/libmysqlclient.a" ]; then
    X86_64_PREFIX="/usr/local"
fi

for prefix in /usr/local/opt/mysql-client /usr/local/opt/mysql-client@8.4 /usr/local/opt/mysql-client@8.0; do
    if [ -f "${prefix}/lib/libmysqlclient.a" ]; then
        X86_64_PREFIX="${prefix}"
        break
    fi
done

# ── Build universal or single-arch library ───────────────────────────────────
mkdir -p "$(dirname "${OUT_LIB}")"
rm -f "${OUT_LIB}"

if [ -n "${X86_64_PREFIX}" ] && [ "${MYSQL_PREFIX}" != "${X86_64_PREFIX}" ]; then
    echo "Creating universal libmysql.a from:"
    echo "  x86_64: ${X86_64_PREFIX}/lib/libmysqlclient.a"
    echo "  arm64:  ${MYSQL_PREFIX}/lib/libmysqlclient.a"
    lipo -create "${X86_64_PREFIX}/lib/libmysqlclient.a" "${MYSQL_PREFIX}/lib/libmysqlclient.a" \
        -o "${OUT_LIB}"
    echo "  Universal: ${OUT_LIB}"
else
    echo "--- Installing prebuilt/lib/mac/libmysql.a ---"
    cp "${MYSQL_PREFIX}/lib/libmysqlclient.a" "${OUT_LIB}"
    ARCH_INFO="$(file "${OUT_LIB}" 2>/dev/null | grep -o 'arm64\|x86_64\|universal' | head -1 || echo 'unknown')"
    echo "  Architecture : ${ARCH_INFO}"
    if [ "${ARCH_INFO}" = "x86_64" ]; then
        echo ""
        echo "WARNING: Library is x86_64 only."
        echo "For universal binaries, install mysql-client via both Intel and ARM Homebrew."
    fi
fi

SIZE_KB="$(du -k "${OUT_LIB}" | cut -f1)"
echo "  Size    : ${SIZE_KB} KB"

if nm "${OUT_LIB}" 2>/dev/null | grep -q " T _mysql_init"; then
    echo "  Symbols : mysql_init OK"
else
    echo "  Symbols : (could not verify)"
fi

# ── Update thirdparty/libmysql/include ────────────────────────────────────────
echo ""
echo "--- Updating thirdparty/libmysql/include ---"

INCLUDE_DST="${THIRDPARTY_MYSQL}/include"
mkdir -p "${INCLUDE_DST}"

if [ -f "${MYSQL_PREFIX}/include/mysql/mysql.h" ]; then
    INCLUDE_SRC="${MYSQL_PREFIX}/include/mysql"
elif [ -f "${MYSQL_PREFIX}/include/mysql.h" ]; then
    INCLUDE_SRC="${MYSQL_PREFIX}/include"
else
    echo "ERROR: Could not find mysql.h under ${MYSQL_PREFIX}/include/"
    exit 1
fi

cp "${INCLUDE_SRC}"/*.h "${INCLUDE_DST}/"
mkdir -p "${INCLUDE_DST}/mysql"
cp "${INCLUDE_SRC}"/*.h "${INCLUDE_DST}/mysql/"
UPDATED=$(ls "${INCLUDE_SRC}"/*.h 2>/dev/null | wc -l | tr -d ' ')
echo "  Copied ${UPDATED} header(s) (flat + mysql/ subdirectory)"

# ── Update ORIGIN ─────────────────────────────────────────────────────────────
cat > "${THIRDPARTY_MYSQL}/ORIGIN" <<EOF
Files in this folder use MySQL C API (libmysqlclient) from Homebrew.

  Formula : ${MYSQL_FORMULA}
  Version : MySQL ${MYSQL_VER}
  Prefix  : ${MYSQL_PREFIX}

To rebuild prebuilt/lib/mac/libmysql.a:
  brew install mysql-client
  sh prebuilt/scripts/build-libmysql-mac-arm64.sh
EOF
echo ""
echo "--- Updated ORIGIN ---"

# ── Propagate to _build/ directories if present ───────────────────────────────
for CONFIG in Debug Release Fast; do
    BUILD_DIR="${REPO_ROOT}/_build/mac/${CONFIG}"
    if [ -d "${BUILD_DIR}" ]; then
        cp "${OUT_LIB}" "${BUILD_DIR}/libmysql.a" 2>/dev/null && \
            echo "  Propagated to _build/mac/${CONFIG}/libmysql.a" || true
    fi
done

echo ""
echo "=== Done ==="
echo ""
echo "libmysql.a is now MySQL C API ${MYSQL_VER} (static, from Homebrew)."
echo "Next: run ./rebuild-dbmysql.sh to recompile dbmysql.bundle."
