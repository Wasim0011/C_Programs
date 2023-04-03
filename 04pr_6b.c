#include <stdio.h>
int main()
{
    int a = 0, i = 1;
    do
    {
        a += i;
        i++;
    } while (i < 11);
    printf("The sum of first ten natural numbers is %d", a);

    return 0;
}