//
// Quantum Script Extension Math
//
// Copyright (c) 2020 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_HPP
#define QUANTUM_SCRIPT_EXTENSION_MATH_HPP

#ifndef QUANTUM_SCRIPT_HPP
#include "quantum-script.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MATH__EXPORT_HPP
#include "quantum-script-extension-math--export.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_COPYRIGHT_HPP
#include "quantum-script-extension-math-copyright.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_LICENSE_HPP
#include "quantum-script-extension-math-license.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_VERSION_HPP
#include "quantum-script-extension-math-version.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Math {

				using namespace Quantum::Script;

				QUANTUM_SCRIPT_EXTENSION_MATH_EXPORT void initExecutive(Executive *executive, void *extensionId);
				QUANTUM_SCRIPT_EXTENSION_MATH_EXPORT void registerInternalExtension(Executive *executive);

#ifdef QUANTUM_SCRIPT_EXTENSION_MATH_SOURCE
				QUANTUM_SCRIPT_EXTENSION_MATH_EXPORT void setSource(const char *source);
#endif

			};
		};
	};
};

#endif

