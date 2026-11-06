/* Day 87 - Question 1: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role */
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role current = ADMIN;
    if (current == ADMIN)
        printf("Welcome Admin! Full access granted.\n");
    else if (current == USER)
        printf("Welcome User! Standard access granted.\n");
    else
        printf("Welcome Guest! Read-only access.\n");
    return 0;
}
