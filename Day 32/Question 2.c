/* Day 32 - Question 2: Find the digit that occurs the most times in an integer number */
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int max_freq = 0, best_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            best_digit = i;
        }
    }
    printf("Most frequent digit = %d\n", best_digit);
    return 0;
}
