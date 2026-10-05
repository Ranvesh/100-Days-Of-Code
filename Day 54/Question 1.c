/* Day 54 - Question 1: Find an integer x such that the sum of elements from 1 to x equals the sum from x to n */
#include <stdio.h>

int main() {
    int n, pivot = -1;
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    for (int x = 1; x <= n; x++) {
        int left_sum = x * (x + 1) / 2;
        int right_sum = total - (x - 1) * x / 2;
        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }
    printf("Pivot integer = %d\n", pivot);
    return 0;
}
