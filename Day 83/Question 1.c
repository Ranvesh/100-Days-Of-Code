/* Day 83 - Question 1: Create an enum for months (JAN to DEC) and print how many days each month has */
#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *names[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    for (enum Month m = JAN; m <= DEC; m++) {
        printf("%s has %d days\n", names[m], days[m]);
    }
    return 0;
}
