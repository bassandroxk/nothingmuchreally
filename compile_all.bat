@echo off
echo ===============================
echo   COMPILING ALL C PROGRAMS 🔥
echo ===============================

for /r %%f in (*.c) do (
    echo Compiling %%f ...
    gcc "%%f" -o "%%~dpnf.exe"
)

echo.
echo ✅ All .c files compiled successfully!
pause
