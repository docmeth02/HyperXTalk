$vcxprojFiles = Get-ChildItem -Path "build" -Filter "*.vcxproj" -Recurse
$count = 0

foreach ($file in $vcxprojFiles) {
    $content = Get-Content $file.FullName -Raw
    
    if ($content -match '<Platform>x64</Platform>') {
        Write-Host "Skipping (already has x64): $($file.Name)"
        continue
    }
    
    $modified = $false
    
    if ($content -notmatch '<Platform>x64</Platform>') {
        $content = $content -replace '(</ProjectConfiguration>\s*</ItemGroup>\s*<PropertyGroup Label="Globals">)', 
            @'
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
  <PropertyGroup Label="Globals">'@
        $modified = $true
    }
    
    if ($content -match "<LinkIncremental Condition=.+Release.Win32") {
        $content = $content -replace '(<LinkIncremental Condition=.+Release.Win32.>)', @'
$1
    <LinkIncremental Condition="'$(Configuration)|$(Platform)'=='Fast|x64'"></LinkIncremental>
    <LinkIncremental Condition="'$(Configuration)|$(Platform)'=='Release|x64'">false</LinkIncremental>'@
        $modified = $true
    }
    
    if ($content -match '/MACHINE:x86') {
        $content = $content -replace '/MACHINE:x86', '/MACHINE:x64'
        $modified = $true
    }
    
    if ($content -match 'x86-win32-') {
        $content = $content -replace 'x86-win32-', 'x64-win32-'
        $modified = $true
    }
    
    if ($modified) {
        Set-Content -Path $file.FullName -Value $content -NoNewline
        $count++
        Write-Host "Updated: $($file.Name)"
    }
}

Write-Host "Done! Updated $count files"
