/* Day 77 - Question 1: Read text from input.txt, convert all lowercase letters to uppercase, and write to output.txt */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Cannot open input.txt\n");
        return 1;
    }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Cannot open output.txt\n");
        fclose(in);
        return 1;
    }
    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }
    fclose(in);
    fclose(out);
    printf("Converted text written to output.txt\n");
    return 0;
}
