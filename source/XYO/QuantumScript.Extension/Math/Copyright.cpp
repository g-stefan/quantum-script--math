// Quantum Script Extension Math
// Copyright (c) 2016-2025 Grigore Stefan <g_stefan@yahoo.com>
// MIT License (MIT) <http://opensource.org/licenses/MIT>
// SPDX-FileCopyrightText: 2016-2025 Grigore Stefan <g_stefan@yahoo.com>
// SPDX-License-Identifier: MIT

#include <XYO/QuantumScript.Extension/Math/Copyright.hpp>
#include <XYO/QuantumScript.Extension/Math/Copyright.rh>

namespace XYO::QuantumScript::Extension::Math::Copyright {

	static const char *copyright_ = XYO_QUANTUMSCRIPT_EXTENSION_MATH_COPYRIGHT;
	static const char *publisher_ = XYO_QUANTUMSCRIPT_EXTENSION_MATH_PUBLISHER;
	static const char *company_ = XYO_QUANTUMSCRIPT_EXTENSION_MATH_COMPANY;
	static const char *contact_ = XYO_QUANTUMSCRIPT_EXTENSION_MATH_CONTACT;

	const char *copyright() {
		return copyright_;
	};

	const char *publisher() {
		return publisher_;
	};

	const char *company() {
		return company_;
	};

	const char *contact() {
		return contact_;
	};

};
