#!/bin/sh
# Public domain
# http://unlicense.org/
# Created by Grigore Stefan <g_stefan@yahoo.com>

ACTION=$1
if [ "$ACTION" = "" ]; then
	ACTION=make
fi

echo "-> $ACTION quantum-script-extension-math"

cmdX(){
	if ! "$@" ; then
		echo "Error: $ACTION"
		exit 1
	fi
}

cmdX file-to-cs --touch=source/quantum-script-extension-math.cpp --file-in=source/quantum-script-extension-math.js --file-out=source/quantum-script-extension-math.src --is-string --name=extensionMathSource
cmdX xyo-cc --mode=$ACTION @build/source/quantum-script-extension-math.static.compile
cmdX xyo-cc --mode=$ACTION @build/source/quantum-script-extension-math.dynamic.compile
