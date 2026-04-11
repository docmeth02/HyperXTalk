import os
import re
import glob

def update_vcxproj(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Check if already has x64
    if '<Platform>x64</Platform>' in content:
        print(f"Skipping (has x64): {os.path.basename(filepath)}")
        return False
    
    modified = False
    
    # 1. Add x64 project configurations
    if '</ProjectConfiguration>\n  </ItemGroup>\n  <PropertyGroup Label="Globals">' in content:
        content = content.replace(
            '</ProjectConfiguration>\n  </ItemGroup>\n  <PropertyGroup Label="Globals">',
            '''</ProjectConfiguration>
    <ProjectConfiguration Include="Debug|x64">
      <Configuration>Debug</Configuration>
      <Platform>x64</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Fast|x64">
      <Configuration>Fast</Configuration>
      <Platform>x64</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Release|x64">
      <Configuration>Release</Configuration>
      <Platform>x64</Platform>
    </ProjectConfiguration>
  </ItemGroup>
  <PropertyGroup Label="Globals">'''
        )
        modified = True
    
    # 2. Add LinkIncremental for x64
    if "<LinkIncremental Condition=\"'$(Configuration)|$(Platform)'=='Release|Win32'\"" in content:
        content = content.replace(
            "<LinkIncremental Condition=\"'$(Configuration)|$(Platform)'=='Release|Win32'\">false</LinkIncremental>",
            '''<LinkIncremental Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">false</LinkIncremental>
    <LinkIncremental Condition="'$(Configuration)|$(Platform)'=='Fast|x64'"></LinkIncremental>
    <LinkIncremental Condition="'$(Configuration)|$(Platform)'=='Release|x64'">false</LinkIncremental>'''
        )
        modified = True
    
    # 3. NOTE: /MACHINE:x86 → /MACHINE:x64 is intentionally NOT done here globally.
    # add_x64_sections.py handles this correctly only within the x64 section copies.
    # A global replace would also corrupt the Win32 sections (x86 objs + x64 lib = LNK1112).

    # 4. Update ICU path from x86 to x64 (but not x64 to x64)
    if 'x86-win32-' in content:
        content = content.replace('x86-win32-', 'x64-win32-')
        modified = True
    
    if modified:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Updated: {os.path.basename(filepath)}")
        return True
    else:
        print(f"No changes: {os.path.basename(filepath)}")
        return False

# Find all vcxproj files
vcxproj_files = glob.glob('build-win-x86_64/**/*.vcxproj', recursive=True)
print(f"Found {len(vcxproj_files)} vcxproj files")

count = 0
for f in vcxproj_files:
    if update_vcxproj(f):
        count += 1

print(f"Done! Updated {count} files")
