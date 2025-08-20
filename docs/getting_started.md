# Getting Started with C Programming

## Prerequisites

Before you begin, ensure you have the following installed:

### Windows
- **MinGW-w64** or **Microsoft Visual Studio** with C++ tools
- **VS Code** with C/C++ extension
- **Git** for version control

### Linux/Mac
- **GCC** compiler (usually pre-installed)
- **Make** build tool
- **VS Code** or any text editor

## Installation Guide

### Installing GCC on Windows
1. Download MinGW-w64 from [mingw-w64.org](https://www.mingw-w64.org/)
2. Add the bin directory to your PATH environment variable
3. Verify installation: `gcc --version`

### Installing GCC on Linux
```bash
# Ubuntu/Debian
sudo apt update
sudo apt install gcc build-essential

# CentOS/RHEL
sudo yum install gcc gcc-c++ make
```

### Installing GCC on Mac
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Or using Homebrew
brew install gcc
```

## Setting Up VS Code

1. Install VS Code from [code.visualstudio.com](https://code.visualstudio.com/)
2. Install the **C/C++** extension by Microsoft
3. Open the project folder in VS Code
4. Configure IntelliSense by pressing `Ctrl+Shift+P` and selecting "C/C++: Edit Configurations"

## Your First Program

Create a file called `hello.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Compile and Run

```bash
# Compile
gcc hello.c -o hello

# Run (Windows)
hello.exe

# Run (Linux/Mac)
./hello
```

## Project Workflow

1. **Write Code**: Create `.c` files in appropriate directories
2. **Compile**: Use `gcc` or the provided Makefile
3. **Test**: Run your programs and verify output
4. **Debug**: Use GDB or VS Code debugger for troubleshooting

## Debugging Setup

### Using GDB
```bash
# Compile with debug symbols
gcc -g program.c -o program

# Start debugger
gdb ./program
```

### VS Code Debugging
1. Create `.vscode/launch.json` for debug configuration
2. Set breakpoints by clicking line numbers
3. Press F5 to start debugging

## Common Commands

```bash
# Compile single file
gcc filename.c -o output

# Compile with warnings
gcc -Wall -Wextra filename.c -o output

# Compile with debug symbols
gcc -g filename.c -o output

# Compile multiple files
gcc file1.c file2.c -o output

# Include header directories
gcc -I./include source.c -o output
```

## Next Steps

1. Start with programs in `src/basics/`
2. Try challenges in `challenges/basics/`
3. Read the coding standards in `docs/coding_standards.md`
4. Explore advanced topics as you progress

Happy coding!
