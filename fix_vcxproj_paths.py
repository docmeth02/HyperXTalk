import os
import re
import glob

def fix_vcxproj(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Fix the path replacements - x64 paths should only be in x64 sections
    # For each x64 ItemDefinitionGroup, ensure x64 path, but for Win32 ensure x86 path
    
    # Find all ItemDefinitionGroup sections and fix them
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
        
        # Fix include paths based on platform
        if current_platform == 'x64' and 'AdditionalIncludeDirectories' in line:
            line = line.replace('x86-win32-', 'x64-win32-')
        elif current_platform == 'Win32' and 'AdditionalIncludeDirectories' in line:
            line = line.replace('x64-win32-', 'x86-win32-')
        
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
    if fix_vcxproj(f):
        count += 1

print(f"Done! Fixed {count} files")
