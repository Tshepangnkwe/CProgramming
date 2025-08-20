#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdbool.h>

// ============================================================================
// SORTING ALGORITHMS
// ============================================================================

// Basic sorting algorithms
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int n);
void quick_sort(int arr[], int low, int high);
void heap_sort(int arr[], int n);

// Sorting utility functions
void sort_array_ascending(int arr[], int n);
void sort_array_descending(int arr[], int n);
bool is_sorted_ascending(const int arr[], int n);
bool is_sorted_descending(const int arr[], int n);

// ============================================================================
// SEARCHING ALGORITHMS
// ============================================================================

// Basic searching algorithms
int linear_search(const int arr[], int n, int target);
int binary_search(const int arr[], int n, int target);
int binary_search_recursive(const int arr[], int low, int high, int target);

// Advanced searching
int find_first_occurrence(const int arr[], int n, int target);
int find_last_occurrence(const int arr[], int n, int target);
int find_peak_element(const int arr[], int n);
int find_missing_number(const int arr[], int n);

// ============================================================================
// MATHEMATICAL ALGORITHMS
// ============================================================================

// Number theory
int gcd(int a, int b);
int lcm(int a, int b);
bool is_prime(int n);
void sieve_of_eratosthenes(bool prime[], int n);
int power(int base, int exponent);
int power_mod(int base, int exponent, int mod);

// Fibonacci and factorials
int fibonacci(int n);
int fibonacci_iterative(int n);
long long factorial(int n);
long long factorial_iterative(int n);

// ============================================================================
// STRING ALGORITHMS
// ============================================================================

// String matching
int naive_string_search(const char *text, const char *pattern);
void compute_lps_array(const char *pattern, int *lps);
int kmp_search(const char *text, const char *pattern);

// String manipulation
void reverse_string(char *str);
bool is_palindrome(const char *str);
bool is_anagram(const char *str1, const char *str2);
int count_words(const char *str);
void remove_duplicates(char *str);

// ============================================================================
// ARRAY ALGORITHMS
// ============================================================================

// Array manipulation
void reverse_array(int arr[], int n);
void rotate_array_left(int arr[], int n, int k);
void rotate_array_right(int arr[], int n, int k);
int remove_duplicates_sorted(int arr[], int n);
int remove_duplicates_unsorted(int arr[], int n);

// Subarray problems
int max_subarray_sum(const int arr[], int n);
int min_subarray_sum(const int arr[], int n);
bool has_subarray_with_sum(const int arr[], int n, int target_sum);
void print_all_subarrays(const int arr[], int n);

// Two pointer techniques
bool has_pair_with_sum(const int arr[], int n, int target_sum);
int count_pairs_with_sum(const int arr[], int n, int target_sum);
void find_triplet_with_sum(const int arr[], int n, int target_sum);

// ============================================================================
// MATRIX ALGORITHMS
// ============================================================================

// Matrix operations
void matrix_multiply(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int c2);
void matrix_transpose(int mat[][10], int result[][10], int rows, int cols);
bool matrix_search(int mat[][10], int rows, int cols, int target);
void matrix_spiral_print(int mat[][10], int rows, int cols);

// ============================================================================
// GRAPH ALGORITHMS (Basic)
// ============================================================================

#define MAX_VERTICES 100

// Graph representation
typedef struct Graph {
    int adj_matrix[MAX_VERTICES][MAX_VERTICES];
    int num_vertices;
} Graph;

// Graph functions
Graph* graph_create(int vertices);
void graph_add_edge(Graph *graph, int src, int dest);
void graph_dfs(Graph *graph, int start);
void graph_bfs(Graph *graph, int start);
bool graph_has_cycle(Graph *graph);
void graph_print(Graph *graph);

// ============================================================================
// DYNAMIC PROGRAMMING (Basic)
// ============================================================================

// Classic DP problems
int longest_common_subsequence(const char *str1, const char *str2);
int edit_distance(const char *str1, const char *str2);
int coin_change(int coins[], int n, int amount);
int knapsack_01(int weights[], int values[], int n, int capacity);

// ============================================================================
// UTILITY FUNCTIONS
// ============================================================================

// Array utilities for algorithms
void print_array(const int arr[], int n);
void copy_array(const int src[], int dest[], int n);
void fill_array(int arr[], int n, int value);
bool arrays_equal(const int arr1[], const int arr2[], int n);

// Performance measurement
void start_timer(void);
double get_elapsed_time(void);

// Random number generation
void seed_random(unsigned int seed);
int random_int(int min, int max);
void generate_random_array(int arr[], int n, int min, int max);

// Test data generation
void generate_sorted_array(int arr[], int n);
void generate_reverse_sorted_array(int arr[], int n);
void generate_nearly_sorted_array(int arr[], int n);

// Algorithm complexity helpers
void test_sorting_performance(void);
void test_searching_performance(void);
void benchmark_algorithm(void (*algorithm)(int[], int), int arr[], int n, const char *name);

#endif // ALGORITHMS_H
