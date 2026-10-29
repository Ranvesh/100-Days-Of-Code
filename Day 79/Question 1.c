/* Day 79 - Question 1: Read integers from numbers.txt and compute their sum and average */
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Cannot open numbers.txt\n");
        return 1;
    }
    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0)
        printf("Sum = %d, Average = %.2f\n", sum, (float)sum / count);
    else
        printf("No numbers found\n");
    return 0;
}
