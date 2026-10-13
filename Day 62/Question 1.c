/* Day 62 - Question 1: Find the maximum sum among all contiguous subarrays using Kadane's algorithm */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max_so_far = arr[0], curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        if (curr_max + arr[i] > arr[i])
            curr_max = curr_max + arr[i];
        else
            curr_max = arr[i];

        if (curr_max > max_so_far)
            max_so_far = curr_max;
    }
    printf("Maximum contiguous sum = %d\n", max_so_far);
    return 0;
}
