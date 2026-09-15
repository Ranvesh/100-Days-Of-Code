/* Day 33 - Question 2: Insert an element in a sorted array at the appropriate position */
#include <stdio.h>

int main() {
    int n, val;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
    n++;

    printf("Updated array: ");
    for (int j = 0; j < n; j++) printf("%d ", arr[j]);
    printf("\n");
    return 0;
}
