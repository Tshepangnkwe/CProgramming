/**
 * file_utils.c
 *
 * Small utility: copy file contents from one file to another
 */

#include <stdio.h>
#include <stdlib.h>

int copy_file(const char *src, const char *dst) {
    FILE *in = fopen(src, "r");
    if (!in) return -1;
    FILE *out = fopen(dst, "w");
    if (!out) { fclose(in); return -2; }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        if (fputc(ch, out) == EOF) {
            fclose(in); fclose(out); return -3;
        }
    }

    fclose(in);
    if (fclose(out) != 0) return -4;
    return 0;
}

#ifdef TEST_FILE_UTILS
int main(void) {
    const char *src = "sample.txt";
    const char *dst = "sample_copy.txt";
    int r = copy_file(src, dst);
    if (r != 0) {
        fprintf(stderr, "copy_file failed: %d\n", r);
        return 1;
    }
    printf("Copied %s -> %s\n", src, dst);
    return 0;
}
#endif
