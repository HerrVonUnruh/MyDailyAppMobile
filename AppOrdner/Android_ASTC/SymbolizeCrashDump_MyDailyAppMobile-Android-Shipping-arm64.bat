@echo off
IF %1.==. GOTO NoArgs
setlocal
set NDK_ROOT=%ANDROID_NDK_ROOT%
if "%ANDROID_NDK_ROOT%"=="" set NDK_ROOT=""
set NDKSTACK=%NDK_ROOT%\ndk-stack.cmd

%NDKSTACK% -sym MyDailyAppMobile_Symbols_v1/MyDailyAppMobilearm64 -dump "%1" > MyDailyAppMobile_SymbolizedCallStackOutput.txt

goto:eof


:NoArgs
echo.
echo Required argument missing, pass a dump of adb crash log. (SymboliseCallStackDump C:\adbcrashlog.txt)
pause
