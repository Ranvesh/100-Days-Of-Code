/* Day 16 - Question 1: Take a number as input and print its equivalent binary representation */
#include <stdio.h>

int main() {
    int n, bin[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}
