/* Day 55 - Question 1: Find the majority element in an array (appears strictly more than n/2 times) */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int candidate = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate) count++;
        else count--;
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }
    if (freq > n / 2)
        printf("Majority element = %d\n", candidate);
    else
        printf("-1\n");
    return 0;
}
