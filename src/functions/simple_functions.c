#include <stdio.h>

/*
 * File: simple_functions.c
 * Description: Demonstrates basic function definitions and usage in C
 */

// Function declarations (prototypes)
int add_numbers(int a, int b);
float calculate_circle_area(float radius);
int factorial(int n);
void print_multiplication_table(int num);
int is_prime(int n);

// Function definitions
int add_numbers(int a, int b) {
    return a + b;
}

float calculate_circle_area(float radius) {
    const float PI = 3.14159f;
    return PI * radius * radius;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);  // Recursive function
}

void print_multiplication_table(int num) {
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");
}

int is_prime(int n) {
    if (n <= 1) return 0;  // Not prime
    if (n <= 3) return 1;  // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return 0;  // Divisible by 2 or 3
    
    // Check for divisors from 5 onwards
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;  // Prime
}

int main() {
    printf("=== Function Demonstration ===\n\n");
    
    // Test addition function
    int num1 = 15, num2 = 25;
    int sum = add_numbers(num1, num2);
    printf("Addition: %d + %d = %d\n\n", num1, num2, sum);
    
    // Test circle area function
    float radius = 5.0f;
    float area = calculate_circle_area(radius);
    printf("Circle area (radius %.1f): %.2f\n\n", radius, area);
    
    // Test factorial function
    int fact_num = 6;
    int fact_result = factorial(fact_num);
    printf("Factorial of %d: %d\n\n", fact_num, fact_result);
    
    // Test multiplication table function
    print_multiplication_table(7);
    
    // Test prime checking function
    printf("Prime number checking:\n");
    for (int i = 10; i <= 20; i++) {
        if (is_prime(i)) {
            printf("%d is prime\n", i);
        } else {
            printf("%d is not prime\n", i);
        }
    }
    
    return 0;
}
