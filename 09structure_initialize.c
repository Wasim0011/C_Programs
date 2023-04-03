#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee Wasim = {100, 10000.876, "Wasim"};
    printf("code is: %d\n", Wasim.code);
    printf("salary is: %.3f\n", Wasim.salary);
    printf("name is: %s\n", Wasim.name);
}