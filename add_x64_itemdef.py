import os
import glob

def add_x64_sections(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Check if already has x64 ItemDefinitionGroup
    if "ItemDefinitionGroup Condition=\"'$(Configuration)|$(Platform)'=='Release|x64'\"" in content:
        return False
    
    # Find each Win32 ItemDefinitionGroup and add x64 version
    lines = content.split('\n')
    result = []
    
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # When we find a Win32 ItemDefinitionGroup, process it
        if "ItemDefinitionGroup Condition=" in line and "'$(Configuration)|$(Platform)'=='Release|Win32'" in line:
            # Collect the entire Win32 section
            section_start = i
            section_lines = [line]
            i += 1
            
            # Find the closing </ItemDefinitionGroup>
            while i < len(lines):
                section_lines.append(lines[i])
                if '</ItemDefinitionGroup>' in lines[i]:
                    break
                i += 1
            
            # Add Win32 section
            result.extend(section_lines)
            
            # Create x64 version by modifying paths and MACHINE settings
            x64_section = []
            for sl in section_lines:
                sl = sl.replace('Release|Win32', 'Release|x64')
                sl = sl.replace('x86-win32-', 'x64-win32-')
                sl = sl.replace('/MACHINE:x86', '/MACHINE:x64')
                x64_section.append(sl)
            
            result.extend(x64_section)
        elif "ItemDefinitionGroup Condition=" in line and "'$(Configuration)|$(Platform)'=='Debug|Win32'" in line:
            section_start = i
            section_lines = [line]
            i += 1
            
            while i < len(lines):
                section_lines.append(lines[i])
                if '</ItemDefinitionGroup>' in lines[i]:
                    break
                i += 1
            
            result.extend(section_lines)
            
            x64_section = []
            for sl in section_lines:
                sl = sl.replace('Debug|Win32', 'Debug|x64')
                sl = sl.replace('x86-win32-', 'x64-win32-')
                sl = sl.replace('/MACHINE:x86', '/MACHINE:x64')
                x64_section.append(sl)
            
            result.extend(x64_section)
        elif "ItemDefinitionGroup Condition=" in line and "'$(Configuration)|$(Platform)'=='Fast|Win32'" in line:
            section_start = i
            section_lines = [line]
            i += 1
            
            while i < len(lines):
                section_lines.append(lines[i])
                if '</ItemDefinitionGroup>' in lines[i]:
                    break
                i += 1
            
            result.extend(section_lines)
            
            x64_section = []
            for sl in section_lines:
                sl = sl.replace('Fast|Win32', 'Fast|x64')
                sl = sl.replace('x86-win32-', 'x64-win32-')
                sl = sl.replace('/MACHINE:x86', '/MACHINE:x64')
                x64_section.append(sl)
            
            result.extend(x64_section)
        else:
            result.append(line)
        
        i += 1
    
    content = '\n'.join(result)
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Added x64: {os.path.basename(filepath)}")
        return True
    return False

vcxproj_files = glob.glob('build/**/*.vcxproj', recursive=True)
count = 0
for f in vcxproj_files:
    if add_x64_sections(f):
        count += 1

print(f"Done! Added x64 sections to {count} files")
