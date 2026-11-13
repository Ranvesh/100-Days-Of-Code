/* Day 96 - Question 1: Create Employee structure with nested Date structure for joining date and print details */
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp = {"Vikram", 502, {15, 8, 2024}};
    printf("ID: %d | Name: %s | Joined: %02d/%02d/%04d\n",
           emp.id, emp.name, emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    return 0;
}
