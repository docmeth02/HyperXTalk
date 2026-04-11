import os
import glob

def add_x64_sections(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Find each Win32 ItemDefinitionGroup and add x64 version
    lines = content.split('\n')
    result_lines = []
    
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # Detect Win32 ItemDefinitionGroup
        if "ItemDefinitionGroup Condition=" in line and ("Win32'" in line or 'Win32"' in line):
            # Collect all lines until </ItemDefinitionGroup> (inclusive)
            # Note: do NOT append line separately — section_lines already starts with it
            section_lines = [line]
            i += 1

            while i < len(lines):
                section_lines.append(lines[i])
                if '</ItemDefinitionGroup>' in lines[i]:
                    break
                i += 1

            # Add Win32 section as-is (section_lines[0] is the trigger line)
            result_lines.extend(section_lines)
            
            # Create x64 version
            x64_section = []
            for sl in section_lines:
                sl_new = sl.replace('Win32', 'x64')
                sl_new = sl_new.replace('/MACHINE:x86', '/MACHINE:x64')
                sl_new = sl_new.replace('x86-win32-', 'x64-win32-')
                x64_section.append(sl_new)
            
            # Add x64 section
            result_lines.extend(x64_section)
        else:
            result_lines.append(line)
        
        i += 1
    
    content = '\n'.join(result_lines)
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Updated: {os.path.basename(filepath)}")
        return True
    return False

vcxproj_files = glob.glob('build-win-x86_64/**/*.vcxproj', recursive=True)
count = 0
for f in vcxproj_files:
    if add_x64_sections(f):
        count += 1

print(f"Done! Updated {count} files")
