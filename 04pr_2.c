#include <stdio.h>
int main()
{
    int a = 100;
    printf("Multiplication Table of 10 in reverse order\n");
    do
    {
        printf("%d\n", a);
        a -= 10;
    } while (a >= 10);

    return 0;
}