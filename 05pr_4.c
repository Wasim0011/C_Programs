#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter the position of fibonacci number\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid Entry!\n");
    }
    else if (n == 1)
    {
        printf("The %dst fibonacci number is %d", n, fibonacci(n));
    }
    else if (n == 2)
    {
        printf("The %dnd fibonacci number is %d", n, fibonacci(n));
    }
    else if (n == 3)
    {
        printf("The %drd fibonacci number is %d", n, fibonacci(n));
    }
    else
    {
        printf("The %dth fibonacci number is %d", n, fibonacci(n));
    }

    return 0;
}
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        int a;
        a = fibonacci(n - 1) + fibonacci(n - 2);
        return a;
    }
}