/* Day 58 - Question 1: Create an array answer where answer[i] is equal to the product of all elements except nums[i] */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n], answer[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) prod *= nums[j];
        }
        answer[i] = prod;
    }
    printf("Output: ");
    for (int i = 0; i < n; i++) printf("%d ", answer[i]);
    printf("\n");
    return 0;
}
