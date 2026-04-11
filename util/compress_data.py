#!/usr/bin/env python3
"""Python replacement for compress_data.pl - gzip-compresses a file and outputs as C array"""
import sys
import os
import gzip

source_file = sys.argv[1]
dest_file = sys.argv[2]
var_name = sys.argv[3]

with open(source_file, 'rb') as f:
    raw_data = f.read()

# gzip compress
compressed = gzip.compress(raw_data)
length = len(compressed)

# Build C array using list + join — O(n), avoids quadratic string growth
parts = []
for i, b in enumerate(compressed):
    parts.append("0x%02x, " % b)
    if i % 16 == 15:
        parts.append("\n\t")

# Trim trailing separator
if length > 0:
    if length % 16 == 0:
        del parts[-1]           # remove trailing "\n\t"
    parts[-1] = parts[-1][:-2]  # remove trailing ", " from last byte

c_array = "".join(parts)

os.makedirs(os.path.dirname(os.path.abspath(dest_file)), exist_ok=True)
with open(dest_file, 'w') as f:
    f.write("unsigned char %s[] = \n{\n\t%s\n};\n" % (var_name, c_array))
    f.write("unsigned int %s_length = %d;\n" % (var_name, length))
