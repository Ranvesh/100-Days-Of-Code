/* Day 12 - Question 1: Calculate library fine based on late days (first 5 days Rs 2/day, next 5 days Rs 4/day, next 20 days Rs 6/day, >30 days Membership Cancelled) */
#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);
    if (days <= 0) {
        printf("No fine\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs %d\n", fine);
    } else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = Rs %d\n", fine);
    } else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = Rs %d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }
    return 0;
}
