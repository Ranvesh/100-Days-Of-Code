/* Day 37 - Question 1: Find the sum of each row of a matrix and store it in an array */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    printf("Row sums: ");
    for (int i = 0; i < r; i++) printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
