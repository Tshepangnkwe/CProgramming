/**
 * while_loop_demo.c
 * 
 * Demonstrates various uses of while loops in C
 */

#include <stdio.h>

int main() {
    printf("=== While Loop Demonstrations ===\n\n");
    
    // Example 1: Basic while loop
    printf("1. Counting from 1 to 5:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    
    // Example 2: Countdown
    printf("2. Countdown from 5 to 1:\n");
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n\n");
    
    // Example 3: Sum of numbers
    printf("3. Sum of numbers from 1 to 10:\n");
    int sum = 0;
    int num = 1;
    while (num <= 10) {
        sum += num;
        num++;
    }
    printf("Sum = %d\n\n", sum);
    
    // Example 4: Input validation
    printf("4. Input validation (enter a positive number):\n");
    int input = -1;
    printf("Enter a positive number: ");
    scanf("%d", &input);
    while (input < 0) {
        printf("Invalid! Enter a positive number: ");
        scanf("%d", &input);
    }
    printf("You entered: %d\n\n", input);
    
    // Example 5: Factorial using while
    printf("5. Factorial of 5:\n");
    int n = 5;
    int factorial = 1;
    int temp = n;
    while (temp > 0) {
        factorial *= temp;
        temp--;
    }
    printf("%d! = %d\n\n", n, factorial);
    
    // Example 6: Reverse a number
    printf("6. Reversing the number 12345:\n");
    int original = 12345;
    int reversed = 0;
    int digit;
    while (original > 0) {
        digit = original % 10;
        reversed = reversed * 10 + digit;
        original /= 10;
    }
    printf("Reversed: %d\n\n", reversed);
    
    // Example 7: Power calculation
    printf("7. Calculate 2^5:\n");
    int base = 2;
    int exponent = 5;
    int result = 1;
    int counter = 0;
    while (counter < exponent) {
        result *= base;
        counter++;
    }
    printf("%d^%d = %d\n\n", base, exponent, result);
    
    // Example 8: Break statement
    printf("8. Using break to exit loop:\n");
    int j = 1;
    while (j <= 10) {
        if (j == 6) {
            break;
        }
        printf("%d ", j);
        j++;
    }
    printf("\n\n");
    
    // Example 9: Continue statement
    printf("9. Skipping even numbers using continue:\n");
    int k = 0;
    while (k < 10) {
        k++;
        if (k % 2 == 0) {
            continue;
        }
        printf("%d ", k);
    }
    printf("\n\n");
    
    // Example 10: Sentinel controlled loop
    printf("10. Sentinel controlled loop (enter 0 to stop):\n");
    int value;
    int total = 0;
    printf("Enter numbers (0 to quit): ");
    scanf("%d", &value);
    while (value != 0) {
        total += value;
        printf("Enter numbers (0 to quit): ");
        scanf("%d", &value);
    }
    printf("Total sum: %d\n", total);
    
    return 0;
}
