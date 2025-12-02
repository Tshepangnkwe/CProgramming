/**
 * for_loop_demo.c
 * 
 * Demonstrates various uses of for loops in C
 */

#include <stdio.h>

int main() {
    printf("=== For Loop Demonstrations ===\n\n");
    
    // Example 1: Basic for loop
    printf("1. Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 2: Counting backwards
    printf("2. Countdown from 10 to 1:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 3: Increment by 2
    printf("3. Even numbers from 0 to 10:\n");
    for (int i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 4: Multiplication table
    printf("4. Multiplication table of 5:\n");
    for (int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
    printf("\n");
    
    // Example 5: Nested for loops - pattern printing
    printf("5. Star pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Example 6: Sum of numbers
    printf("6. Sum of numbers from 1 to 10:\n");
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum = %d\n\n", sum);
    
    // Example 7: Factorial calculation
    printf("7. Factorial of 5:\n");
    int factorial = 1;
    for (int i = 1; i <= 5; i++) {
        factorial *= i;
    }
    printf("5! = %d\n\n", factorial);
    
    // Example 8: Infinite loop with break
    printf("8. Breaking out of loop at 3:\n");
    for (int i = 1; ; i++) {
        if (i > 3) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 9: Continue statement
    printf("9. Printing odd numbers (skipping even):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 10: Multiple variables in for loop
    printf("10. Multiple loop variables:\n");
    for (int i = 0, j = 10; i < 5; i++, j--) {
        printf("i=%d, j=%d\n", i, j);
    }
    
    return 0;
}
