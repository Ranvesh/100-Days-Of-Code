/* Day 46 - Question 2: Find the first repeating lowercase alphabet in a string */
#include <stdio.h>

int main() {
    char str[100];
    int seen[26] = {0};
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                printf("First repeating lowercase alphabet = %c\n", str[i]);
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }
    printf("No repeating lowercase alphabet found\n");
    return 0;
}
