/* Day 81 - Question 1: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value */
#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    for (enum Days d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}
