/**
 * sorting_algorithms.c
 * 
 * Demonstrates common sorting algorithms in C
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void quick_sort(int arr[], int low, int high);
void merge_sort(int arr[], int left, int right);
void print_array(int arr[], int n);
void copy_array(int source[], int dest[], int n);

// Helper functions for quick sort
int partition(int arr[], int low, int high);

// Helper functions for merge sort
void merge(int arr[], int left, int mid, int right);

int main() {
    int original[] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50};
    int n = sizeof(original) / sizeof(original[0]);
    int arr[10];
    
    printf("=== Sorting Algorithms Demonstration ===\n\n");
    
    printf("Original array: ");
    print_array(original, n);
    printf("\n");
    
    // Bubble Sort
    copy_array(original, arr, n);
    printf("1. Bubble Sort:\n");
    printf("   Before: ");
    print_array(arr, n);
    bubble_sort(arr, n);
    printf("   After:  ");
    print_array(arr, n);
    printf("\n");
    
    // Selection Sort
    copy_array(original, arr, n);
    printf("2. Selection Sort:\n");
    printf("   Before: ");
    print_array(arr, n);
    selection_sort(arr, n);
    printf("   After:  ");
    print_array(arr, n);
    printf("\n");
    
    // Insertion Sort
    copy_array(original, arr, n);
    printf("3. Insertion Sort:\n");
    printf("   Before: ");
    print_array(arr, n);
    insertion_sort(arr, n);
    printf("   After:  ");
    print_array(arr, n);
    printf("\n");
    
    // Quick Sort
    copy_array(original, arr, n);
    printf("4. Quick Sort:\n");
    printf("   Before: ");
    print_array(arr, n);
    quick_sort(arr, 0, n - 1);
    printf("   After:  ");
    print_array(arr, n);
    printf("\n");
    
    // Merge Sort
    copy_array(original, arr, n);
    printf("5. Merge Sort:\n");
    printf("   Before: ");
    print_array(arr, n);
    merge_sort(arr, 0, n - 1);
    printf("   After:  ");
    print_array(arr, n);
    printf("\n");
    
    return 0;
}

/**
 * Bubble Sort - Simple but inefficient O(n^2)
 * Repeatedly steps through the list, compares adjacent elements and swaps them if needed
 */
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * Selection Sort - O(n^2)
 * Finds the minimum element and places it at the beginning
 */
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap minimum element with first element
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

/**
 * Insertion Sort - O(n^2) but efficient for small data sets
 * Builds final sorted array one item at a time
 */
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/**
 * Quick Sort - O(n log n) average case
 * Divide and conquer algorithm
 */
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

/**
 * Partition function for Quick Sort
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}

/**
 * Merge Sort - O(n log n) guaranteed
 * Stable divide and conquer algorithm
 */
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

/**
 * Merge function for Merge Sort
 */
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
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

/**
 * Copy array from source to destination
 */
void copy_array(int source[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
}
