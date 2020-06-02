using System.Runtime.InteropServices;

namespace CSImportCPPDLL
{
    public static class MathLib
    {
        public static long Add(long a, long b)
        {
            return Add_Extern(a, b);
        }

        public static double Add(double a, double b)
        {
            return Add_Extern(a, b);
        }

        public static long Subtract(long a, long b)
        {
            return Subtract_Extern(a, b);
        }

        public static double Subtract(double a, double b)
        {
            return Subtract_Extern(a, b);
        }

        public static long Multiply(long a, long b)
        {
            return Multiply_Extern(a, b);
        }

        public static double Multiply(double a, double b)
        {
            return Multiply_Extern(a, b);
        }

        public static long Divide(long a, long b)
        {
            return Divide_Extern(a, b);
        }

        public static double Divide(double a, double b)
        {
            return Divide_Extern(a, b);
        }

        #region externs
        [DllImport("CPPExportDLL.dll", EntryPoint = "Add_Long")]
        private static extern long Add_Extern(long a, long b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Add_Double")]
        private static extern double Add_Extern(double a, double b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Subtract_Long")]
        private static extern long Subtract_Extern(long a, long b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Subtract_Double")]
        private static extern double Subtract_Extern(double a, double b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Multiply_Long")]
        private static extern long Multiply_Extern(long a, long b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Multiply_Double")]
        private static extern double Multiply_Extern(double a, double b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Divide_Long")]
        private static extern long Divide_Extern(long a, long b);

        [DllImport("CPPExportDLL.dll", EntryPoint = "Divide_Double")]
        private static extern double Divide_Extern(double a, double b);
        #endregion
    }
}