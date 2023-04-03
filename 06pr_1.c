#include <stdio.h>
int main()
{
    int a = 10;
    printf("Address of a: %u\n", &a);
    printf("Value of a: %d\n", *&a);
}