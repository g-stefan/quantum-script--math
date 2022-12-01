// Quantum Script Extension Math
// Copyright (c) 2022 Grigore Stefan <g_stefan@yahoo.com>
// MIT License (MIT) <http://opensource.org/licenses/MIT>
// SPDX-FileCopyrightText: 2022 Grigore Stefan <g_stefan@yahoo.com>
// SPDX-License-Identifier: MIT

Math.E = 2.718281828459045;
Math.LN2 = 0.6931471805599453;
Math.LN10 = 2.302585092994046;
Math.LOG2E = 1.4426950408889634;
Math.LOG10E = 0.4342944819032518;
Math.PI = 3.141592653589793;
Math.SQRT1_2 = 0.7071067811865476;
Math.SQRT2 = 1.4142135623730951;

Math.hypot = function() {
	var y = 0.0;
	for(x of arguments) {
		y += x * x;
	};
	return Math.sqrt(y);
};

Math.max = function() {
	var y = -Infinity, x;
	for(x of arguments) {
		if(x > y) {
			y = x;
		};
	};
	return y;
};

Math.min = function() {
	var y = Infinity, x;
	for(x of arguments) {
		if(x < y) {
			y = x;
		};
	};
	return y;
};


