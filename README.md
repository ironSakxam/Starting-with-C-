# C++ OOP Practice Projects

This folder contains a set of C++ practice programs focused on object-oriented programming concepts and general C++ fundamentals. The examples are intended for learning, experimenting, and building familiarization with Visual Studio Code and GCC tooling.

## What is included

- `hello.cpp` - basic C++ program to print output
- `sum.cpp` - example for adding numbers
- `multiply.cpp` - example for multiplication logic
- `equation.cpp` - simple program for solving equations or math expressions
- `logics.cpp` - logic and control flow practice
- `cf.cpp` - conditional/flow control practice
- `practise.cpp` through `practise9.cpp` - additional practice exercises and examples

> Note: Compiled binaries (`*.exe`) are present in this folder for local testing, but only source files should be committed to GitHub. It is recommended to add a `.gitignore` entry for executables.

## How to compile and run

From a terminal in this folder, you can compile and run any source file using `g++`:

```bash
g++ -g hello.cpp -o hello.exe
./hello.exe
```

For a different file, replace `hello.cpp` with the target filename.

## Recommended VS Code workflow

If you are using Visual Studio Code, this folder already contains a `.vscode/tasks.json` configuration with the following tasks:

- `Build C++ active file` — compiles the currently active C++ source file
- `Run C++ active executable` — builds and runs the current file's executable

Use the `Run Task...` command or assign keyboard shortcuts to these tasks for faster development.

## Suggested improvements

- Add a `.gitignore` file to exclude compiled executables and build artifacts:

```gitignore
*.exe
*.o
build/
.vscode/
```

- Keep only `.cpp` source files in the repository for a clean commit history.

## License

This repository is for personal practice and learning. Feel free to reuse and modify the examples for your own studies.
