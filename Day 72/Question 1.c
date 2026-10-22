/* Day 72 - Question 1: Read and display the contents of an existing file info.txt using fgets() */
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Could not open info.txt\n");
        return 1;
    }
    char line[200];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
