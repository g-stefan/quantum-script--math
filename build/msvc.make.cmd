@echo off
rem Public domain
rem http://unlicense.org/
rem Created by Grigore Stefan <g_stefan@yahoo.com>

set ACTION=%1
if "%1" == "" set ACTION=make

echo -^> %ACTION% quantum-script-extension-math

goto StepX
:cmdX
%*
if errorlevel 1 goto cmdXError
goto :eof
:cmdXError
echo "Error: %ACTION%"
exit 1
:StepX

call :cmdX file-to-cs --touch=source/quantum-script-extension-math.cpp --file-in=source/quantum-script-extension-math.js --file-out=source/quantum-script-extension-math.src --is-string --name=extensionMathSource
call :cmdX xyo-cc --mode=%ACTION% @build/source/quantum-script-extension-math.static.compile
call :cmdX xyo-cc --mode=%ACTION% @build/source/quantum-script-extension-math.dynamic.compile
