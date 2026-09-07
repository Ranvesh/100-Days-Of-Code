/* Day 21 - Question 1: Swap the first and last digit of a number */
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 10) {
        printf("Swapped = %d\n", n);
        return 0;
    }
    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);
    swapped = last * (int)pow(10, digits) + (n % (int)pow(10, digits)) - last + first;
    printf("After swapping first and last digit = %d\n", swapped);
    return 0;
}
