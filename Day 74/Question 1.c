/* Day 74 - Question 1: Copy the contents of a source file to a destination file using fgetc() and fputc() */
#include <stdio.h>

int main() {
    char src_name[100], dest_name[100];
    printf("Enter source filename: ");
    scanf("%s", src_name);
    printf("Enter destination filename: ");
    scanf("%s", dest_name);

    FILE *src = fopen(src_name, "r");
    if (src == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }
    FILE *dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Cannot open destination file\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully\n");
    return 0;
}
