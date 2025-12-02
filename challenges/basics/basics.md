# Basics Challenges (Start Here!)

These fundamental challenges will help you master the basics of C programming. Start from Challenge 1 and work your way through!

## Level: Beginner

### Challenge 1: Hello World
**Difficulty:** ⭐  
**Objective:** Display "Hello, World!" to the console.

**Requirements:**
- Use `printf()` to output the message
- Include proper header files
- Program should compile without warnings

**Example Output:**
```
Hello, World!
```

---

### Challenge 2: Personal Introduction
**Difficulty:** ⭐  
**Objective:** Display your name, age, and favorite hobby.

**Requirements:**
- Use multiple `printf()` statements or format specifiers
- Display information on separate lines

**Example Output:**
```
Name: John Doe
Age: 20
Hobby: Programming
```

---

### Challenge 3: Simple Calculator - Addition
**Difficulty:** ⭐  
**Objective:** Add two integers and display the result.

**Requirements:**
- Declare two integer variables
- Calculate their sum
- Display the result with a descriptive message

**Example Output:**
```
5 + 3 = 8
```

---

### Challenge 4: User Input - Name
**Difficulty:** ⭐  
**Objective:** Ask the user for their name and greet them.

**Requirements:**
- Use `scanf()` or `fgets()` to read user input
- Store the name in a character array
- Display a personalized greeting

**Example Output:**
```
Enter your name: Alice
Hello, Alice! Welcome to C programming!
```

---

### Challenge 5: Integer Input and Output
**Difficulty:** ⭐  
**Objective:** Read an integer from the user and display it.

**Requirements:**
- Prompt user for input
- Use `scanf()` to read the integer
- Display the entered value

**Example Output:**
```
Enter a number: 42
You entered: 42
```

---

### Challenge 6: Basic Arithmetic Operations
**Difficulty:** ⭐⭐  
**Objective:** Perform all basic arithmetic operations on two numbers.

**Requirements:**
- Read two integers from user
- Calculate and display: addition, subtraction, multiplication, division, and modulus
- Handle division by zero appropriately

**Example Output:**
```
Enter first number: 10
Enter second number: 3
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3
10 % 3 = 1
```

---

### Challenge 7: Data Type Sizes
**Difficulty:** ⭐  
**Objective:** Display the size of different data types in bytes.

**Requirements:**
- Use `sizeof()` operator
- Display sizes for: char, int, float, double, long

**Example Output:**
```
Size of char: 1 bytes
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long: 8 bytes
```

---

### Challenge 8: Variable Swap
**Difficulty:** ⭐⭐  
**Objective:** Swap the values of two variables without using a third variable.

**Requirements:**
- Read two integers from user
- Swap their values using arithmetic operations
- Display values before and after swap

**Example Output:**
```
Enter first number: 5
Enter second number: 10
Before swap: a = 5, b = 10
After swap: a = 10, b = 5
```

---

### Challenge 9: Character ASCII Value
**Difficulty:** ⭐  
**Objective:** Display the ASCII value of a character.

**Requirements:**
- Read a character from user
- Display both the character and its ASCII value

**Example Output:**
```
Enter a character: A
Character: A
ASCII Value: 65
```

---

### Challenge 10: Temperature Converter
**Difficulty:** ⭐⭐  
**Objective:** Convert temperature from Celsius to Fahrenheit.

**Requirements:**
- Read temperature in Celsius
- Use formula: F = (C × 9/5) + 32
- Display result with 2 decimal places

**Example Output:**
```
Enter temperature in Celsius: 25
25.00°C = 77.00°F
```

---

### Challenge 11: Simple Interest Calculator
**Difficulty:** ⭐⭐  
**Objective:** Calculate simple interest.

**Requirements:**
- Read principal amount, rate of interest, and time period
- Calculate simple interest using: SI = (P × R × T) / 100
- Display the result

**Example Output:**
```
Enter principal amount: 1000
Enter rate of interest: 5
Enter time period (years): 2
Simple Interest: 100.00
```

---

### Challenge 12: Circle Area and Circumference
**Difficulty:** ⭐⭐  
**Objective:** Calculate area and circumference of a circle.

**Requirements:**
- Read radius from user
- Calculate area using: π × r²
- Calculate circumference using: 2 × π × r
- Use 3.14159 for π

**Example Output:**
```
Enter radius: 5
Area: 78.54
Circumference: 31.42
```

---

### Challenge 13: Even or Odd Check
**Difficulty:** ⭐  
**Objective:** Determine if a number is even or odd.

**Requirements:**
- Read an integer from user
- Use modulus operator to check
- Display appropriate message

**Example Output:**
```
Enter a number: 7
7 is odd
```

---

### Challenge 14: Bitwise Operations
**Difficulty:** ⭐⭐  
**Objective:** Perform bitwise operations on two numbers.

**Requirements:**
- Read two integers from user
- Display results of: AND, OR, XOR, left shift, right shift
- Show results in decimal format

**Example Output:**
```
Enter first number: 5
Enter second number: 3
5 & 3 = 1
5 | 3 = 7
5 ^ 3 = 6
5 << 1 = 10
5 >> 1 = 2
```

---

### Challenge 15: Rectangle Area and Perimeter
**Difficulty:** ⭐  
**Objective:** Calculate area and perimeter of a rectangle.

**Requirements:**
- Read length and width from user
- Calculate area and perimeter
- Display both results

**Example Output:**
```
Enter length: 10
Enter width: 5
Area: 50
Perimeter: 30
```

---

### Challenge 16: Type Casting Demo
**Difficulty:** ⭐⭐  
**Objective:** Demonstrate implicit and explicit type casting.

**Requirements:**
- Perform integer division and show result
- Perform float division and show result
- Demonstrate type casting from int to float and vice versa

**Example Output:**
```
Integer division: 7 / 2 = 3
Float division: 7.0 / 2.0 = 3.50
Int to float: 5 becomes 5.00
Float to int: 3.75 becomes 3
```

---

### Challenge 17: Increment and Decrement
**Difficulty:** ⭐⭐  
**Objective:** Demonstrate prefix and postfix increment/decrement operators.

**Requirements:**
- Use a variable and show pre-increment, post-increment
- Show pre-decrement, post-decrement
- Display values at each step

**Example Output:**
```
Initial value: 5
Post-increment (x++): 5, new value: 6
Pre-increment (++x): 7
Post-decrement (x--): 7, new value: 6
Pre-decrement (--x): 5
```

---

### Challenge 18: Logical Operators
**Difficulty:** ⭐⭐  
**Objective:** Demonstrate logical AND, OR, and NOT operators.

**Requirements:**
- Use two boolean conditions
- Display results of &&, ||, and ! operations
- Show truth table behavior

**Example Output:**
```
Condition 1: 1 (true)
Condition 2: 0 (false)
AND (&&): 0
OR (||): 1
NOT condition 1 (!): 0
NOT condition 2 (!): 1
```

---

### Challenge 19: Operator Precedence
**Difficulty:** ⭐⭐  
**Objective:** Demonstrate operator precedence in expressions.

**Requirements:**
- Evaluate: 2 + 3 * 4
- Evaluate: (2 + 3) * 4
- Evaluate: 10 / 2 + 3 * 2
- Show how parentheses change results

**Example Output:**
```
2 + 3 * 4 = 14
(2 + 3) * 4 = 20
10 / 2 + 3 * 2 = 11
```

---

### Challenge 20: Multi-Variable Input
**Difficulty:** ⭐⭐  
**Objective:** Read multiple variables in a single scanf statement.

**Requirements:**
- Read 3 integers in one scanf call
- Read a float and a character in another scanf
- Display all values with appropriate formatting

**Example Output:**
```
Enter three integers (space-separated): 10 20 30
Enter a float and a character (space-separated): 3.14 A
Numbers: 10, 20, 30
Float: 3.14
Character: A
```

---

## Tips for Success

1. **Compile Frequently:** Test your code after each small change
2. **Read Error Messages:** The compiler tells you what's wrong
3. **Use Comments:** Explain your logic to yourself
4. **Follow Standards:** Keep your code clean and readable
5. **Practice:** Try to solve each challenge without looking at solutions first

## Next Steps

After completing these challenges, move on to:
- **Control Flow Challenges** - Learn decision-making with if-else and switch
- **Loops Challenges** - Master repetition with for, while, and do-while loops

Happy Coding! 🚀
