/* Day 89 - Question 1: Show that enums store integers by printing assigned values */
#include <stdio.h>

enum Numbers { ZERO, ONE, FIVE = 5, SIX };

int main() {
    printf("ZERO = %d\n", ZERO);
    printf("ONE = %d\n", ONE);
    printf("FIVE = %d\n", FIVE);
    printf("SIX = %d\n", SIX);
    return 0;
}
