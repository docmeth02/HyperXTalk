import os
import re

def clean_solution(filepath):
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # First, collect all valid project GUIDs
        valid_guids = set()
        for match in re.finditer(r'Project\("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}"\).*?"{([A-F0-9-]+)}"', content):
            valid_guids.add(match.group(1))
        # Also get folder projects
        for match in re.finditer(r'Project\("{2150E333-8FDC-42A3-9474-1A3956D46DE8}"\).*?"{([A-F0-9-]+)}"', content):
            valid_guids.add(match.group(1))
        
        # Remove lines with deleted ICU projects
        content = re.sub(
            r'Project\("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}"\).*?(encode_minimal_icu_data|minimal_icu_data|libicu).*?EndProject\n',
            '',
            content,
            flags=re.DOTALL
        )
        
        # Fix self-referencing dependencies
        lines = content.split('\n')
        new_lines = []
        for line in lines:
            match = re.search(r'{([A-F0-9-]+)}\s*=\s*{([A-F0-9-]+)}', line)
            if match and match.group(1) == match.group(2):
                continue
            if '{7CF05A63-4801-6D43-EA0C-B71F59F69227}' in line or '{F93C4196-23E3-7952-D3F7-8E37BB5BAE91}' in line:
                continue
            new_lines.append(line)
        content = '\n'.join(new_lines)
        
        # Clean empty project sections
        content = re.sub(r'ProjectSection\(ProjectDependencies\)\s*=\s*postProject\s*\n\s*EndProjectSection\n', '', content)
        
        # Fix NestedProjects section - remove references to deleted projects
        def fix_nested(match):
            section = match.group(0)
            lines = section.split('\n')
            new_section_lines = []
            for line in lines:
                if '=' in line:
                    parts = line.split('=')
                    left = parts[0].strip()
                    right = parts[1].strip()
                    # Keep only if both GUIDs are valid
                    if left in valid_guids and right in valid_guids:
                        new_section_lines.append(line)
            return '\n'.join(new_section_lines)
        
        content = re.sub(r'GlobalSection\(NestedProjects\).*?EndGlobalSection', fix_nested, content, flags=re.DOTALL)
        
        # Clean up duplicate blank lines
        content = re.sub(r'\n\n\n+', '\n\n', content)
        
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"Error {filepath}: {e}")
        return False

count = 0
for root, dirs, files in os.walk('build'):
    for file in files:
        if file.endswith('.sln'):
            filepath = os.path.join(root, file)
            if clean_solution(filepath):
                count += 1
print(f"Done! Fixed {count} solution files.")