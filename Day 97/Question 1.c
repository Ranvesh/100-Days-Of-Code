/* Day 97 - Question 1: Store employee data in a binary file using fwrite() and read using fread() */
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Neha", 101, 55000.0}, e2;
    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from binary file -> ID: %d, Name: %s, Salary: %.2f\n", e2.id, e2.name, e2.salary);
    return 0;
}
