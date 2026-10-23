/* Day 73 - Question 1: Read a text file and count the total number of characters, words, and lines */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    int chars = 0, words = 0, lines = 0, in_word = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(fp);
    printf("Characters = %d, Words = %d, Lines = %d\n", chars, words, lines);
    return 0;
}
