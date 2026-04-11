import os
import re
import glob

def update_solution(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    modified = False
    
    # Check if already has x64
    if 'x64|' in content:
        print(f"Skipping (has x64): {os.path.basename(filepath)}")
        return False
    
    # Add x64 to SolutionConfigurationPlatforms
    content = content.replace(
        'Release|Win32 = Release|Win32',
        'Release|Win32 = Release|Win32\n\t\tRelease|x64 = Release|x64'
    )
    content = content.replace(
        'Debug|Win32 = Debug|Win32',
        'Debug|Win32 = Debug|Win32\n\t\tDebug|x64 = Debug|x64'
    )
    content = content.replace(
        'Fast|Win32 = Fast|Win32',
        'Fast|Win32 = Fast|Win32\n\t\tFast|x64 = Fast|x64'
    )
    
    # Add x64 to ProjectConfigurationPlatforms (for each project)
    # Pattern: {guid}.Fast|Win32.ActiveCfg = Fast|Win32
    content = re.sub(
        r"(\{[^}]+\})\.(Fast|Debug|Release)\|Win32\.ActiveCfg = \2\|Win32",
        r"\1.\2|Win32.ActiveCfg = \2|Win32\n\t\t\1.\2|x64.ActiveCfg = \2|x64",
        content
    )
    content = re.sub(
        r"(\{[^}]+\})\.(Fast|Debug|Release)\|Win32\.Build.0 = \2\|Win32",
        r"\1.\2|Win32.Build.0 = \2|Win32\n\t\t\1.\2|x64.Build.0 = \2|x64",
        content
    )
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Updated: {os.path.basename(filepath)}")
        return True
    else:
        print(f"No changes: {os.path.basename(filepath)}")
        return False

# Find all sln files
sln_files = glob.glob('build/**/*.sln', recursive=True)
print(f"Found {len(sln_files)} solution files")

count = 0
for f in sln_files:
    if update_solution(f):
        count += 1

print(f"Done! Updated {count} files")
