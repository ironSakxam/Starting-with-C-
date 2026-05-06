# C++ OOP Practice Projects

This folder contains a collection of C++ practice programs and exercises. The examples are focused on C++ fundamentals, object-oriented programming concepts, control flow, and simple algorithms. The repository is designed for learning, experimenting, and building familiarity with Visual Studio Code and GCC tooling.

## OOP concepts covered

The examples include practice for core object-oriented programming ideas such as:

- Classes and objects
- Encapsulation and data hiding
- Constructors and destructors
- Inheritance and derived types
- Friend classes for controlled access across classes
- Polymorphism via functions and class structure
- Abstraction and reusable code design

These concepts are useful for building C++ programs that use structured, modular, and maintainable code.

## Friend class implementation

A friend class in C++ lets one class access another class's private or protected members when explicitly declared as a friend. This pattern is useful for closely related classes that need controlled access beyond public interfaces, such as helper or wrapper classes.

## What is included

- `hello.cpp` — basic console output example
- `sum.cpp` — adding numbers example
- `multiply.cpp` — multiplication logic example
- `equation.cpp` — simple math/equation handling
- `logics.cpp` — control flow and logic practice
- `cf.cpp` — conditional statements practice
- `students.cpp` — student-related data or object practice
- `practise*.cpp` — numbered practice exercises (`practise.cpp` through `practise14.cpp`)
- `CV_CR.cpp` — additional practice program in the workspace

Compiled binaries (`*.exe`) are present locally for testing, but the source files are the intended repository content.

## How to compile and run

From a terminal inside this folder, compile any `.cpp` source file using `g++`:

```bash
g++ -std=c++17 -g hello.cpp -o hello.exe
./hello.exe
```

Replace `hello.cpp` with the source file you want to build.

If you need to compile a file with a different name:

```bash
g++ -std=c++17 -g practise14.cpp -o practise14.exe
./practise14.exe
```

## VS Code workflow

This folder contains a `.vscode/tasks.json` configuration, including:

- `Build C++ active file` — compile the currently active C++ source file
- `Run C++ active executable` — build and run the executable for the active source file

Use `Run Task...` in VS Code to execute these tasks quickly.

## Recommended cleanup

Add a `.gitignore` file to keep build artifacts out of version control. Example contents:

```gitignore
*.exe
*.o
build/
.vscode/
```

Only commit `.cpp` source files and configuration files needed for development.

## Notes

- This repository is for learning and practice.
- Feel free to reuse and modify the examples as you continue building your C++ skills.
