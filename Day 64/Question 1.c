/* Day 64 - Question 1: Find the length of the longest substring without repeating characters */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    scanf("%s", s);
    int n = strlen(s), max_len = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) break;
            visited[(unsigned char)s[j]] = 1;
            if (j - i + 1 > max_len) max_len = j - i + 1;
        }
    }
    printf("Longest substring length = %d\n", max_len);
    return 0;
}
