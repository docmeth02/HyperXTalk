@echo off
setlocal

echo ============================================================
echo  Building OpenSSL 3 static libs for HyperXTalk (Windows x64)
echo ============================================================
echo.

:: Check prerequisites
where git >nul 2>&1 || (echo ERROR: git not found. Install from https://git-scm.com & exit /b 1)
where perl >nul 2>&1 || (echo ERROR: perl not found. Install Strawberry Perl from https://strawberryperl.com & exit /b 1)
where nasm >nul 2>&1 || (echo ERROR: nasm not found. Install from https://www.nasm.us & exit /b 1)
where nmake >nul 2>&1 || (echo ERROR: nmake not found. Run this from a VS2019 Developer Command Prompt. & exit /b 1)
where cl >nul 2>&1    || (echo ERROR: cl.exe not found. Run this from a VS2019 Developer Command Prompt. & exit /b 1)

echo Prerequisites OK.
echo.

powershell -ExecutionPolicy Bypass -File "%~dp0setup-openssl3.ps1"

if %ERRORLEVEL% neq 0 (
    echo.
    echo ERROR: setup-openssl3.ps1 exited with code %ERRORLEVEL%
    exit /b %ERRORLEVEL%
)

echo.
echo Done. OpenSSL 3 libs are ready.
exit /b 0
