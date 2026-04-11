@echo off
set LIB="C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\MSVC\14.50.35717\bin\Hostx86\x86\lib.exe"
set OUT=build\libfoundation\Release\lib\libFoundation.lib
set OBJ=build\libfoundation\Release\obj\libFoundation\*.obj
%LIB% /OUT:%OUT% /NOLOGO %OBJ%