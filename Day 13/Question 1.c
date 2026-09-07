/* Day 13 - Question 1: Implement a basic calculator using switch-case for +, -, *, /, % */
#include <stdio.h>

int main() {
    char op;
    int a, b;
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    switch (op) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d * %d = %d\n", a, b, a * b); break;
        case '/':
            if (b != 0) printf("%d / %d = %d\n", a, b, a / b);
            else printf("Cannot divide by zero\n");
            break;
        case '%':
            if (b != 0) printf("%d %% %d = %d\n", a, b, a % b);
            else printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
