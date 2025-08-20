#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// String utility functions
int string_length(const char *str);
void string_copy(char *dest, const char *src, int max_len);
int string_compare(const char *str1, const char *str2);
void string_reverse(char *str);
bool string_contains(const char *str, const char *substr);
void string_to_upper(char *str);
void string_to_lower(char *str);

// Array utility functions
void array_print_int(const int arr[], int size);
void array_print_float(const float arr[], int size);
int array_max_int(const int arr[], int size);
int array_min_int(const int arr[], int size);
float array_sum_int(const int arr[], int size);
float array_average_int(const int arr[], int size);
void array_reverse_int(int arr[], int size);
void array_sort_int(int arr[], int size);

// Math utility functions
int math_max(int a, int b);
int math_min(int a, int b);
int math_abs(int value);
int math_power(int base, int exponent);
int math_factorial(int n);
bool math_is_prime(int n);
int math_gcd(int a, int b);
int math_lcm(int a, int b);

// Input validation functions
bool is_valid_integer(const char *str);
bool is_valid_float(const char *str);
bool is_in_range(int value, int min, int max);
void safe_input_string(char *buffer, int max_len);
int safe_input_integer(int min, int max);

// Memory utility functions
void* safe_malloc(size_t size);
void* safe_calloc(size_t count, size_t size);
void safe_free(void **ptr);

// File utility functions
bool file_exists(const char *filename);
long file_size(const char *filename);
bool file_copy(const char *source, const char *dest);
int file_count_lines(const char *filename);

// Error handling macros
#define CHECK_NULL(ptr) \
    do { \
        if ((ptr) == NULL) { \
            fprintf(stderr, "Error: NULL pointer at %s:%d\n", __FILE__, __LINE__); \
            exit(EXIT_FAILURE); \
        } \
    } while(0)

#define CHECK_MALLOC(ptr) \
    do { \
        if ((ptr) == NULL) { \
            fprintf(stderr, "Error: Memory allocation failed at %s:%d\n", __FILE__, __LINE__); \
            exit(EXIT_FAILURE); \
        } \
    } while(0)

// Debug macros
#ifdef DEBUG
    #define DEBUG_PRINT(fmt, ...) \
        fprintf(stderr, "DEBUG: " fmt " (%s:%d)\n", ##__VA_ARGS__, __FILE__, __LINE__)
#else
    #define DEBUG_PRINT(fmt, ...)
#endif

// Constants
#define MAX_STRING_LENGTH 256
#define MAX_ARRAY_SIZE 1000
#define SUCCESS 0
#define ERROR -1

#endif // UTILS_H
