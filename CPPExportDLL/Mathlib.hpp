#pragma once
#include <cstdint>

///////////////////////////////////////
/// Internal API functions
///////////////////////////////////////
namespace MathLib
{
	inline int64_t Add(int64_t a, int64_t b)
	{
		return a + b;
	}


	inline double Add(double a, double b)
	{
		return a + b;
	}

	inline int64_t Subtract(int64_t a, int64_t b)
	{
		return a - b;
	}

	inline double Subtract(double a, double b)
	{
		return a - b;
	}

	inline int64_t Multiply(int64_t a, int64_t b)
	{
		return a * b;
	}

	inline double Multiply(double a, double b)
	{
		return a * b;
	}

	inline int64_t Divide(int64_t a, int64_t b)
	{
		return a / b;
	}

	inline double Divide(double a, double b)
	{
		return a / b;
	}
}

// Define a macro here that specifies that we want to export a function or class
// as plain C functions without name mangling
#ifndef LIBRARY_API
#define LIBRARY_API extern "C" __declspec(dllexport)
#endif

///////////////////////////////////////
/// External API functions
///////////////////////////////////////
namespace MathLibExport
{
	// __declspec(dllexport) on a function exports only it
	extern "C" __declspec(dllexport) inline int64_t Add_Long(int64_t a, int64_t b)
	{
		return MathLib::Add(a, b);
	}

	// Export function with a nice macro instead of the ugly __declspec code
	LIBRARY_API inline double Add_Double(double a, double b)
	{
		return MathLib::Add(a, b);
	}

	LIBRARY_API inline int64_t Subtract_Long(int64_t a, int64_t b)
	{
		return MathLib::Subtract(a, b);
	}

	LIBRARY_API inline double Subtract_Double(double a, double b)
	{
		return MathLib::Subtract(a, b);
	}

	LIBRARY_API inline int64_t Multiply_Long(int64_t a, int64_t b)
	{
		return MathLib::Multiply(a, b);
	}

	LIBRARY_API inline double Multiply_Double(double a, double b)
	{
		return MathLib::Multiply(a, b);
	}

	LIBRARY_API inline int64_t Divide_Long(int64_t a, int64_t b)
	{
		return MathLib::Divide(a, b);
	}

	LIBRARY_API inline double Divide_Double(double a, double b)
	{
		return MathLib::Divide(a, b);
	}
}