# Debugging Guide for C Programs

## Introduction

Debugging is an essential skill for every programmer. This guide covers various debugging techniques and tools available for C programming.

## Types of Errors

### 1. Compile-Time Errors
These errors occur during compilation and prevent the program from building.

**Common Examples:**
- Syntax errors
- Missing semicolons
- Undeclared variables
- Type mismatches

```c
// Example: Missing semicolon
int main() {
    printf("Hello, World!\n")  // Missing semicolon
    return 0;
}
```

### 2. Runtime Errors
These errors occur during program execution and may cause crashes.

**Common Examples:**
- Segmentation faults
- Division by zero
- Array index out of bounds
- Null pointer dereference

```c
// Example: Array out of bounds
int numbers[5];
numbers[10] = 42;  // Error: Index 10 is out of bounds
```

### 3. Logical Errors
These errors don't crash the program but produce incorrect results.

**Common Examples:**
- Wrong algorithm implementation
- Off-by-one errors
- Incorrect conditions

```c
// Example: Off-by-one error
for (int i = 0; i <= 10; i++) {  // Should be i < 10
    array[i] = i;
}
```

## Debugging Techniques

### 1. Print Debugging
Add printf statements to track program flow and variable values.

```c
#include <stdio.h>

int factorial(int n) {
    printf("DEBUG: factorial called with n = %d\n", n);
    
    if (n <= 1) {
        printf("DEBUG: base case reached, returning 1\n");
        return 1;
    }
    
    int result = n * factorial(n - 1);
    printf("DEBUG: factorial(%d) = %d\n", n, result);
    return result;
}
```

### 2. Assert Statements
Use assertions to check assumptions in your code.

```c
#include <assert.h>

void divide(int a, int b) {
    assert(b != 0);  // Program will abort if b is 0
    printf("Result: %d\n", a / b);
}
```

### 3. Defensive Programming
Add checks to prevent common errors.

```c
int safe_array_access(int array[], int size, int index) {
    // Check for null pointer
    if (array == NULL) {
        fprintf(stderr, "Error: Array is NULL\n");
        return -1;
    }
    
    // Check bounds
    if (index < 0 || index >= size) {
        fprintf(stderr, "Error: Index %d out of bounds [0, %d)\n", index, size);
        return -1;
    }
    
    return array[index];
}
```

## Using GDB (GNU Debugger)

### Basic GDB Commands

#### Compilation for Debugging
```bash
gcc -g -Wall program.c -o program
```

#### Starting GDB
```bash
gdb ./program
```

#### Essential GDB Commands
```gdb
(gdb) run                    # Start program execution
(gdb) break main             # Set breakpoint at main function
(gdb) break 15               # Set breakpoint at line 15
(gdb) next                   # Execute next line (step over)
(gdb) step                   # Execute next line (step into)
(gdb) continue               # Continue execution
(gdb) print variable_name    # Print variable value
(gdb) list                   # Show source code
(gdb) backtrace             # Show call stack
(gdb) quit                   # Exit GDB
```

### GDB Example Session

```c
// debug_example.c
#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
```

```bash
# Compile with debug symbols
gcc -g debug_example.c -o debug_example

# Start GDB
gdb ./debug_example

# GDB session
(gdb) break main
(gdb) run
(gdb) print num
(gdb) step
(gdb) print result
(gdb) continue
```

## VS Code Debugging

### Setting Up Debug Configuration

Create `.vscode/launch.json`:

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug C Program",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/program",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "preLaunchTask": "build"
        }
    ]
}
```

Create `.vscode/tasks.json`:

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "gcc",
            "args": [
                "-g",
                "-Wall",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```

### Using VS Code Debugger

1. **Set Breakpoints**: Click on line numbers
2. **Start Debugging**: Press F5
3. **Step Through Code**: F10 (step over), F11 (step into)
4. **Inspect Variables**: Hover over variables or use Debug Console

## Memory Debugging

### Using Valgrind (Linux/Mac)

```bash
# Compile with debug symbols
gcc -g -Wall program.c -o program

# Run with Valgrind
valgrind --leak-check=full ./program
```

### Common Memory Errors

#### 1. Memory Leaks
```c
// Bad: Memory leak
char *buffer = malloc(100);
// ... use buffer ...
// Missing free(buffer);

// Good: Proper cleanup
char *buffer = malloc(100);
// ... use buffer ...
free(buffer);
buffer = NULL;
```

#### 2. Use After Free
```c
// Bad: Use after free
char *ptr = malloc(100);
free(ptr);
strcpy(ptr, "hello");  // Error!

// Good: Set to NULL after free
char *ptr = malloc(100);
free(ptr);
ptr = NULL;
```

#### 3. Double Free
```c
// Bad: Double free
char *ptr = malloc(100);
free(ptr);
free(ptr);  // Error!

// Good: Check before freeing
if (ptr != NULL) {
    free(ptr);
    ptr = NULL;
}
```

## Static Analysis Tools

### Using Cppcheck
```bash
# Install cppcheck
sudo apt install cppcheck  # Linux
brew install cppcheck      # Mac

# Run analysis
cppcheck --enable=all program.c
```

### Compiler Warnings
```bash
# Enable all warnings
gcc -Wall -Wextra -Wpedantic program.c

# Treat warnings as errors
gcc -Wall -Werror program.c
```

## Common Debugging Scenarios

### Segmentation Fault
```c
// Common cause: Null pointer dereference
int *ptr = NULL;
*ptr = 42;  // Segmentation fault

// Debug approach:
// 1. Use GDB to find the exact line
// 2. Check all pointer usage
// 3. Verify array bounds
```

### Infinite Loop
```c
// Common cause: Wrong loop condition
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    // Missing i++; causes infinite loop
}

// Debug approach:
// 1. Add print statements inside loop
// 2. Check loop variables
// 3. Verify exit conditions
```

### Buffer Overflow
```c
// Common cause: Unsafe string operations
char buffer[10];
strcpy(buffer, "This string is too long");  // Buffer overflow

// Debug approach:
// 1. Use Valgrind to detect
// 2. Check buffer sizes
// 3. Use safe string functions (strncpy, snprintf)
```

## Best Practices

1. **Compile with Warnings**: Always use `-Wall -Wextra`
2. **Use Debug Symbols**: Compile with `-g` flag
3. **Initialize Variables**: Avoid uninitialized variable bugs
4. **Check Return Values**: Verify function calls succeed
5. **Use Memory Tools**: Valgrind, AddressSanitizer
6. **Test Edge Cases**: Boundary conditions, empty inputs
7. **Code Reviews**: Have others review your code

## Debugging Workflow

1. **Reproduce the Bug**: Create a minimal test case
2. **Understand the Problem**: Read error messages carefully
3. **Form Hypotheses**: What could be causing the issue?
4. **Test Hypotheses**: Use debugging tools to verify
5. **Fix the Bug**: Make minimal, targeted changes
6. **Verify the Fix**: Test thoroughly
7. **Prevent Regression**: Add tests if possible

## Tools Summary

| Tool | Platform | Purpose |
|------|----------|---------|
| GDB | Linux/Mac/Windows | Interactive debugging |
| Valgrind | Linux/Mac | Memory error detection |
| VS Code | All | IDE with debugging support |
| Cppcheck | All | Static code analysis |
| AddressSanitizer | All | Runtime error detection |

Remember: Good debugging skills come with practice. Don't be afraid to experiment with different tools and techniques!
