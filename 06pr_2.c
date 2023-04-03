#include <stdio.h>
void Add(int a);
int main()
{
    int a = 7;
    printf("Address of a is %u\n", &a);
    Add(a);
}
void Add(int a)
{
    printf("Address of a is %u\n", &a);
}