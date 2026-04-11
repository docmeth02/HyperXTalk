#!/usr/bin/env python3
"""Python replacement for encode_data.pl - converts binary file to C array"""
import sys
import os

source_file = sys.argv[1]
dest_file = sys.argv[2]
var_name = sys.argv[3]

with open(source_file, 'rb') as f:
    data = f.read()

length = len(data)

# Build C array using list + join — O(n), avoids quadratic string growth
parts = []
for i, b in enumerate(data):
    parts.append("0x%02x, " % b)
    if i % 16 == 15:
        parts.append("\n\t")

# Trim the trailing separator to match Perl script output:
#   If length % 16 == 0: loop ended with "\n\t" after last byte's "0xNN, "
#   Otherwise:           loop ended with "0xNN, " as last element
if length > 0:
    if length % 16 == 0:
        del parts[-1]           # remove trailing "\n\t"
    parts[-1] = parts[-1][:-2]  # remove trailing ", " from last byte

c_array = "".join(parts)

os.makedirs(os.path.dirname(os.path.abspath(dest_file)), exist_ok=True)
with open(dest_file, 'w') as f:
    f.write("alignas(16) unsigned char %s[] = \n{\n\t%s\n};\n" % (var_name, c_array))
    f.write("unsigned int %s_length = %d;\n" % (var_name, length))
