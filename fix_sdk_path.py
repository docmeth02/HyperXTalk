import glob
import re

def replace_sdk_path(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Replace all Windows SDK include paths from 10.0.26100.0 to 10.0.19041.0
    content = content.replace('10.0.26100.0', '10.0.19041.0')
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Fixed SDK path: {filepath}")
        return True
    return False

files = glob.glob('build/engine/*.vcxproj') + glob.glob('build/engine/kernel*.vcxproj')
count = 0
for f in files:
    if replace_sdk_path(f):
        count += 1

print(f"Done! Fixed {count} files")
