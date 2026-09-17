/* Day 35 - Question 2: Rotate an array to the right by k positions */
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) printf("%d ", temp[i]);
    printf("\n");
    return 0;
}
