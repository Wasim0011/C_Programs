#include <stdio.h>
int main()
{
    int n = 11, i = 1, factorial = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, factorial);

    return 0;
}