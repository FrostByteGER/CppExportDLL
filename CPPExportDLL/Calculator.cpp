#include "Calculator.hpp"
#include <iostream>
#include "Mathlib.hpp"


double Calculator::PerformCalculation(double a, double b, CalculationType calculationType) const
{
	switch (calculationType)
	{
	case CalculationType::Add:
		return MathLib::Add(a, b);
	case CalculationType::Subtract:
		return MathLib::Subtract(a, b);
	case CalculationType::Multiply:
		return MathLib::Multiply(a, b);
	case CalculationType::Divide:
		return MathLib::Divide(a, b);
	default:
		std::cout << "Unsupported Calculation Type: " << static_cast<int>(calculationType) << std::endl;
		return 0;
	}
}

int64_t Calculator::PerformCalculation(int64_t a, int64_t b, CalculationType calculationType) const
{
	switch (calculationType)
	{
	case CalculationType::Add:
		return MathLib::Add(a, b);
	case CalculationType::Subtract:
		return MathLib::Subtract(a, b);
	case CalculationType::Multiply:
		return MathLib::Multiply(a, b);
	case CalculationType::Divide:
		return MathLib::Divide(a, b);
	default:
		std::cout << "Unsupported Calculation Type!" << static_cast<int>(calculationType) << std::endl;
		return 0;
	}
}
