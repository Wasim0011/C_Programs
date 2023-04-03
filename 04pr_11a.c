#include <stdio.h>
int main()
{
    int n = 449, prime = 1, i;
    // Disclaimer: This is not the best method to solve this type of problem
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }

    return 0;
}