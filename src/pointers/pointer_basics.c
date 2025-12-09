/**
 * pointer_basics.c
 *
 * Basic pointer demonstrations: declaration, dereference, address-of
 */

#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a; // pointer to int

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Pointer p points to: %p\n", (void*)p);
    printf("Value via pointer *p: %d\n", *p);

    // modify via pointer
    *p = 25;
    printf("Modified a via pointer: %d\n", a);

    return 0;
}
