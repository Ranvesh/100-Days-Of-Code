/* Day 51 - Question 1: Find the first and last occurrence of a target in a sorted array and print their indices */
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("First = %d, Last = %d\n", first, last);
    return 0;
}
