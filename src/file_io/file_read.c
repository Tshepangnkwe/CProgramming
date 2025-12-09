/**
 * file_read.c
 *
 * Demonstrates reading a text file line-by-line
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "sample.txt";
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("fopen");
        return 1;
    }

    char buffer[256];
    printf("Contents of %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), fp)) {
        fputs(buffer, stdout);
    }

    if (ferror(fp)) {
        perror("fgets");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}
