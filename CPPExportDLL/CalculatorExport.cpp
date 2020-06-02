#include "CalculatorExport.hpp"
Calculator* CreateCalculator()
{
    return new Calculator();
}

void DisposeCalculator(Calculator* calculator)
{
    if (calculator != nullptr)
    {
        delete calculator;
        calculator = nullptr;
    }
}


double PerformCalculation_Double(Calculator* calculator, double a, double b, CalculationType calculationType)
{
    if (calculator != nullptr)
    {
        return calculator->PerformCalculation(a, b, calculationType);
    }
    return 0;
}

int64_t PerformCalculation_Long(Calculator* calculator, int64_t a, int64_t b, CalculationType calculationType)
{
    if (calculator != nullptr)
    {
        return calculator->PerformCalculation(a, b, calculationType);
    }
    return 0;
}