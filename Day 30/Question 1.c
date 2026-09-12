/* Day 30 - Question 1: Count even and odd elements in a 1D array */
#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}
