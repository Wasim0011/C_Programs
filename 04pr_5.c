#include <stdio.h>
int main()
{
    int a = 0, i = 1;
    while(i < 11)
    {
        a += i;
        i++;
    }
    printf("The sum of ten natural numbers = %d", a);

    return 0;
}