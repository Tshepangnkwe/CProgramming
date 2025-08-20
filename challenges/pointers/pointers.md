# Pointers Practice Problems

Complete these 20 practice problems to master C pointers. Write all programs from scratch and test them thoroughly.

## Instructions
- Create a separate C file for each problem
- Name your files: `pointers_01.c`, `pointers_02.c`, etc.
- Include comments explaining your logic
- Test with various inputs including edge cases
- Use proper C naming conventions (snake_case)

---

## Problem 1: Pointer Declaration and Initialization
**File:** `pointers_01.c`

**Description:** Declare and initialize a pointer, then display its value and address.

**Requirements:**
- Declare integer variable and pointer
- Show pointer address and value it points to
- Demonstrate pointer dereferencing

---

## Problem 2: Swap Numbers Using Pointers
**File:** `pointers_02.c`

**Description:** Swap two numbers using pointers (pass by reference).

**Requirements:**
- Create swap function using pointers
- Demonstrate before and after values
- Show that original variables are modified

---

## Problem 3: String Length Using Pointers
**File:** `pointers_03.c`

**Description:** Find the length of a string using pointers.

**Requirements:**
- Traverse string using pointer arithmetic
- Count characters until null terminator
- Compare with strlen() function

---

## Problem 4: String Reversal Using Pointers
**File:** `pointers_04.c`

**Description:** Reverse a string using pointers.

**Requirements:**
- Use two pointers (start and end)
- Swap characters while moving towards center
- Modify string in-place

---

## Problem 5: String Copy Using Pointers
**File:** `pointers_05.c`

**Description:** Copy one string to another using pointers.

**Requirements:**
- Use pointer arithmetic for copying
- Include null terminator
- Demonstrate both source and destination

---

## Problem 6: String Comparison Using Pointers
**File:** `pointers_06.c`

**Description:** Compare two strings using pointers.

**Requirements:**
- Return comparison result (0, positive, negative)
- Use pointer arithmetic for traversal
- Handle strings of different lengths

---

## Problem 7: Array Maximum Using Pointers
**File:** `pointers_07.c`

**Description:** Find the maximum value in an array using pointers.

**Requirements:**
- Pass array to function as pointer
- Use pointer arithmetic to traverse
- Return maximum value found

---

## Problem 8: Array Minimum Using Pointers
**File:** `pointers_08.c`

**Description:** Find the minimum value in an array using pointers.

**Requirements:**
- Pass array to function as pointer
- Use pointer arithmetic to traverse
- Return minimum value found

---

## Problem 9: Array Sorting Using Pointers
**File:** `pointers_09.c`

**Description:** Sort an array using pointers.

**Requirements:**
- Implement sorting algorithm with pointers
- Modify array in-place
- Use pointer arithmetic for swapping

---

## Problem 10: Array Search Using Pointers
**File:** `pointers_10.c`

**Description:** Search for an element in an array using pointers.

**Requirements:**
- Return pointer to found element or NULL
- Use linear search with pointer arithmetic
- Handle element not found case

---

## Problem 11: Vowel Counter Using Pointers
**File:** `pointers_11.c`

**Description:** Count vowels in a string using pointers.

**Requirements:**
- Traverse string using pointer arithmetic
- Check for both uppercase and lowercase vowels
- Return total count

---

## Problem 12: Array Sum Using Pointers
**File:** `pointers_12.c`

**Description:** Find the sum of array elements using pointers.

**Requirements:**
- Pass array and size to function
- Use pointer arithmetic for traversal
- Return sum of all elements

---

## Problem 13: Array Average Using Pointers
**File:** `pointers_13.c`

**Description:** Find the average of array elements using pointers.

**Requirements:**
- Calculate sum using pointers
- Return floating-point average
- Handle empty array case

---

## Problem 14: Array Merger Using Pointers
**File:** `pointers_14.c`

**Description:** Merge two arrays using pointers.

**Requirements:**
- Create function that takes two arrays
- Use pointer arithmetic for copying
- Return merged array

---

## Problem 15: Duplicate Removal Using Pointers
**File:** `pointers_15.c`

**Description:** Remove duplicates from an array using pointers.

**Requirements:**
- Use pointer arithmetic for comparison
- Modify array in-place
- Return new size of array

---

## Problem 16: Function Pointer Implementation
**File:** `pointers_16.c`

**Description:** Implement and use a function pointer.

**Requirements:**
- Create functions for basic operations
- Declare function pointer and assign functions
- Call functions through pointer

---

## Problem 17: Array Parameter Using Pointers
**File:** `pointers_17.c`

**Description:** Pass an array to a function using pointers.

**Requirements:**
- Demonstrate array as pointer parameter
- Show equivalence of array[i] and *(array+i)
- Modify array elements in function

---

## Problem 18: Structure Pointer Usage
**File:** `pointers_18.c`

**Description:** Pass a structure to a function using pointers.

**Requirements:**
- Define a structure (student, employee, etc.)
- Create function that takes structure pointer
- Modify structure members through pointer

---

## Problem 19: Pointer to Pointer
**File:** `pointers_19.c`

**Description:** Create a pointer to a pointer and demonstrate its usage.

**Requirements:**
- Declare double pointer
- Show different levels of indirection
- Modify values through double pointer

---

## Problem 20: Dynamic Memory Allocation
**File:** `pointers_20.c`

**Description:** Demonstrate dynamic memory allocation using pointers.

**Requirements:**
- Use malloc() to allocate memory
- Store and manipulate data in allocated memory
- Free memory using free()

---

## Testing Your Solutions

For each problem, test with:
1. **Valid inputs** - normal expected values
2. **Edge cases** - null pointers, empty arrays, single elements
3. **Invalid inputs** - null strings, uninitialized pointers
4. **Boundary conditions** - array bounds, memory limits
5. **Memory management** - proper allocation and deallocation

## Evaluation Criteria

Your solutions should demonstrate:
- [ ] Correct pointer declaration and initialization
- [ ] Proper pointer arithmetic usage
- [ ] Understanding of address-of (&) and dereference (*) operators
- [ ] Safe pointer usage (avoiding null pointer dereference)
- [ ] Appropriate use of const with pointers
- [ ] Clear and readable code with comments
- [ ] Meaningful variable names using snake_case

## Common Concepts to Practice

1. **Pointer Basics**: Declaration, initialization, dereferencing
2. **Pointer Arithmetic**: Moving through arrays and strings
3. **Pass by Reference**: Modifying variables through pointers
4. **Array-Pointer Relationship**: Arrays as pointers
5. **String Manipulation**: Working with character pointers
6. **Function Pointers**: Calling functions through pointers
7. **Dynamic Memory**: malloc(), free(), memory management

## Tips for Success

1. **Initialize Pointers**: Always initialize pointers before use
2. **Check for NULL**: Verify pointers are not null before dereferencing
3. **Use const**: Use const keyword when pointer shouldn't modify data
4. **Free Memory**: Always free dynamically allocated memory
5. **Pointer Arithmetic**: Be careful with pointer arithmetic bounds
6. **Debug Carefully**: Use debugger to trace pointer values

## Next Steps

After completing these problems:
1. Review your solutions for improvements
2. Practice with multi-dimensional arrays
3. Move on to Structures exercises
4. Practice combining pointers with other concepts

Remember: Programming is learned by doing. Write the code yourself, make mistakes, debug them, and learn from the process!
