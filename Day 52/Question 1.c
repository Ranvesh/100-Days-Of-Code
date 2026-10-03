/* Day 52 - Question 1: Find the index of the smallest element in a sorted array greater than or equal to x (Ceil) */
#include <stdio.h>

int main() {
    int n, x, idx = -1;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            idx = i;
            break;
        }
    }
    printf("Ceil index = %d\n", idx);
    return 0;
}
