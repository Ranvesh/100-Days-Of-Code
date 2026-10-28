/* Day 78 - Question 1: Read a text file and count how many vowels and consonants are in the file */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Cannot open input.txt\n");
        return 1;
    }
    int vowels = 0, consonants = 0, ch;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
