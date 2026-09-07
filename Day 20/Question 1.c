/* Day 20 - Question 1: Find the product of odd digits of a number */
#include <stdio.h>

int main() {
    int n, digit, prod = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            prod *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits found (0)\n");
    return 0;
}
