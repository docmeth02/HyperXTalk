import os
import re
import glob

def fix_platform_settings(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    lines = content.split('\n')
    result = []
    current_platform = None
    
    for line in lines:
        # Track which platform we're in - check for Win32 or x64 in the condition
        if "ItemDefinitionGroup Condition=" in line:
            if "|Win32'" in line or '|Win32"' in line:
                current_platform = 'Win32'
            elif "|x64'" in line or '|x64"' in line:
                current_platform = 'x64'
        
        # Fix MACHINE settings based on current platform
        if '/MACHINE:' in line:
            if current_platform == 'Win32':
                line = line.replace('/MACHINE:x64', '/MACHINE:x86')
                line = line.replace('/MACHINE:X64', '/MACHINE:x86')
            elif current_platform == 'x64':
                line = line.replace('/MACHINE:x86', '/MACHINE:x64')
                line = line.replace('/MACHINE:X86', '/MACHINE:x64')
        
        # Fix ICU path based on current platform
        if 'AdditionalIncludeDirectories' in line or 'AdditionalLibraryDirectories' in line:
            if current_platform == 'Win32':
                line = line.replace('x64-win32-', 'x86-win32-')
            elif current_platform == 'x64':
                line = line.replace('x86-win32-', 'x64-win32-')
        
        result.append(line)
    
    content = '\n'.join(result)
    
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
    if fix_platform_settings(f):
        count += 1

print(f"Done! Fixed {count} files")
