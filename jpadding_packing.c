#include <stdio.h>
#pragma pack(1)
struct teacher
{
    int age;
    char name;
    float salary;
};
int main()
{
    struct teacher t1;
    printf("%d", sizeof(t1));
}