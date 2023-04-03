#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1;
    e1.code = 22;
    e1.salary = 454;
    strcpy(e1.name, "Wasim");

    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}