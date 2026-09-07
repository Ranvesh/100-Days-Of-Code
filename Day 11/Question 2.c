/* Day 11 - Question 2: Find profit or loss percentage given cost price and selling price */
#include <stdio.h>

int main() {
    float cp, sp, amt;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        amt = sp - cp;
        printf("Profit Percentage = %.2f%%\n", (amt / cp) * 100);
    } else if (cp > sp) {
        amt = cp - sp;
        printf("Loss Percentage = %.2f%%\n", (amt / cp) * 100);
    } else {
        printf("No Profit, No Loss\n");
    }
    return 0;
}
