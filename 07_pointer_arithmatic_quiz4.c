#include <stdio.h>
int main()
{
    float a = 9.9;
    float *i = &a;
    printf("The address of a is %u\n", i);
    float b = 76.4;
    float *j = &b;
    printf("The address of b is %u\n", j);
    if (i > j)
    {
        printf("Address of a is greater than address of b\n");
    }
    else
    {
        printf("Address of b is greater than address of a\n");
    }

    return 0;
}