#include <stdio.h>

/*
 * File: array_basics.c
 * Description: Demonstrates basic array operations in C
 */

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int calculate_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Array declaration and initialization
    int numbers[] = {10, 25, 3, 48, 12, 67, 31, 9, 55, 21};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("=== Array Operations Demo ===\n");
    printf("Original array: ");
    print_array(numbers, size);
    printf("Array size: %d elements\n\n", size);
    
    // Find maximum element
    int max = find_max(numbers, size);
    printf("Maximum element: %d\n", max);
    
    // Calculate sum and average
    int sum = calculate_sum(numbers, size);
    float average = (float)sum / size;
    printf("Sum of elements: %d\n", sum);
    printf("Average: %.2f\n\n", average);
    
    // Access individual elements
    printf("=== Individual Element Access ===\n");
    printf("First element: %d\n", numbers[0]);
    printf("Last element: %d\n", numbers[size - 1]);
    printf("Third element: %d\n", numbers[2]);
    
    // Modify array elements
    printf("\n=== Array Modification ===\n");
    numbers[0] = 100;  // Change first element
    numbers[size - 1] = 200;  // Change last element
    
    printf("Modified array: ");
    print_array(numbers, size);
    
    // Search for an element
    int search_value = 48;
    int found_index = -1;
    
    for (int i = 0; i < size; i++) {
        if (numbers[i] == search_value) {
            found_index = i;
            break;
        }
    }
    
    printf("\n=== Array Search ===\n");
    if (found_index != -1) {
        printf("Element %d found at index %d\n", search_value, found_index);
    } else {
        printf("Element %d not found in array\n", search_value);
    }
    
    // Count even and odd numbers
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("\n=== Element Analysis ===\n");
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    
    return 0;
}
