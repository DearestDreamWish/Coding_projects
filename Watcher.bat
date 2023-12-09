@echo off
set appName=AntiPwny.exe
set notificationTitle=Application Monitor
set msgboxScript=msgbox.vbs

:monitorLoop
tasklist /FI "IMAGENAME eq %appName%" 2>nul | find /i "%appName%" >nul

if errorlevel 1 (
    echo Application is not running. Sending notification...
    cscript //nologo %msgboxScript% "Application is not running."
) else (
    echo Application is running.
)
goto monitorLoop
