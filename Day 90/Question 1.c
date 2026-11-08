/* Day 90 - Question 1: Define a struct Person with name and an enum Gender, and print the person's gender */
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};
    printf("Name: %s\n", p.name);
    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");
    return 0;
}
