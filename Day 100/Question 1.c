/* Day 100 - Question 1: Use pointer to struct to modify and display data using -> operator */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s = {"Initial", 10, 70.0};
    struct Student *ptr = &s;

    strcpy(ptr->name, "UpdatedName");
    ptr->roll = 25;
    ptr->marks = 95.5;

    printf("Name: %s | Roll: %d | Marks: %.2f\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
