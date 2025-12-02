/**
 * recursion_demos.c
 * 
 * Demonstrates common recursive algorithms in C
 */

#include <stdio.h>

// Function prototypes
int factorial(int n);
int fibonacci(int n);
int gcd(int a, int b);
int power(int base, int exp);
void print_binary(int n);
int sum_of_digits(int n);
void reverse_string(char str[], int start, int end);
int sum_array(int arr[], int n);
void tower_of_hanoi(int n, char from, char to, char aux);

int main() {
    printf("=== Recursion Demonstrations ===\n\n");
    
    // Factorial
    printf("1. Factorial:\n");
    for (int i = 0; i <= 5; i++) {
        printf("   %d! = %d\n", i, factorial(i));
    }
    printf("\n");
    
    // Fibonacci
    printf("2. Fibonacci Sequence (first 10 terms):\n   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");
    
    // GCD
    printf("3. Greatest Common Divisor:\n");
    printf("   GCD(48, 18) = %d\n", gcd(48, 18));
    printf("   GCD(100, 50) = %d\n", gcd(100, 50));
    printf("   GCD(17, 19) = %d\n", gcd(17, 19));
    printf("\n");
    
    // Power
    printf("4. Power Calculation:\n");
    printf("   2^5 = %d\n", power(2, 5));
    printf("   3^4 = %d\n", power(3, 4));
    printf("   5^3 = %d\n", power(5, 3));
    printf("\n");
    
    // Binary representation
    printf("5. Binary Representation:\n");
    printf("   10 in binary: ");
    print_binary(10);
    printf("\n   25 in binary: ");
    print_binary(25);
    printf("\n   100 in binary: ");
    print_binary(100);
    printf("\n\n");
    
    // Sum of digits
    printf("6. Sum of Digits:\n");
    printf("   Sum of digits of 1234: %d\n", sum_of_digits(1234));
    printf("   Sum of digits of 9876: %d\n", sum_of_digits(9876));
    printf("\n");
    
    // Reverse string
    printf("7. String Reversal:\n");
    char str1[] = "Hello";
    printf("   Original: %s\n", str1);
    reverse_string(str1, 0, 4);
    printf("   Reversed: %s\n", str1);
    
    char str2[] = "Recursion";
    printf("   Original: %s\n", str2);
    reverse_string(str2, 0, 8);
    printf("   Reversed: %s\n", str2);
    printf("\n");
    
    // Sum of array
    printf("8. Sum of Array:\n");
    int arr[] = {1, 2, 3, 4, 5};
    printf("   Array: 1, 2, 3, 4, 5\n");
    printf("   Sum: %d\n\n", sum_array(arr, 5));
    
    // Tower of Hanoi
    printf("9. Tower of Hanoi (3 disks):\n");
    tower_of_hanoi(3, 'A', 'C', 'B');
    
    return 0;
}

/**
 * Factorial using recursion
 */
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

/**
 * Fibonacci number using recursion
 */
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * Greatest Common Divisor using Euclidean algorithm (recursive)
 */
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

/**
 * Power calculation using recursion
 */
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

/**
 * Print binary representation using recursion
 */
void print_binary(int n) {
    if (n > 1) {
        print_binary(n / 2);
    }
    printf("%d", n % 2);
}

/**
 * Sum of digits using recursion
 */
int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

/**
 * Reverse string using recursion
 */
void reverse_string(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call
    reverse_string(str, start + 1, end - 1);
}

/**
 * Sum of array elements using recursion
 */
int sum_array(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sum_array(arr, n - 1);
}

/**
 * Tower of Hanoi puzzle solution
 */
void tower_of_hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("   Move disk 1 from %c to %c\n", from, to);
        return;
    }
    
    tower_of_hanoi(n - 1, from, aux, to);
    printf("   Move disk %d from %c to %c\n", n, from, to);
    tower_of_hanoi(n - 1, aux, to, from);
}
