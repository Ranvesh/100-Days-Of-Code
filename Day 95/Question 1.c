/* Day 95 - Question 1: Return a structure representing the top student from a function */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[best].marks) best = i;
    }
    return s[best];
}

int main() {
    struct Student list[3] = {
        {"Aman", 1, 78.0},
        {"Priya", 2, 94.5},
        {"Rohan", 3, 85.0}
    };
    struct Student topper = getTopper(list, 3);
    printf("Top Student: %s (Roll %d) - %.2f\n", topper.name, topper.roll_no, topper.marks);
    return 0;
}
