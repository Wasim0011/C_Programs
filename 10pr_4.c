#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    float salary;
};
int main()
{
    FILE *ptr;
    ptr = fopen("10_p4.txt", "w");
    struct employee e1, e2;
    printf("Enter the name of employee1: ");
    scanf("%s", &e1.name);
    printf("Enter the salary of employee1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of employee2: ");
    scanf("%s", &e2.name);
    printf("Enter the salary of employee2: ");
    scanf("%f", &e2.salary);
    fprintf(ptr, "%s,    %.3f\n", e1.name, e1.salary);
    fprintf(ptr, "%s,    %.3f\n", e2.name, e2.salary);
    fclose(ptr);
    printf("Successfully Completed!");
}