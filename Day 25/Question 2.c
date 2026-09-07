/* Day 25 - Question 2: Print an inverted right-angled star pattern with leading spaces */
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s <= 5 - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
