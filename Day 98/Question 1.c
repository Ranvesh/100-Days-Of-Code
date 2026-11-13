/* Day 98 - Question 1: Take two structs as input and check if they are identical */
#include <stdio.h>
#include <string.h>

struct Point {
    char label[20];
    int x, y;
};

int main() {
    struct Point p1, p2;
    printf("Enter label, x, y for first point: ");
    scanf("%s %d %d", p1.label, &p1.x, &p1.y);
    printf("Enter label, x, y for second point: ");
    scanf("%s %d %d", p2.label, &p2.x, &p2.y);

    if (strcmp(p1.label, p2.label) == 0 && p1.x == p2.x && p1.y == p2.y)
        printf("Identical\n");
    else
        printf("Not identical\n");
    return 0;
}
