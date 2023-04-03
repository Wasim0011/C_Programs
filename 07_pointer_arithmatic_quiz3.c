#include <stdio.h>
int main()
{
    float a = 9.9;
    float *i = &a;
    printf("The address of a is %u\n", i);
    float b = 76.4;
    float *j = &b;
    printf("The address of b is %u\n", j);
    printf("Difference between address of a and address of b is = %d\n", i - j);
    //printf("Sum between address of a and address of b is = %d\n", i + j);
    return 0;
}