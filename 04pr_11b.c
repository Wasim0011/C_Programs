#include <stdio.h>
int main()
{
    int n = 67, prime = 1, i = 2;
    // Disclaimer: This is not the best method to solve this type of problem
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);
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