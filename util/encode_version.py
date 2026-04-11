#!/usr/bin/env python3
"""Python replacement for encode_version.pl - generates revbuild.h from version file and template"""

import sys
import os
import re

def trim(s):
    return s.strip()

git_revision = sys.argv[1]
input_dir = sys.argv[2]
output_dir = sys.argv[3]

# Open the file containing the variables
version_path = os.path.join(input_dir, '..', 'version')
with open(version_path, 'r') as f:
    variables = f.readlines()

# Open the template header
template_path = os.path.join(input_dir, 'include', 'revbuild.h.in')
with open(template_path, 'r') as f:
    template = f.read()

# Replace each instance of the variable in the template file
output = template
for variable in variables:
    if '=' not in variable:
        continue
    parts = variable.split('=', 1)
    var_name = trim(parts[0])
    var_value = trim(parts[1])
    output = output.replace('$' + var_name, var_value)

output = output.replace('$GIT_REVISION', git_revision)

# Create output directory if needed
out_include_dir = os.path.join(output_dir, 'include')
os.makedirs(out_include_dir, exist_ok=True)

# Create the output file
out_path = os.path.join(out_include_dir, 'revbuild.h')
with open(out_path, 'w') as f:
    f.write(output)
