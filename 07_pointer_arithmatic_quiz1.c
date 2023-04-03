#include <stdio.h>
int main()
{
    int a = 88;
    int *i = &a;
    printf("The address of a is %u\n", i);
    i += 3;
    printf("The address of a is %u\n", i);

    return 0;
}