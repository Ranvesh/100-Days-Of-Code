/* Day 76 - Question 1: Check if a file exists and display its content if it does */
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
