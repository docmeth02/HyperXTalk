import re
import glob

# Remove encode_minimal_icu_data and minimal_icu_data references from solution files

def fix_solution(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Remove encode_minimal_icu_data project section
    content = re.sub(
        r'Project\("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}"\) = "encode_minimal_icu_data", "[^"]+encode_minimal_icu_data\.vcxproj", "{[^}]+}"[^}]+ProjectSection\(ProjectDependencies\).*?EndProjectSection\s*EndProject\s*',
        '',
        content,
        flags=re.DOTALL
    )
    
    # Remove minimal_icu_data project section
    content = re.sub(
        r'Project\("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}"\) = "minimal_icu_data", "[^"]+minimal_icu_data\.vcxproj", "{[^}]+}"[^}]+ProjectSection\(ProjectDependencies\).*?EndProjectSection\s*EndProject\s*',
        '',
        content,
        flags=re.DOTALL
    )
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Fixed: {filepath}")
        return True
    return False

sln_files = glob.glob('build/**/*.sln', recursive=True)
count = 0
for f in sln_files:
    if fix_solution(f):
        count += 1

print(f"Done! Fixed {count} solution files")
