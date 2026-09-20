/* Day 38 - Question 2: Check if a matrix is symmetric */
#include <stdio.h>

int main() {
    int n, isSym = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSym = 0;
                break;
            }
        }
    }
    if (isSym)
        printf("Symmetric matrix\n");
    else
        printf("Not symmetric\n");
    return 0;
}
