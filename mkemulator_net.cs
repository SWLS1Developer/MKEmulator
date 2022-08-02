using System;
using System.Runtime.InteropServices;

namespace MKEmulator_CSharp
{
  
    public class Emulator
    {
        public const string CppFunctionsDLL = @"MKEmulator_.Net.dll";

        [DllImport(CppFunctionsDLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern void MoveMouse(int x, int y, int rounds, int wTime);

        [DllImport(CppFunctionsDLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern void EmulateKeyPress(char key_, int delay);
    }
}
