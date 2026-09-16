/* Day 34 - Question 1: Insert an element in an array at a given position */
#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position (0-indexed) and value: ");
    scanf("%d %d", &pos, &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
