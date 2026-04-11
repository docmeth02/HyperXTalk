import os
import re
import glob

def fix_vcxproj_machines(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Find all ItemDefinitionGroup sections and fix MACHINE settings
    lines = content.split('\n')
    new_lines = []
    current_platform = 'Win32'  # default
    
    for i, line in enumerate(lines):
        # Detect current platform from ItemDefinitionGroup
        if "ItemDefinitionGroup Condition=" in line:
            if "|x64'" in line or "|x64\"" in line:
                current_platform = 'x64'
            elif "|Win32'" in line or "|Win32\"" in line:
                current_platform = 'Win32'
        
        # Fix MACHINE settings based on platform
        if current_platform == 'x64' and 'AdditionalOptions' in line and '/MACHINE:' in line:
            line = line.replace('/MACHINE:x86', '/MACHINE:x64')
        elif current_platform == 'Win32' and 'AdditionalOptions' in line and '/MACHINE:' in line:
            line = line.replace('/MACHINE:x64', '/MACHINE:x86')
        
        new_lines.append(line)
    
    content = '\n'.join(new_lines)
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Fixed: {os.path.basename(filepath)}")
        return True
    return False

# Find all vcxproj files
vcxproj_files = glob.glob('build/**/*.vcxproj', recursive=True)
print(f"Found {len(vcxproj_files)} vcxproj files")

count = 0
for f in vcxproj_files:
    if fix_vcxproj_machines(f):
        count += 1

print(f"Done! Fixed {count} files")
