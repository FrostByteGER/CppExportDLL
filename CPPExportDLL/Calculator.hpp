#pragma once
#include <cstdint>
#include "CalculationType.hpp"

// __declspec(dllexport) on a class exports all PUBLIC members and functions
class Calculator
{
public:
	Calculator() = default;
	~Calculator() = default;
	double PerformCalculation(double a, double b, CalculationType calculationType) const;
	int64_t PerformCalculation(int64_t a, int64_t b, CalculationType calculationType) const;
};