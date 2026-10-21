/* Day 71 - Question 1: Create a text file info.txt and save user name and age into it */
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char name[100];
    int age;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n");
    return 0;
}
