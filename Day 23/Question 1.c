/* Day 23 - Question 1: Find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms */
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }
    printf("Sum of series = %.4lf\n", sum);
    return 0;
}
