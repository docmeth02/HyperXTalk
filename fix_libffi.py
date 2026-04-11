import re

with open('build/thirdparty/libffi/libffi.vcxproj', 'r') as f:
    content = f.read()

# Find the Release|x64 Lib section and add the vcpkg dependency
content = re.sub(
    r"(<ItemDefinitionGroup Condition=\"'\$\(Configuration\)\|\$\(Platform\)'=='Release\|x64'\">.*?<Lib>.*?)(<OutputFile>.*?</OutputFile>)",
    r"\1<AdditionalDependencies>C:\\vcpkg\\installed\\x64-windows\\lib\\ffi.lib;%(AdditionalDependencies)</AdditionalDependencies>\2",
    content,
    flags=re.DOTALL
)

with open('build/thirdparty/libffi/libffi.vcxproj', 'w') as f:
    f.write(content)

print("Done!")
