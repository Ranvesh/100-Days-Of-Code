/* Day 60 - Question 1: Find the maximum element in each subarray of size k */
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("Window maximums: ");
    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) max_val = arr[i + j];
        }
        printf("%d ", max_val);
    }
    printf("\n");
    return 0;
}
