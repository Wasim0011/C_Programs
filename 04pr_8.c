#include <stdio.h>
int main()
{
    int n = 14, i, factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorail of %d is %d", n, factorial);

    return 0;
}