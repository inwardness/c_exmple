
one time:  
        install a C/C++ complier, add to PATH environment variable  
        install C/C++ plugin for visual studio code  
        tell visual studio code where the compiler is and what is the short cut to build and run  
           these are files under ".vscode" (see below)
    every project:  
        crate a project  
        build project  
        run project  
        {
  "configurations": [
    {
      "name": "C/C++: gcc.exe build and debug active file",
      "type": "cppdbg",
      "request": "launch",
      "program": "d:\\kobets\\c_exmple\\Kernighan&Ritchie_examples\\",
      "args": [],
      "stopAtEntry": false,
      "cwd": "d:\\kobets\\MSYS2\\ucrt64\\bin\\",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "miDebuggerPath": "d:\\kobets\\MSYS2\\ucrt64\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        },
        {
          "description": "Set Disassembly Flavor to Intel",
          "text": "-gdb-set disassembly-flavor intel",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "C/C++: gcc.exe build active file"
    },
    {
      "name": "C/C++ Runner: Debug Session",
      "type": "cppdbg",
      "request": "launch",
      "args": [],
      "stopAtEntry": false,
      "externalConsole": true,
      "cwd": "d:/kobets/c_exmple/Kernighan&Ritchie_examples",
      "program": "d:/kobets/c_exmple/Kernighan&Ritchie_examples/build/Debug/outDebug",
      "MIMode": "gdb",
      "miDebuggerPath": "d:\\kobets\\MSYS2\\ucrt64\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ]
    }
  ],
  "version": "2.0.0"
}