using System;

namespace CSImportCPPDLL
{
    class Program
    {
        static void Main(string[] args)
        {
            var calc = new Calculator();
            Console.WriteLine("Calculator Add: " + calc.PerformCalculation(32,32, CalculationType.Add));
            Console.WriteLine("MathLib Subtract: " + MathLib.Subtract(3.14, 3));
            Console.ReadLine();
        }
    }
}
