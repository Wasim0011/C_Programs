#include <stdio.h>
int main()
{
    int n = 29, i = 2, prime = 1;
    // Disclaimer: This is not the best method to solve this type of problem
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
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