// Quantum Script Extension Math
// Copyright (c) 2016-2023 Grigore Stefan <g_stefan@yahoo.com>
// MIT License (MIT) <http://opensource.org/licenses/MIT>
// SPDX-FileCopyrightText: 2016-2023 Grigore Stefan <g_stefan@yahoo.com>
// SPDX-License-Identifier: MIT

#ifndef XYO_QUANTUMSCRIPT_EXTENSION_MATH_VERSION_HPP
#define XYO_QUANTUMSCRIPT_EXTENSION_MATH_VERSION_HPP

#ifndef XYO_QUANTUMSCRIPT_EXTENSION_MATH_DEPENDENCY_HPP
#	include <XYO/QuantumScript.Extension/Math/Dependency.hpp>
#endif

namespace XYO::QuantumScript::Extension::Math::Version {

	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT const char *version();
	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT const char *build();
	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT const char *versionWithBuild();
	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT const char *datetime();

};

#endif
