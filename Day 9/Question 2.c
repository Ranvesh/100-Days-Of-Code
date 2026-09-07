/* Day 9 - Question 2: Assign a grade based on percentage (90-100: A, 80-89: B, 70-79: C, 60-69: D, below 60: F) */
#include <stdio.h>

int main() {
    int marks;
    printf("Enter percentage (0-100): ");
    scanf("%d", &marks);
    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 80)
        printf("Grade B\n");
    else if (marks >= 70)
        printf("Grade C\n");
    else if (marks >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}
