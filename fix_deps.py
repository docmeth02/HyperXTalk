import re
import glob

def fix_solution(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Remove all ProjectDependencies sections (they often reference removed projects)
    # This is a aggressive fix but the dependencies aren't strictly needed
    content = re.sub(
        r'\s*ProjectSection\(ProjectDependencies\) = postProject\s*[\s\S]*?EndProjectSection',
        '',
        content
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
