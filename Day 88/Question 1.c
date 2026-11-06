/* Day 88 - Question 1: Print all enum names and integer values using a loop */
#include <stdio.h>

enum Colors { RED, GREEN, BLUE, YELLOW, COUNT };

int main() {
    char *color_names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    for (int i = 0; i < COUNT; i++) {
        printf("%s -> %d\n", color_names[i], i);
    }
    return 0;
}
