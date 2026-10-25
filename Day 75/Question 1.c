/* Day 75 - Question 1: Open an existing file in append mode and add a new line of text at the end */
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char text[200];
    printf("Enter line to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Text appended successfully\n");
    return 0;
}
