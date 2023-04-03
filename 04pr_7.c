#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    while (i < 11)
    {
        sum += (8 * i);
        i++;
    }
    printf("The required sum is %d", sum);

    return 0;
}