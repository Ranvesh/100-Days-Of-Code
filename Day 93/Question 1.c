/* Day 93 - Question 1: Find and print the student with the highest marks */
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll no, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) top = i;
    }
    printf("Topper: %s (Roll: %d) with %.2f marks\n", s[top].name, s[top].roll_no, s[top].marks);
    return 0;
}
