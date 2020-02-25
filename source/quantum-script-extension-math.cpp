//
// Quantum Script Extension Math
//
// Copyright (c) 2020 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "quantum-script-extension-math-license.hpp"
#include "quantum-script-extension-math.hpp"
#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_NO_VERSION
#include "quantum-script-extension-math-version.hpp"
#endif

#include "quantum-script-variablenumber.hpp"

#include "quantum-script-extension-math.src"

//#define QUANTUM_SCRIPT_VM_DEBUG_RUNTIME

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Math {

				using namespace XYO;
				using namespace Quantum::Script;

				static TPointer<Variable> mathAbs(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-abs\n");
#endif
					return VariableNumber::newVariable(fabs((arguments->index(0))->toNumber()));
				};


				static TPointer<Variable> mathAcos(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-acos\n");
#endif
					return VariableNumber::newVariable(acos((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAcosh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-acosh\n");
#endif
					return VariableNumber::newVariable(acosh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAsin(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-asin\n");
#endif
					return VariableNumber::newVariable(asin((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAsinh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-asinh\n");
#endif
					return VariableNumber::newVariable(asinh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAtan(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-atan\n");
#endif
					return VariableNumber::newVariable(atan((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAtanh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-atanh\n");
#endif
					return VariableNumber::newVariable(atanh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathAtan2(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-atan2\n");
#endif
					return VariableNumber::newVariable(atan2((arguments->index(0))->toNumber(), (arguments->index(1))->toNumber()));
				};

				static TPointer<Variable> mathCbrt(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-cbrt\n");
#endif
					return VariableNumber::newVariable(cbrt((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathCeil(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-ceil\n");
#endif
					return VariableNumber::newVariable(ceil((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathCos(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-cos\n");
#endif
					return VariableNumber::newVariable(cos((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathCosh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-cosh\n");
#endif
					return VariableNumber::newVariable(cosh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathExp(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-exp\n");
#endif
					return VariableNumber::newVariable(exp((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathExpm1(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-expm1\n");
#endif
					return VariableNumber::newVariable(expm1((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathFloor(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-floor\n");
#endif
					return VariableNumber::newVariable(floor((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathImul(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-imul\n");
#endif
					return VariableNumber::newVariable(((Integer)((arguments->index(0))->toNumber())) * (((Integer)((arguments->index(1))->toNumber()))));
				};

				static TPointer<Variable> mathLog(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-log\n");
#endif
					return VariableNumber::newVariable(log((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathLog1p(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-log1p\n");
#endif
					return VariableNumber::newVariable(log1p((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathLog10(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-log10\n");
#endif
					return VariableNumber::newVariable(log10((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathLog2(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-log2\n");
#endif
					return VariableNumber::newVariable(log2((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathPow(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-pow\n");
#endif
					return VariableNumber::newVariable(pow((arguments->index(0))->toNumber(), (arguments->index(1))->toNumber()));
				};

				static TPointer<Variable> mathRandom(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-random\n");
#endif
					return VariableNumber::newVariable(((Number)rand()) / (RAND_MAX + 1.0));
				};

				static TPointer<Variable> mathRound(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-round\n");
#endif
					return VariableNumber::newVariable(round((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathSign(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-sign\n");
#endif
					Number value = (arguments->index(0))->toNumber();
					if(isnan(value)) {
						return VariableNumber::newVariable(NAN);
					};
					if(value < 0.0) {
						return VariableNumber::newVariable(-1);
					};
					if(value > 0.0) {
						return VariableNumber::newVariable(1);
					};
					return VariableNumber::newVariable(0);
				};

				static TPointer<Variable> mathSin(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-sin\n");
#endif
					return VariableNumber::newVariable(sin((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathSinh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-sinh\n");
#endif
					return VariableNumber::newVariable(sinh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathSqrt(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-sqrt\n");
#endif
					return VariableNumber::newVariable(sqrt((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathTan(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-tan\n");
#endif
					return VariableNumber::newVariable(tan((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathTanh(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-tanh\n");
#endif
					return VariableNumber::newVariable(tanh((arguments->index(0))->toNumber()));
				};

				static TPointer<Variable> mathTrunc(VariableFunction *function, Variable *this_, VariableArray *arguments) {
#ifdef QUANTUM_SCRIPT_DEBUG_RUNTIME
					printf("- math-trunc\n");
#endif
					return VariableNumber::newVariable(trunc((arguments->index(0))->toNumber()));
				};

				void registerInternalExtension(Executive *executive) {
					executive->registerInternalExtension("Math", initExecutive);
				};

				void initExecutive(Executive *executive, void *extensionId) {
					srand (static_cast <unsigned> (time(nullptr)));

					String info = "Math\r\n";
					info << License::shortContent();

					executive->setExtensionName(extensionId, "Math");
					executive->setExtensionInfo(extensionId, info);
#ifndef QUANTUM_SCRIPT_EXTENSION_MATH_NO_VERSION
					executive->setExtensionVersion(extensionId, Extension::Math::Version::versionWithBuild());
#endif
					executive->setExtensionPublic(extensionId, true);

					executive->compileStringX("Math={};");
					executive->setFunction2("Math.abs(x)", mathAbs);
					executive->setFunction2("Math.acos(x)", mathAcos);
					executive->setFunction2("Math.acosh(x)", mathAcosh);
					executive->setFunction2("Math.asin(x)", mathAsin);
					executive->setFunction2("Math.asinh(x)", mathAsinh);
					executive->setFunction2("Math.atan(x)", mathAtan);
					executive->setFunction2("Math.atanh(x)", mathAtanh);
					executive->setFunction2("Math.atan2(y,x)", mathAtan2);
					executive->setFunction2("Math.cbrt(x)", mathCbrt);
					executive->setFunction2("Math.ceil(x)", mathCeil);
					executive->setFunction2("Math.cos(x)", mathCos);
					executive->setFunction2("Math.cosh(x)", mathCosh);
					executive->setFunction2("Math.exp(x)", mathExp);
					executive->setFunction2("Math.expm1(x)", mathExpm1);
					executive->setFunction2("Math.floor(x)", mathFloor);
					executive->setFunction2("Math.imul(x,y)", mathImul);
					executive->setFunction2("Math.log(x)", mathLog);
					executive->setFunction2("Math.log1p(x)", mathLog1p);
					executive->setFunction2("Math.log10(x)", mathLog10);
					executive->setFunction2("Math.log2(x)", mathLog2);
					executive->setFunction2("Math.pow(x,y)", mathPow);
					executive->setFunction2("Math.random()", mathRandom);
					executive->setFunction2("Math.round(x)", mathRound);
					executive->setFunction2("Math.sign(x)", mathSign);
					executive->setFunction2("Math.sin(x)", mathSin);
					executive->setFunction2("Math.sinh(x)", mathSinh);
					executive->setFunction2("Math.sqrt(x)", mathSqrt);
					executive->setFunction2("Math.tan(x)", mathTan);
					executive->setFunction2("Math.tanh(x)", mathTanh);
					executive->setFunction2("Math.trunc(x)", mathTrunc);
					executive->compileStringX(extensionMathSource);
				};


			};
		};
	};
};

#ifdef XYO_COMPILE_DYNAMIC_LIBRARY
extern "C" QUANTUM_SCRIPT_EXTENSION_MATH_EXPORT void quantumScriptExtension(Quantum::Script::Executive *executive, void *extensionId) {
	Quantum::Script::Extension::Math::initExecutive(executive, extensionId);
};
#endif

