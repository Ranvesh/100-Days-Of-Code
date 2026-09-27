/* Day 46 - Question 1: Remove all vowels from a string */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], res[100];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            res[j++] = str[i];
        }
    }
    res[j] = '\0';
    printf("Without vowels: %s", res);
    return 0;
}
