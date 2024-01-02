// Quantum Script Extension Math
// Copyright (c) 2016-2024 Grigore Stefan <g_stefan@yahoo.com>
// MIT License (MIT) <http://opensource.org/licenses/MIT>
// SPDX-FileCopyrightText: 2016-2024 Grigore Stefan <g_stefan@yahoo.com>
// SPDX-License-Identifier: MIT

#ifndef XYO_QUANTUMSCRIPT_EXTENSION_MATH_LIBRARY_HPP
#define XYO_QUANTUMSCRIPT_EXTENSION_MATH_LIBRARY_HPP

#ifndef XYO_QUANTUMSCRIPT_EXTENSION_MATH_DEPENDENCY_HPP
#	include <XYO/QuantumScript.Extension/Math/Dependency.hpp>
#endif

namespace XYO::QuantumScript::Extension::Math {

	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT void initExecutive(Executive *executive, void *extensionId);
	XYO_QUANTUMSCRIPT_EXTENSION_MATH_EXPORT void registerInternalExtension(Executive *executive);

};

#endif
