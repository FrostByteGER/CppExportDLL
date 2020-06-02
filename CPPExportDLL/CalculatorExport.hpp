#pragma once
#include "Calculator.hpp"


// Define a macro here that specifies that we want to export a function or class
// as plain C functions without name mangling
#ifndef LIBRARY_API
#define LIBRARY_API extern "C" __declspec(dllexport)
#endif

// We need to define Wrapper functions since direct C++ object instance -> C# object instance communication is not possible
LIBRARY_API Calculator* CreateCalculator();
LIBRARY_API void DisposeCalculator(Calculator* calculator);
LIBRARY_API double PerformCalculation_Double(Calculator* calculator, double a, double b, CalculationType calculationType);
LIBRARY_API int64_t PerformCalculation_Long(Calculator* calculator, int64_t a, int64_t b, CalculationType calculationType);