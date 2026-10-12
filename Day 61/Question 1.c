/* Day 61 - Question 1: Find the first negative integer in each subarray of size k */
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

    printf("First negative in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int first_neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }
        printf("%d ", first_neg);
    }
    printf("\n");
    return 0;
}
