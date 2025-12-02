/**
 * do_while_loop_demo.c
 * 
 * Demonstrates various uses of do-while loops in C
 * Key difference: do-while always executes at least once
 */

#include <stdio.h>

int main() {
    printf("=== Do-While Loop Demonstrations ===\n\n");
    
    // Example 1: Basic do-while loop
    printf("1. Counting from 1 to 5:\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n\n");
    
    // Example 2: Menu-driven program
    printf("2. Simple menu system:\n");
    int choice;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("You selected Option 1\n");
                break;
            case 2:
                printf("You selected Option 2\n");
                break;
            case 3:
                printf("Exiting menu...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);
    printf("\n");
    
    // Example 3: Password verification
    printf("3. Password verification (password is '1234'):\n");
    int password;
    int attempts = 0;
    do {
        printf("Enter password: ");
        scanf("%d", &password);
        attempts++;
        if (password != 1234 && attempts < 3) {
            printf("Incorrect! Try again.\n");
        }
    } while (password != 1234 && attempts < 3);
    
    if (password == 1234) {
        printf("Access granted!\n\n");
    } else {
        printf("Access denied! Too many attempts.\n\n");
    }
    
    // Example 4: Sum until negative
    printf("4. Sum numbers until negative (demo with preset values):\n");
    int numbers[] = {5, 10, 15, 20, -1};
    int index = 0;
    int sum = 0;
    do {
        if (numbers[index] >= 0) {
            sum += numbers[index];
            printf("Added %d, sum = %d\n", numbers[index], sum);
        }
        index++;
    } while (numbers[index-1] >= 0);
    printf("Final sum: %d\n\n", sum);
    
    // Example 5: Guaranteed execution demo
    printf("5. Do-while executes at least once even when condition is false:\n");
    int condition = 0;
    do {
        printf("This prints even though condition is false!\n");
    } while (condition != 0);
    printf("\n");
    
    // Example 6: Factorial using do-while
    printf("6. Factorial of 5:\n");
    int n = 5;
    int factorial = 1;
    int temp = n;
    do {
        factorial *= temp;
        temp--;
    } while (temp > 0);
    printf("%d! = %d\n\n", n, factorial);
    
    // Example 7: Print digits of a number
    printf("7. Print digits of 12345:\n");
    int num = 12345;
    printf("Digits: ");
    do {
        printf("%d ", num % 10);
        num /= 10;
    } while (num > 0);
    printf("\n\n");
    
    // Example 8: Game loop simulation
    printf("8. Simple game loop (runs 3 times):\n");
    int round = 1;
    do {
        printf("Round %d - Game in progress...\n", round);
        round++;
    } while (round <= 3);
    printf("Game Over!\n\n");
    
    // Example 9: Input validation with do-while
    printf("9. Get number between 1 and 10:\n");
    int value;
    do {
        printf("Enter a number (1-10): ");
        scanf("%d", &value);
        if (value < 1 || value > 10) {
            printf("Invalid! Must be between 1 and 10.\n");
        }
    } while (value < 1 || value > 10);
    printf("Valid input: %d\n\n", value);
    
    // Example 10: Count down with do-while
    printf("10. Countdown from 5:\n");
    int countdown = 5;
    do {
        printf("%d... ", countdown);
        countdown--;
    } while (countdown > 0);
    printf("Blast off!\n");
    
    return 0;
}
