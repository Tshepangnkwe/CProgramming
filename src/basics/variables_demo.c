#include <stdio.h>

/*
 * File: variables_demo.c
 * Author: C Programming Tutorial
 * Description: Demonstrates different data types and variables in C
 */

int main() {
    // Integer variables
    int age = 25;
    int year = 2025;
    
    // Floating-point variables
    float height = 5.9f;
    double pi = 3.14159265359;
    
    // Character variables
    char grade = 'A';
    char initial = 'J';
    
    // String (array of characters)
    char name[] = "John Doe";
    
    // Boolean (using int, 0 = false, non-zero = true)
    int is_student = 1;  // true
    int has_license = 0; // false
    
    // Constants
    const int MAX_SCORE = 100;
    const float TAX_RATE = 0.08f;
    
    // Display all variables
    printf("=== Variable Demonstration ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);
    printf("PI (precise): %.10f\n", pi);
    printf("Is student: %s\n", is_student ? "Yes" : "No");
    printf("Maximum score: %d\n", MAX_SCORE);
    
    // Perform some calculations
    float bmi = 150.0f / (height * height);  // Simple BMI calculation
    int birth_year = year - age;
    
    printf("\n=== Calculations ===\n");
    printf("Approximate birth year: %d\n", birth_year);
    printf("Approximate BMI: %.2f\n", bmi);
    
    // Demonstrate type casting
    int int_pi = (int)pi;  // Cast double to int
    printf("PI as integer: %d\n", int_pi);
    
    return 0;
}
