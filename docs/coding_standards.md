# C Coding Standards and Best Practices

## General Principles

1. **Write readable code** - Code is read more than it's written
2. **Be consistent** - Follow the same style throughout
3. **Keep it simple** - Avoid unnecessary complexity
4. **Comment wisely** - Explain why, not what

## Naming Conventions

### Variables and Functions
- Use **snake_case** for variables and functions
- Use descriptive names

```c
// Good
int student_count = 25;
float calculate_average(float scores[], int size);

// Bad
int sc = 25;
float calc(float s[], int n);
```

### Constants and Macros
- Use **UPPER_CASE** for constants and macros

```c
#define MAX_STUDENTS 100
#define PI 3.14159

const int BUFFER_SIZE = 256;
```

### Structure and Type Names
- Use **PascalCase** or **snake_case** with typedef

```c
// Method 1: PascalCase
typedef struct {
    char name[50];
    int age;
} Student;

// Method 2: snake_case
typedef struct {
    char name[50];
    int age;
} student_t;
```

## Code Formatting

### Indentation
- Use **4 spaces** (no tabs)
- Be consistent throughout the project

### Braces
- Use **Allman style** (braces on new line)

```c
// Good
if (condition)
{
    // code here
}

// Also acceptable (K&R style)
if (condition) {
    // code here
}
```

### Function Definitions

```c
// Function declaration
int calculate_sum(int array[], int size);

// Function definition
int calculate_sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
```

## Comments and Documentation

### File Header Comments

```c
/*
 * File: student_manager.c
 * Author: Your Name
 * Date: 2025-08-20
 * Description: Student management system with CRUD operations
 */
```

### Function Comments

```c
/*
 * Function: calculate_average
 * Purpose: Calculate the average of an array of numbers
 * Parameters:
 *   numbers[] - array of floating-point numbers
 *   count - number of elements in the array
 * Returns: Average value as float, or 0.0 if count is 0
 */
float calculate_average(float numbers[], int count)
{
    if (count == 0)
        return 0.0;
    
    float sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return sum / count;
}
```

### Inline Comments

```c
// Initialize variables
int total = 0;
int count = 0;

// Process each student record
for (int i = 0; i < MAX_STUDENTS; i++)
{
    if (students[i].is_active)  // Only count active students
    {
        total += students[i].score;
        count++;
    }
}
```

## Error Handling

### Check Return Values

```c
// Good
FILE *file = fopen("data.txt", "r");
if (file == NULL)
{
    fprintf(stderr, "Error: Cannot open file data.txt\n");
    return -1;
}

// Process file...
fclose(file);
```

### Use Meaningful Error Messages

```c
// Good
if (age < 0 || age > 150)
{
    fprintf(stderr, "Error: Invalid age %d. Age must be between 0 and 150.\n", age);
    return -1;
}

// Bad
if (age < 0 || age > 150)
{
    printf("Error\n");
    return -1;
}
```

## Memory Management

### Always Free Allocated Memory

```c
// Allocate memory
int *numbers = (int*)malloc(count * sizeof(int));
if (numbers == NULL)
{
    fprintf(stderr, "Error: Memory allocation failed\n");
    return -1;
}

// Use memory...

// Always free
free(numbers);
numbers = NULL;  // Prevent accidental reuse
```

### Check for NULL Pointers

```c
void process_data(int *data, int size)
{
    if (data == NULL || size <= 0)
    {
        fprintf(stderr, "Error: Invalid parameters\n");
        return;
    }
    
    // Process data...
}
```

## Variable Declarations

### Declare Variables at the Beginning

```c
int main()
{
    // Variable declarations
    int student_count;
    float average_score;
    char filename[100];
    
    // Code logic...
    return 0;
}
```

### Initialize Variables

```c
// Good
int count = 0;
float total = 0.0;
char buffer[256] = {0};

// Avoid uninitialized variables
int uninitialized_var;  // Dangerous!
```

## Control Structures

### Use Braces Even for Single Statements

```c
// Good
if (score >= 90)
{
    grade = 'A';
}

// Avoid (can lead to bugs)
if (score >= 90)
    grade = 'A';
```

### Prefer Early Returns

```c
// Good
int divide(int a, int b, float *result)
{
    if (b == 0)
    {
        return -1;  // Early return for error case
    }
    
    *result = (float)a / b;
    return 0;
}
```

## File Organization

### Header Guards

```c
// student.h
#ifndef STUDENT_H
#define STUDENT_H

// Header content...

#endif // STUDENT_H
```

### Include Order

```c
// System headers first
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Project headers next
#include "student.h"
#include "utils.h"
```

## Common Pitfalls to Avoid

1. **Buffer Overflows**
   ```c
   // Dangerous
   char buffer[10];
   strcpy(buffer, very_long_string);
   
   // Safe
   char buffer[10];
   strncpy(buffer, source, sizeof(buffer) - 1);
   buffer[sizeof(buffer) - 1] = '\0';
   ```

2. **Memory Leaks**
   ```c
   // Always pair malloc with free
   char *data = malloc(100);
   // ... use data ...
   free(data);
   data = NULL;
   ```

3. **Uninitialized Variables**
   ```c
   // Always initialize
   int count = 0;
   float sum = 0.0;
   ```

## Tools for Code Quality

- **Static Analysis**: Use tools like `cppcheck`
- **Formatting**: Use `clang-format` for consistent formatting
- **Memory Checking**: Use `valgrind` on Linux/Mac
- **Compiler Warnings**: Always compile with `-Wall -Wextra`

## Example: Well-Formatted Function

```c
/*
 * Function: find_student_by_id
 * Purpose: Search for a student by their ID number
 * Parameters:
 *   students[] - array of student structures
 *   count - number of students in the array
 *   id - student ID to search for
 * Returns: Pointer to student if found, NULL otherwise
 */
Student* find_student_by_id(Student students[], int count, int id)
{
    // Validate input parameters
    if (students == NULL || count <= 0 || id <= 0)
    {
        return NULL;
    }
    
    // Linear search through student array
    for (int i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            return &students[i];
        }
    }
    
    // Student not found
    return NULL;
}
```

Following these standards will make your code more readable, maintainable, and professional. Consistency is key!
