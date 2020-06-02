using System;
using System.Runtime.InteropServices;

namespace CSImportCPPDLL
{
    public enum CalculationType
    {
        Add,
        Subtract,
        Multiply,
        Divide
    }

    // Implement Disposable pattern to safely destroy our C# object as well as the C++ side object
    // This class is essentially a C# side wrapper around the C++ object. These wrappers often have no
    // other properties than the pointer.
    public class Calculator : IDisposable
    {
        // Pointer to our C++ Object
        private IntPtr _cppPtr;

        public Calculator()
        {
            // Create and link to C++ object
            _cppPtr = CreateCalculator();
        }

        public void Dispose()
        {
            // Destroy the C++ side object
            DisposeCalculator(_cppPtr);
            // Null our C# pointer just to be sure!
            _cppPtr = IntPtr.Zero;
        }

        public double PerformCalculation(double a, double b, CalculationType calculationType)
        {
            // Always pass the Pointer so the CLR knows what C++ object we point to!
            return PerformCalculation_Extern(_cppPtr, a, b, calculationType);
        }

        public long PerformCalculation(long a, long b, CalculationType calculationType)
        {
            return PerformCalculation_Extern(_cppPtr, a, b, calculationType);
        }

        #region externs
        [DllImport("CPPExportDLL.dll", EntryPoint = "CreateCalculator")]
        private static extern IntPtr CreateCalculator();

        [DllImport("CPPExportDLL.dll", EntryPoint = "DisposeCalculator")]
        private static extern void DisposeCalculator(IntPtr calculator);

        [DllImport("CPPExportDLL.dll", EntryPoint = "PerformCalculation_Double")]
        private static extern double PerformCalculation_Extern(IntPtr ptr, double a, double b, CalculationType calculationType);

        [DllImport("CPPExportDLL.dll", EntryPoint = "PerformCalculation_Long")]
        private static extern long PerformCalculation_Extern(IntPtr ptr, long a, long b, CalculationType calculationType);
        #endregion
    }


}