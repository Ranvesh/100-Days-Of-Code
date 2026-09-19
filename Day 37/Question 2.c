/* Day 37 - Question 2: Find the transpose of a matrix */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Transpose:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
