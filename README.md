# Mouse & Keyboard Emulator

MKEmulator is a library that is written in C++ to send keys or mouse moves to any game or application.
## Installation (C#)

Download and put the .dll inside your project file. Then add this code into your app.
```csharp
 public const string EmulatorDLL = @"MKEmulator_.Net.dll";

        [DllImport(EmulatorDLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern void MoveMouse(int x, int y, int rounds, int wTime);

        [DllImport(EmulatorDLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern void EmulateKeyPress(char key_, int delay);
```

## Usage

Move Mouse Function
```csharp
          MKEmulator_CSharp.Emulator.MoveMouse(-900, 0, 8, 50);
```
Emulate Key Press Function
```csharp
    MKEmulator_CSharp.Emulator.EmulateKeyPress(Char.Parse("w"), 30 * 1000);
```

## How to use in VB.NET
Like C# add MKEmulator_.Net.dll to your project file and also add MKEmulator_CSharp.dll as a reference file.
