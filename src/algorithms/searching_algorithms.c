/**
 * searching_algorithms.c
 * 
 * Demonstrates common searching algorithms in C
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int linear_search(int arr[], int n, int target);
int binary_search(int arr[], int n, int target);
int binary_search_recursive(int arr[], int left, int right, int target);
int interpolation_search(int arr[], int n, int target);
int jump_search(int arr[], int n, int target);
void print_array(int arr[], int n);

// Helper functions
int min(int a, int b);

int main() {
    int arr[] = {11, 12, 22, 25, 34, 45, 50, 64, 88, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unsorted[] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50};
    int unsorted_n = sizeof(unsorted) / sizeof(unsorted[0]);
    
    printf("=== Searching Algorithms Demonstration ===\n\n");
    
    printf("Sorted array: ");
    print_array(arr, n);
    printf("\n");
    
    int target = 45;
    printf("Searching for: %d\n\n", target);
    
    // Linear Search (works on unsorted arrays)
    printf("1. Linear Search (on unsorted array):\n");
    printf("   Unsorted array: ");
    print_array(unsorted, unsorted_n);
    int result = linear_search(unsorted, unsorted_n, target);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found\n");
    }
    printf("\n");
    
    // Binary Search (requires sorted array)
    printf("2. Binary Search (iterative):\n");
    printf("   Sorted array: ");
    print_array(arr, n);
    result = binary_search(arr, n, target);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found\n");
    }
    printf("\n");
    
    // Binary Search Recursive
    printf("3. Binary Search (recursive):\n");
    printf("   Sorted array: ");
    print_array(arr, n);
    result = binary_search_recursive(arr, 0, n - 1, target);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found\n");
    }
    printf("\n");
    
    // Interpolation Search
    printf("4. Interpolation Search:\n");
    printf("   Sorted array: ");
    print_array(arr, n);
    result = interpolation_search(arr, n, target);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found\n");
    }
    printf("\n");
    
    // Jump Search
    printf("5. Jump Search:\n");
    printf("   Sorted array: ");
    print_array(arr, n);
    result = jump_search(arr, n, target);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found\n");
    }
    printf("\n");
    
    // Search for element not in array
    int not_found = 100;
    printf("6. Searching for element not in array (%d):\n", not_found);
    result = binary_search(arr, n, not_found);
    if (result != -1) {
        printf("   Element found at index: %d\n", result);
    } else {
        printf("   Element not found (as expected)\n");
    }
    
    return 0;
}

/**
 * Linear Search - O(n)
 * Sequentially checks each element
 * Works on unsorted arrays
 */
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/**
 * Binary Search - O(log n) iterative
 * Requires sorted array
 * Divides search space in half each iteration
 */
int binary_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

/**
 * Binary Search - O(log n) recursive
 * Requires sorted array
 */
int binary_search_recursive(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        if (arr[mid] > target) {
            return binary_search_recursive(arr, left, mid - 1, target);
        }
        
        return binary_search_recursive(arr, mid + 1, right, target);
    }
    
    return -1;
}

/**
 * Interpolation Search - O(log log n) for uniformly distributed data
 * Better than binary search for uniformly distributed sorted arrays
 */
int interpolation_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right && target >= arr[left] && target <= arr[right]) {
        if (left == right) {
            if (arr[left] == target) {
                return left;
            }
            return -1;
        }
        
        // Calculate position using interpolation formula
        int pos = left + ((target - arr[left]) * (right - left)) / 
                  (arr[right] - arr[left]);
        
        if (arr[pos] == target) {
            return pos;
        }
        
        if (arr[pos] < target) {
            left = pos + 1;
        } else {
            right = pos - 1;
        }
    }
    
    return -1;
}

/**
 * Jump Search - O(√n)
 * Requires sorted array
 * Jumps ahead by fixed steps, then does linear search
 */
int jump_search(int arr[], int n, int target) {
    int step = (int)sqrt(n);
    int prev = 0;
    
    // Find the block where element is present
    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += (int)sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }
    
    // Linear search in the block
    while (arr[prev] < target) {
        prev++;
        if (prev == min(step, n)) {
            return -1;
        }
    }
    
    // If element is found
    if (arr[prev] == target) {
        return prev;
    }
    
    return -1;
}

/**
 * Helper function: minimum of two numbers
 */
int min(int a, int b) {
    return (a < b) ? a : b;
}

/**
 * Print array elements
 */
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
