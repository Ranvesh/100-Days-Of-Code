/* Day 49 - Question 2: Print initials of a name with the surname displayed in full */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') name[--len] = '\0';

    int last_space = -1;
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') last_space = i;
    }

    if (last_space == -1) {
        printf("%s\n", name);
        return 0;
    }

    if (name[0] != ' ') printf("%c. ", toupper(name[0]));
    for (int i = 1; i < last_space; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        }
    }
    printf("%s\n", &name[last_space + 1]);
    return 0;
}
