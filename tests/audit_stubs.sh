#!/bin/bash
#
# audit_stubs.sh - Verify that every required symbol in linux.stubs
# can be resolved from system shared libraries via dlopen/dlsym.
#
# Usage: ./audit_stubs.sh [--verbose] [path/to/linux.stubs]

set -euo pipefail

VERBOSE=0
STUBS_FILE=""

for arg in "$@"; do
    case "$arg" in
        --verbose) VERBOSE=1 ;;
        *) STUBS_FILE="$arg" ;;
    esac
done

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

if [ -z "$STUBS_FILE" ]; then
    STUBS_FILE="$REPO_ROOT/engine/src/linux.stubs"
fi

if [ ! -f "$STUBS_FILE" ]; then
    echo "ERROR: stubs file not found: $STUBS_FILE" >&2
    exit 2
fi

# Build the C helper that probes dlopen/dlsym
TMPDIR="$(mktemp -d)"
trap 'rm -rf "$TMPDIR"' EXIT

PROBE="$TMPDIR/probe"
cat > "$TMPDIR/probe.c" <<'CEOF'
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

/* Usage: probe <library.so> <symbol_name>
 *   Exit 0  = symbol found
 *   Exit 1  = symbol not found (library loaded OK)
 *   Exit 2  = library could not be loaded
 */
int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "usage: probe <lib> <symbol>\n");
        return 3;
    }
    void *handle = dlopen(argv[1], RTLD_LAZY);
    if (!handle) {
        /* Print dlerror so caller can capture it */
        fprintf(stderr, "%s\n", dlerror());
        return 2;
    }
    dlerror(); /* clear */
    void *sym = dlsym(handle, argv[2]);
    char *err = dlerror();
    dlclose(handle);
    if (err != NULL) {
        return 1;
    }
    /* dlsym can legitimately return NULL for some symbols, but
     * if dlerror() is NULL the lookup succeeded. */
    return 0;
}
CEOF

if ! gcc -o "$PROBE" "$TMPDIR/probe.c" -ldl 2>/dev/null; then
    echo "ERROR: failed to compile dlopen/dlsym probe helper" >&2
    exit 2
fi

# Parse the stubs file and run checks
total_required=0
total_ok=0
total_missing=0
total_lib_fail=0

# Track libraries we already tested for loadability so we don't
# repeat dlopen attempts (multiple sections can share one .so)
declare -A lib_loadable   # lib_loadable[libfoo.so.N] = "yes" | "no"
declare -A lib_errors     # human-readable dlopen error

# Accumulate failures for final report
declare -a fail_lines=()

current_lib=""
current_lib_name=""

while IFS= read -r line; do
    # Skip empty lines
    [[ -z "${line// /}" ]] && continue

    # Library header: first non-whitespace token is an identifier,
    # second token contains ".so"
    if [[ "$line" =~ ^[^[:space:]] ]]; then
        # Try to extract: NAME libfoo.so.N
        read -r ident sopath rest <<< "$line"
        if [[ "$sopath" == *.so* ]]; then
            current_lib_name="$ident"
            current_lib="$sopath"

            # Test loadability once per .so
            if [[ -z "${lib_loadable[$current_lib]+x}" ]]; then
                if "$PROBE" "$current_lib" "__this_sym_wont_exist__" 2>"$TMPDIR/dlerr"; then
                    lib_loadable[$current_lib]="yes"
                elif [ $? -eq 2 ]; then
                    lib_loadable[$current_lib]="no"
                    lib_errors[$current_lib]="$(cat "$TMPDIR/dlerr")"
                else
                    # exit 1 means library loaded but symbol not found, which is fine
                    lib_loadable[$current_lib]="yes"
                fi
            fi
        fi
        continue
    fi

    # Inside a library section - parse symbol lines
    # Strip leading whitespace
    stripped="${line#"${line%%[![:space:]]*}"}"

    # Skip blank after strip
    [[ -z "$stripped" ]] && continue

    # Skip fully commented lines (# at start after whitespace)
    [[ "$stripped" == \#* ]] && continue

    # Optional symbols: prefixed with ?
    if [[ "$stripped" == \?* ]]; then
        # Optional - skip auditing
        continue
    fi

    # Variadic / special symbols: prefixed with @
    # Format: "@ symbol_name"
    if [[ "$stripped" == @* ]]; then
        sym="${stripped#@}"
        sym="${sym## }"          # trim leading spaces
        sym="${sym%%:*}"         # drop any trailing : or signature
        sym="${sym%% *}"         # drop any trailing spaces
        # Fall through to check this symbol
    else
        # Regular symbol: "symbol_name: (sig) -> (ret)"
        # Also handle "symbol_name" alone on a line (like the optional one without ?)
        sym="${stripped%%:*}"
        sym="${sym%% *}"         # trim trailing spaces
    fi

    # Sanity: skip if we got an empty symbol or no current library
    [[ -z "$sym" ]] && continue
    [[ -z "$current_lib" ]] && continue

    total_required=$((total_required + 1))

    # If the library itself can't load, count as missing
    if [[ "${lib_loadable[$current_lib]}" == "no" ]]; then
        total_missing=$((total_missing + 1))
        fail_lines+=("  MISSING  $current_lib_name ($current_lib) :: $sym  [library not loadable]")
        continue
    fi

    # Probe the symbol
    if "$PROBE" "$current_lib" "$sym" 2>/dev/null; then
        total_ok=$((total_ok + 1))
        if [ "$VERBOSE" -eq 1 ]; then
            echo "  OK  $current_lib_name ($current_lib) :: $sym"
        fi
    else
        rc=$?
        total_missing=$((total_missing + 1))
        fail_lines+=("  MISSING  $current_lib_name ($current_lib) :: $sym")
    fi

done < "$STUBS_FILE"

# Report libraries that failed to load
lib_fail_count=0
for lib in "${!lib_loadable[@]}"; do
    if [[ "${lib_loadable[$lib]}" == "no" ]]; then
        lib_fail_count=$((lib_fail_count + 1))
    fi
done

if [ "$lib_fail_count" -gt 0 ]; then
    echo ""
    echo "=== Libraries that could not be loaded ==="
    for lib in $(echo "${!lib_loadable[@]}" | tr ' ' '\n' | sort); do
        if [[ "${lib_loadable[$lib]}" == "no" ]]; then
            echo "  $lib: ${lib_errors[$lib]:-unknown error}"
        fi
    done
fi

# Report missing symbols
if [ "${#fail_lines[@]}" -gt 0 ]; then
    echo ""
    echo "=== Missing required symbols ==="
    # Sort and group by library
    printf '%s\n' "${fail_lines[@]}" | sort
fi

# Summary
echo ""
echo "--- Summary ---"
echo "Stubs file:       $STUBS_FILE"
echo "Required symbols: $total_required"
echo "Resolved:         $total_ok"
echo "Missing:          $total_missing"
echo "Unloadable libs:  $lib_fail_count"

if [ "$total_missing" -gt 0 ] || [ "$lib_fail_count" -gt 0 ]; then
    echo ""
    echo "FAIL: $total_missing required symbol(s) unresolvable"
    exit 1
else
    echo ""
    echo "PASS: all required symbols resolved"
    exit 0
fi
