/* Day 69 - Question 1: Find the one repeated element in an array in a single iteration */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], seen[1000] = {0};
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (seen[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }
    printf("No repeated element\n");
    return 0;
}
