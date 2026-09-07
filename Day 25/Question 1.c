/* Day 25 - Question 1: Print right-aligned descending number triangle pattern */
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
