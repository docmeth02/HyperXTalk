import os
import glob

def add_cpp20_settings(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Add C++20 settings to all ItemDefinitionGroup sections that have ClCompile
    lines = content.split('\n')
    result = []
    
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # Add C++20 settings after ClCompile opening tag
        if '<ClCompile>' in line:
            result.append(line)
            i += 1
            # Add C++20 settings
            result.append('      <LanguageStandard>stdcpp20</LanguageStandard>')
            result.append('      <LanguageStandardVersion>latest</LanguageStandardVersion>')
        else:
            result.append(line)
        
        i += 1
    
    content = '\n'.join(result)
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Added C++20: {os.path.basename(filepath)}")
        return True
    return False

# Find kernel and engine vcxproj files
files = glob.glob('build/engine/*.vcxproj') + glob.glob('build/engine/kernel*.vcxproj')
print(f"Found {len(files)} engine project files")

count = 0
for f in files:
    if add_cpp20_settings(f):
        count += 1

print(f"Done! Updated {count} files")
