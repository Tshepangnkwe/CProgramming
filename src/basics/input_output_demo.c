#include <stdio.h>

/*
 * File: input_output_demo.c
 * Description: Demonstrates basic input and output operations in C
 */

int main() {
    // Variables to store user input
    char name[50];
    int age;
    float height;
    char grade;
    
    // Display welcome message
    printf("=== Personal Information System ===\n");
    printf("Please enter your information:\n\n");
    
    // Get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Safer than gets()
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height (in feet): ");
    scanf("%f", &height);
    
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);  // Space before %c to consume newline
    
    // Display the information
    printf("\n=== Your Information ===\n");
    printf("Name: %s", name);  // fgets includes newline
    printf("Age: %d years old\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Grade: %c\n", grade);
    
    // Perform some calculations and display
    int birth_year = 2025 - age;
    float height_cm = height * 30.48f;  // Convert feet to cm
    
    printf("\n=== Additional Information ===\n");
    printf("Approximate birth year: %d\n", birth_year);
    printf("Height in centimeters: %.1f cm\n", height_cm);
    
    // Grade evaluation
    printf("Grade evaluation: ");
    if (grade >= 'A' && grade <= 'D') {
        printf("Passing grade\n");
    } else if (grade == 'F') {
        printf("Failing grade\n");
    } else {
        printf("Invalid grade\n");
    }
    
    return 0;
}
