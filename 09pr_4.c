#include <stdio.h>
struct worker
{
    int age;
    float salary;
    char name[20];
};
int main()
{
    struct worker w1;
    struct worker *ptr = &w1;
    printf("Enter the information of w1:\n");
    scanf("%d %f %s", &ptr->age, &ptr->salary, ptr->name);
    printf("The info of worker1 is:\n%d %.2f  %s", ptr->age, ptr->salary, ptr->name);
}