/* Day 43 - Question 2: Check if a string is a palindrome */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str), isPal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
