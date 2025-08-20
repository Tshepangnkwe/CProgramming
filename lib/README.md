# C Programming Libraries

This directory contains compiled library files and documentation for the C Programming project.

## Available Libraries

### libutils.a
A static library containing utility functions for common programming tasks.

**Functions included:**
- String manipulation utilities
- Array processing functions
- Mathematical operations
- Input validation helpers
- Memory management utilities
- File operation helpers

**Usage:**
```bash
gcc -L./lib -I./include your_program.c -lutils -o your_program
```

## Building Libraries

To rebuild the libraries from source:

```bash
# Build utility library
cd src/
gcc -c utils.c -o utils.o
ar rcs ../lib/libutils.a utils.o

# Build data structures library
gcc -c data_structures.c -o data_structures.o
ar rcs ../lib/libdata_structures.a data_structures.o

# Build algorithms library
gcc -c algorithms.c -o algorithms.o
ar rcs ../lib/libalgorithms.a algorithms.o
```

## Linking Instructions

### Static Linking
```bash
# Link specific library
gcc -L./lib -I./include program.c -lutils -o program

# Link multiple libraries
gcc -L./lib -I./include program.c -lutils -ldata_structures -lalgorithms -o program
```

### Using Makefile
The project Makefile automatically handles library linking:
```bash
make program_name
```

## Library Documentation

### libutils.a
Contains general-purpose utility functions:
- `string_length()` - Calculate string length
- `array_max_int()` - Find maximum in integer array
- `safe_malloc()` - Safe memory allocation
- `file_exists()` - Check if file exists

### libdata_structures.a
Contains implementations of common data structures:
- Linked lists
- Stacks and queues
- Binary trees
- Hash tables
- Dynamic arrays

### libalgorithms.a
Contains algorithm implementations:
- Sorting algorithms (bubble, merge, quick, etc.)
- Searching algorithms (linear, binary)
- String algorithms (pattern matching)
- Mathematical algorithms (GCD, prime checking)

## Creating Your Own Libraries

1. **Write your functions** in `.c` files
2. **Create header files** with function declarations
3. **Compile to object files**: `gcc -c source.c -o source.o`
4. **Create static library**: `ar rcs libname.a object1.o object2.o`
5. **Use in projects**: `gcc -L./lib -I./include program.c -lname`

## Best Practices

- Keep related functions together in the same library
- Use descriptive names for library files
- Include comprehensive header files
- Document all public functions
- Test libraries thoroughly before distribution
- Version your libraries for compatibility

## Troubleshooting

### Common Issues

**Library not found:**
```bash
# Make sure library path is correct
gcc -L./lib -I./include program.c -lutils

# Check if library exists
ls -la lib/libutils.a
```

**Undefined symbols:**
```bash
# Make sure all required libraries are linked
gcc program.c -lutils -ldata_structures -lalgorithms

# Check library contents
ar -t lib/libutils.a
```

**Header not found:**
```bash
# Include header path
gcc -I./include program.c -lutils
```

For more detailed documentation, see the header files in the `include/` directory.
