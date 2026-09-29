/* Day 48 - Question 2: Reverse each word in a sentence without changing the word order */
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    char *word_start = str;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(word_start, &str[i - 1]);
            if (str[i] == '\0') break;
            word_start = &str[i + 1];
        }
    }
    printf("Result: %s\n", str);
    return 0;
}
