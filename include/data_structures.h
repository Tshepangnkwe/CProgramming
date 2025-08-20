#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdbool.h>

// ============================================================================
// LINKED LIST
// ============================================================================

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

typedef struct LinkedList {
    ListNode *head;
    int size;
} LinkedList;

// Linked list functions
LinkedList* list_create(void);
void list_destroy(LinkedList *list);
bool list_insert_front(LinkedList *list, int data);
bool list_insert_back(LinkedList *list, int data);
bool list_insert_at(LinkedList *list, int index, int data);
bool list_remove_front(LinkedList *list);
bool list_remove_back(LinkedList *list);
bool list_remove_at(LinkedList *list, int index);
int list_get(LinkedList *list, int index);
int list_find(LinkedList *list, int data);
void list_print(LinkedList *list);
bool list_is_empty(LinkedList *list);
int list_size(LinkedList *list);

// ============================================================================
// STACK
// ============================================================================

#define STACK_MAX_SIZE 100

typedef struct Stack {
    int data[STACK_MAX_SIZE];
    int top;
} Stack;

// Stack functions
Stack* stack_create(void);
void stack_destroy(Stack *stack);
bool stack_push(Stack *stack, int data);
bool stack_pop(Stack *stack, int *data);
bool stack_peek(Stack *stack, int *data);
bool stack_is_empty(Stack *stack);
bool stack_is_full(Stack *stack);
int stack_size(Stack *stack);
void stack_print(Stack *stack);

// ============================================================================
// QUEUE
// ============================================================================

#define QUEUE_MAX_SIZE 100

typedef struct Queue {
    int data[QUEUE_MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

// Queue functions
Queue* queue_create(void);
void queue_destroy(Queue *queue);
bool queue_enqueue(Queue *queue, int data);
bool queue_dequeue(Queue *queue, int *data);
bool queue_front(Queue *queue, int *data);
bool queue_is_empty(Queue *queue);
bool queue_is_full(Queue *queue);
int queue_size(Queue *queue);
void queue_print(Queue *queue);

// ============================================================================
// BINARY TREE
// ============================================================================

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct BinaryTree {
    TreeNode *root;
    int size;
} BinaryTree;

// Binary tree functions
BinaryTree* tree_create(void);
void tree_destroy(BinaryTree *tree);
bool tree_insert(BinaryTree *tree, int data);
bool tree_remove(BinaryTree *tree, int data);
bool tree_search(BinaryTree *tree, int data);
void tree_inorder(BinaryTree *tree);
void tree_preorder(BinaryTree *tree);
void tree_postorder(BinaryTree *tree);
int tree_height(BinaryTree *tree);
int tree_size(BinaryTree *tree);

// ============================================================================
// HASH TABLE
// ============================================================================

#define HASH_TABLE_SIZE 101

typedef struct HashEntry {
    int key;
    int value;
    bool is_occupied;
    bool is_deleted;
} HashEntry;

typedef struct HashTable {
    HashEntry entries[HASH_TABLE_SIZE];
    int size;
} HashTable;

// Hash table functions
HashTable* hash_table_create(void);
void hash_table_destroy(HashTable *table);
bool hash_table_insert(HashTable *table, int key, int value);
bool hash_table_remove(HashTable *table, int key);
bool hash_table_get(HashTable *table, int key, int *value);
bool hash_table_contains(HashTable *table, int key);
void hash_table_print(HashTable *table);
int hash_table_size(HashTable *table);

// ============================================================================
// DYNAMIC ARRAY
// ============================================================================

typedef struct DynamicArray {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// Dynamic array functions
DynamicArray* darray_create(int initial_capacity);
void darray_destroy(DynamicArray *array);
bool darray_push_back(DynamicArray *array, int data);
bool darray_pop_back(DynamicArray *array, int *data);
bool darray_insert_at(DynamicArray *array, int index, int data);
bool darray_remove_at(DynamicArray *array, int index);
int darray_get(DynamicArray *array, int index);
bool darray_set(DynamicArray *array, int index, int data);
int darray_find(DynamicArray *array, int data);
void darray_print(DynamicArray *array);
int darray_size(DynamicArray *array);
int darray_capacity(DynamicArray *array);
bool darray_is_empty(DynamicArray *array);

// ============================================================================
// COMMON STUDENT/EMPLOYEE STRUCTURES
// ============================================================================

typedef struct Student {
    int id;
    char name[50];
    int age;
    float marks;
    char grade;
} Student;

typedef struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
    int years_experience;
} Employee;

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Time {
    int hours;
    int minutes;
    int seconds;
} Time;

typedef struct Complex {
    float real;
    float imaginary;
} Complex;

typedef struct Point {
    float x;
    float y;
} Point;

typedef struct Rectangle {
    Point top_left;
    Point bottom_right;
} Rectangle;

// Helper functions for common structures
void student_print(const Student *student);
void employee_print(const Employee *employee);
void date_print(const Date *date);
void time_print(const Time *time);
void complex_print(const Complex *complex);
Complex complex_add(const Complex *a, const Complex *b);
Time time_add(const Time *a, const Time *b);
int date_compare(const Date *a, const Date *b);

#endif // DATA_STRUCTURES_H
