#!/usr/bin/env python3
"""Python replacement for list_stub_symbols.pl - generates symbol lists/DEF files from .stubs files"""

import sys
import re

def trim(s):
    return s.strip()

# Arguments: prefix, inputFile, outputFile, option (e.g. --exportdef=MODULE)
prefix_arg  = sys.argv[1] if len(sys.argv) > 1 else ""
input_file  = sys.argv[2]
output_file = sys.argv[3]
export_def_opt = sys.argv[4] if len(sys.argv) > 4 else ""

export_def_arg = ""
export_def_module = ""
if export_def_opt:
    parts = export_def_opt.split('=', 1)
    export_def_arg = parts[0]
    export_def_module = parts[1] if len(parts) > 1 else ""

is_windows = (export_def_arg == "--exportdef")
is_linux   = (export_def_arg == "--version-script")

# Read all of the input data
with open(input_file, 'r') as f:
    spec_lines = f.readlines()

prefix = prefix_arg if prefix_arg else ""

output_parts = []

# Output header
if is_windows:
    output_parts.append("LIBRARY %s\n" % export_def_module)
    output_parts.append("EXPORTS\n")
elif is_linux:
    output_parts.append("%s {\n" % export_def_module)
    output_parts.append("  global:\n")

symbol_index = 1

for line in spec_lines:
    # Ignore empty lines
    if re.match(r'^\s*$', line):
        continue
    # Ignore comment lines
    if re.match(r'^\s*#', line):
        continue
    # Ignore lines defining modules (not starting with tab)
    if line[0] != '\t':
        continue

    # Skip the tab character
    line = line[1:]

    # Handle optional/reference symbols
    stripped = line.strip()
    words = stripped.split()
    if stripped.startswith('?') or stripped.startswith('@'):
        symbol = words[1] if len(words) > 1 else ""
    else:
        symbol = words[0] if words else ""

    # Remove any trailing colons
    symbol = symbol.rstrip(':')

    # Write the symbol to the output
    if is_windows:
        output_parts.append("    %s%s    @%d\n" % (prefix, symbol, symbol_index))
    elif is_linux:
        output_parts.append("    %s%s;\n" % (prefix, symbol))
    else:
        output_parts.append("%s%s\n" % (prefix, symbol))

    symbol_index += 1

if is_linux:
    output_parts.append("  local: *;\n")
    output_parts.append("};\n")

import os
os.makedirs(os.path.dirname(os.path.abspath(output_file)), exist_ok=True)
with open(output_file, 'w') as f:
    f.write(''.join(output_parts))
