/**
 * file_write.c
 *
 * Demonstrates opening a file and writing text to it
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "sample.txt";
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        perror("fopen");
        return 1;
    }

    fprintf(fp, "Hello from C file I/O!\n");
    fprintf(fp, "Line 2: Writing to a file.\n");

    if (fclose(fp) != 0) {
        perror("fclose");
        return 1;
    }

    printf("Wrote to %s\n", filename);
    return 0;
}
