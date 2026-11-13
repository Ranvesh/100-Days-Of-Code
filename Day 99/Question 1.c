/* Day 99 - Question 1: Use malloc() to allocate structure memory dynamically and print details */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter name, roll, and marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    printf("Student Details: %s | Roll: %d | Marks: %.2f\n", ptr->name, ptr->roll, ptr->marks);
    free(ptr);
    return 0;
}
