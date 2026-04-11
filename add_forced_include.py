import os
import glob

def add_forced_include(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Add ForcedIncludeFiles to all ClCompile sections that don't have it
    if 'sdk_compat.h' not in content:
        lines = content.split('\n')
        result = []
        
        i = 0
        while i < len(lines):
            line = lines[i]
            result.append(line)
            
            # After DisableSpecificWarnings, add ForcedIncludeFiles
            if '<DisableSpecificWarnings>' in line:
                # Check next line for ExceptionHandling, if so add between
                if i + 1 < len(lines) and '<ExceptionHandling>' in lines[i + 1]:
                    result.append('      <ForcedIncludeFiles>..\\..\\engine\\src\\sdk_compat.h;%(ForcedIncludeFiles)</ForcedIncludeFiles>')
            
            i += 1
        
        content = '\n'.join(result)
    
    if content != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"Added forced include: {os.path.basename(filepath)}")
        return True
    return False

files = glob.glob('build/engine/*.vcxproj') + glob.glob('build/engine/kernel*.vcxproj')
count = 0
for f in files:
    if add_forced_include(f):
        count += 1

print(f"Done! Updated {count} files")
