/* Day 53 - Question 1: Find the leftmost pivot index where the sum of elements strictly to the left equals the sum strictly to the right */
#include <stdio.h>

int main() {
    int n, total = 0, left_sum = 0, pivot = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }
    for (int i = 0; i < n; i++) {
        if (left_sum == total - left_sum - nums[i]) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }
    printf("Pivot index = %d\n", pivot);
    return 0;
}
