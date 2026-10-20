/* Day 70 - Question 1: Convert a string to sentence case */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int cap_next = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (cap_next && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            cap_next = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            cap_next = 1;
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}
