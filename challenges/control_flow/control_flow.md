# Control Flow Practice Problems

Complete these 20 practice problems to master C control flow statements. Write all programs from scratch and test them thoroughly.

## Instructions

- Create a separate C file for each problem
- Name your files: `control_flow_01.c`, `control_flow_02.c`, etc.
- Include comments explaining your logic
- Test with various inputs including edge cases
- Use proper C naming conventions (snake_case)

---

## Problem 1: Number Classification
**File:** `control_flow_01.c`

**Description:** Write a program to check if a number is positive, negative, or zero.

**Requirements:**
- Read a number from user input
- Use if-else statements to classify the number
- Display appropriate message for each case

**Sample Output:**
```
Enter a number: -5
The number -5 is negative.
```

---

## Problem 2: Maximum of Three Numbers
**File:** `control_flow_02.c`

**Description:** Find the largest of three numbers using if-else statements.

**Requirements:**
- Read three numbers from user
- Compare using nested if-else or logical operators
- Handle cases where numbers are equal

**Sample Output:**
```
Enter three numbers: 15 23 8
The largest number is: 23
```

---

## Problem 3: Leap Year Checker
**File:** `control_flow_03.c`

**Description:** Check if a given year is a leap year.

**Requirements:**
- A year is leap if divisible by 4
- Exception: if divisible by 100, not leap unless also divisible by 400
- Test with various years

**Sample Output:**
```
Enter a year: 2024
2024 is a leap year.
```

---

## Problem 4: Number Sequence Generator
**File:** `control_flow_04.c`

**Description:** Print numbers from 1 to 100 using a loop.

**Requirements:**
- Use for, while, or do-while loop
- Display 10 numbers per line
- Test with different ranges

---

## Problem 5: Even Number Printer
**File:** `control_flow_05.c`

**Description:** Print even numbers between 1 and 50.

**Requirements:**
- Use loop with conditional check
- Alternative: use loop increment by 2
- Count and display total even numbers

---

## Problem 6: Odd Number Printer
**File:** `control_flow_06.c`

**Description:** Print odd numbers between 1 and 50.

**Requirements:**
- Use loop with conditional check
- Alternative: use loop increment by 2
- Count and display total odd numbers

---

## Problem 7: Factorial Calculator
**File:** `control_flow_07.c`

**Description:** Calculate the factorial of a number using a loop.

**Requirements:**
- Handle input validation (negative numbers)
- Use long long for large factorials
- Display step-by-step calculation

**Sample Output:**
```
Enter a number: 5
5! = 5 × 4 × 3 × 2 × 1 = 120
```

---

## Problem 8: Multiplication Table
**File:** `control_flow_08.c`

**Description:** Print the multiplication table of a given number.

**Requirements:**
- Display table from 1 to 10 (or user-specified range)
- Format output neatly
- Allow user to choose the number

**Sample Output:**
```
Multiplication table of 7:
7 × 1 = 7
7 × 2 = 14
...
7 × 10 = 70
```

---

## Problem 9: Sum of Digits
**File:** `control_flow_09.c`

**Description:** Find the sum of digits of a given number.

**Requirements:**
- Handle multi-digit numbers
- Use modulo and division operations
- Test with positive and negative numbers

**Sample Output:**
```
Enter a number: 1234
Sum of digits: 1 + 2 + 3 + 4 = 10
```

---

## Problem 10: Number Reverser
**File:** `control_flow_10.c`

**Description:** Reverse a given number.

**Requirements:**
- Handle multi-digit numbers
- Preserve leading zeros in output
- Test with palindromic numbers

**Sample Output:**
```
Enter a number: 1234
Reversed number: 4321
```

---

## Problem 11: Prime Number Checker
**File:** `control_flow_11.c`

**Description:** Check if a given number is prime.

**Requirements:**
- Optimize by checking up to square root
- Handle edge cases (1, 2, negative numbers)
- Display factors if not prime

**Sample Output:**
```
Enter a number: 17
17 is a prime number.
```

---

## Problem 12: Prime Number Generator
**File:** `control_flow_12.c`

**Description:** Print all prime numbers between 1 and 100.

**Requirements:**
- Use nested loops or function calls
- Display primes in rows of 10
- Count total prime numbers

---

## Problem 13: Palindrome Checker
**File:** `control_flow_13.c`

**Description:** Check if a given number is a palindrome.

**Requirements:**
- Compare original with reversed number
- Handle single-digit numbers
- Test with various palindromes

**Sample Output:**
```
Enter a number: 12321
12321 is a palindrome.
```

---

## Problem 14: Fibonacci Series Generator
**File:** `control_flow_14.c`

**Description:** Print Fibonacci series up to n terms.

**Requirements:**
- Use loop to generate sequence
- Handle edge cases (n=0, n=1)
- Allow user to specify number of terms

**Sample Output:**
```
Enter number of terms: 8
Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13
```

---

## Problem 15: GCD Calculator
**File:** `control_flow_15.c`

**Description:** Find the Greatest Common Divisor of two numbers.

**Requirements:**
- Implement Euclidean algorithm
- Handle edge cases (one number is zero)
- Display step-by-step calculation

**Sample Output:**
```
Enter two numbers: 48 18
GCD of 48 and 18 is: 6
```

---

## Problem 16: LCM Calculator
**File:** `control_flow_16.c`

**Description:** Find the Least Common Multiple of two numbers.

**Requirements:**
- Use relationship: LCM = (a*b)/GCD(a,b)
- Handle large numbers
- Validate input

**Sample Output:**
```
Enter two numbers: 12 18
LCM of 12 and 18 is: 36
```

---

## Problem 17: Digit Counter
**File:** `control_flow_17.c`

**Description:** Count the number of digits in a given number.

**Requirements:**
- Handle positive and negative numbers
- Use loop with division by 10
- Test with single and multi-digit numbers

**Sample Output:**
```
Enter a number: 12345
Number of digits: 5
```

---

## Problem 18: Power Calculator
**File:** `control_flow_18.c`

**Description:** Find the power of a number using a loop.

**Requirements:**
- Implement base^exponent without using pow()
- Handle negative exponents
- Use long long for large results

**Sample Output:**
```
Enter base and exponent: 2 8
2^8 = 256
```

---

## Problem 19: Armstrong Number Finder
**File:** `control_flow_19.c`

**Description:** Print all Armstrong numbers between 1 and 1000.

**Requirements:**
- Armstrong number: sum of cubes of digits equals the number
- Example: 153 = 1³ + 5³ + 3³
- Display each Armstrong number found

---

## Problem 20: Star Pattern Generator
**File:** `control_flow_20.c`

**Description:** Print a pyramid pattern of stars.

**Requirements:**
- Allow user to specify height
- Use nested loops for rows and columns
- Create both solid and hollow pyramids

**Sample Output:**
```
Enter height: 5
    *
   ***
  *****
 *******
*********
```

---

## Testing Your Solutions

For each problem, test with:
1. **Valid inputs** - normal expected values
2. **Edge cases** - zero, one, maximum values
3. **Invalid inputs** - negative numbers where inappropriate
4. **Boundary conditions** - minimum and maximum ranges
5. **Special cases** - palindromes, primes, perfect numbers

## Evaluation Criteria

Your solutions should demonstrate:
- [ ] Correct use of if-else statements
- [ ] Proper loop implementation (for, while, do-while)
- [ ] Logical operator usage (&&, ||, !)
- [ ] Input validation and error handling
- [ ] Efficient algorithms and optimizations
- [ ] Clear and readable code with comments
- [ ] Meaningful variable names using snake_case

## Common Concepts to Practice

1. **Conditional Statements**: if, else if, else, switch
2. **Loops**: for, while, do-while, nested loops
3. **Logical Operators**: &&, ||, ! for complex conditions
4. **Break and Continue**: Loop control statements
5. **Input Validation**: Checking user input validity
6. **Algorithm Design**: Step-by-step problem solving
7. **Mathematical Operations**: Modulo, division, powers

## Tips for Success

1. **Plan Before Coding**: Write pseudocode first
2. **Test Edge Cases**: Consider unusual inputs
3. **Use Descriptive Names**: Choose clear variable names
4. **Comment Complex Logic**: Explain non-obvious code
5. **Optimize When Possible**: Look for efficiency improvements
6. **Format Output Nicely**: Make programs user-friendly

## Next Steps

After completing these problems:
1. Review your solutions for improvements
2. Try different approaches to the same problem
3. Move on to Functions exercises
4. Practice combining control flow with arrays

Remember: Programming is learned by doing. Write the code yourself, make mistakes, debug them, and learn from the process!
