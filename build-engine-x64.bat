@echo off
setlocal

cd /d "%~dp0"
set LOGFILE=%~dp0build-engine-x64.log
set VCXPROJ_ENGINE=build-win-x86_64\livecode\engine\development.vcxproj
set VCXPROJ_BROWSER=build-win-x86_64\livecode\libbrowser\libbrowser.vcxproj
set VCXPROJ_DBMYSQL=build-win-x86_64\livecode\revdb\dbmysql.vcxproj

:: ----------------------------------------------------------
:: MySQL 9.6.0 prerequisite check
:: The engine links against libmysql.lib (MySQL 9.6.0).
:: Run setup-mysql-win.bat once after: scoop install mysql
:: ----------------------------------------------------------
set "DEBUG_MYSQL_LIB=build-win-x86_64\livecode\Debug\lib\libmysql.lib"
if not exist "%DEBUG_MYSQL_LIB%" (
    echo.
    echo NOTE: %DEBUG_MYSQL_LIB% not found.
    echo Running setup-mysql-win.bat to copy MySQL 9.6.0 libs from Scoop...
    echo.
    call setup-mysql-win.bat
    if errorlevel 1 (
        echo.
        echo MySQL setup failed. Install MySQL via Scoop first:
        echo   scoop install mysql
        echo Then re-run this script.
        exit /b 1
    )
    echo.
)

echo Build started: %DATE% %TIME%
echo Build started: %DATE% %TIME% > "%LOGFILE%"
echo. >> "%LOGFILE%"

echo Building libbrowser (WebView2 fix) ...
echo Building libbrowser (WebView2 fix) ... >> "%LOGFILE%"
msbuild %VCXPROJ_BROWSER% /p:Configuration=Debug /p:Platform=x64 /p:BuildProjectReferences=false /v:minimal /nologo >> "%LOGFILE%" 2>&1
if errorlevel 1 (
    echo.
    echo LIBBROWSER BUILD FAILED. Errors:
    findstr /i " error " "%LOGFILE%"
    echo Full log: %LOGFILE%
    exit /b 1
)
echo libbrowser OK.

echo.
echo Building dbmysql (MySQL 9.6.0 database driver) ...
echo Building dbmysql ... >> "%LOGFILE%"
msbuild %VCXPROJ_DBMYSQL% /p:Configuration=Debug /p:Platform=x64 /p:BuildProjectReferences=false /v:minimal /nologo >> "%LOGFILE%" 2>&1
if errorlevel 1 (
    echo.
    echo DBMYSQL BUILD FAILED. Errors:
    findstr /i " error " "%LOGFILE%"
    echo Full log: %LOGFILE%
    exit /b 1
)
echo dbmysql OK.

echo.
echo Building engine ...

set "EXE=build-win-x86_64\livecode\Debug\HyperXTalk.exe"
set "ENGINE_LOG=%~dp0build-engine-step.log"
set "LINK_TLOG=build-win-x86_64\livecode\engine\Debug\x64\obj\development\development.tlog\link.write.1.tlog"

:: If the exe is missing, delete the linker tlog so MSBuild is forced
:: to rerun the link step even when no source files changed.
if not exist "%EXE%" (
    if exist "%LINK_TLOG%" (
        del /F /Q "%LINK_TLOG%"
        echo Cleared linker tlog to force relink.
    )
)

msbuild %VCXPROJ_ENGINE% /p:Configuration=Debug /p:Platform=x64 /p:BuildProjectReferences=false /v:minimal /nologo > "%ENGINE_LOG%" 2>&1
set BUILD_ERR=%ERRORLEVEL%

:: Show the engine build output (errors and warnings) on the console.
type "%ENGINE_LOG%"
type "%ENGINE_LOG%" >> "%LOGFILE%"

if %BUILD_ERR% NEQ 0 (
    echo.
    echo ENGINE BUILD FAILED.
    exit /b 1
)

if not exist "%EXE%" (
    echo.
    echo ENGINE BUILD FAILED - HyperXTalk.exe was not created.
    exit /b 1
)

echo.
echo BUILD SUCCEEDED.
echo Output: %EXE%
