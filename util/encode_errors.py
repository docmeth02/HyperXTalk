#!/usr/bin/env python3
"""Python replacement for encode_errors.pl - generates C string arrays from error enum headers"""

import sys
import os
import re

def generate_errors_list(source_file, name):
    with open(source_file, 'r') as f:
        lines = f.readlines()

    array = "const char * %s = \n" % name

    found = False
    for line in lines:
        # If the first word of the line is "enum" we have found the error list
        if re.match(r'^\s*enum\s', line):
            found = True

        # Continue reading lines until we get to the enum
        if not found:
            continue

        # End of the enum
        if '};' in line:
            break

        # The comment contains the error message for this error
        if re.match(r'^\s*//\s*\{', line):
            # Remove the newline character
            line = line.rstrip('\n').rstrip('\r')

            # Remove the prefix from the error message
            line = re.sub(r'^\s*//\s*\{[^\}]*\}\s*', '', line)

            # Protect any quotation marks
            line = line.replace('"', '\\"')

            # Output the message
            array += '\t"%s\\n"\n' % line

    array += ";\n"
    return array

# Need to generate the error lists for both the parse and execution errors
path = sys.argv[1]
output_file = sys.argv[2]

output = ""
output += generate_errors_list(os.path.join(path, "executionerrors.h"), "MCexecutionerrors")
output += "\n"
output += generate_errors_list(os.path.join(path, "parseerrors.h"), "MCparsingerrors")

# Write out the error lists
os.makedirs(os.path.dirname(output_file), exist_ok=True)
with open(output_file, 'w') as f:
    f.write(output)
