#include <stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("Enter the number to find factorial:\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}
int factorial(int x)
{
    // printf("calling factorial(%d)\n", x);
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        int f = x * factorial(x - 1);
        return f;
    }
}