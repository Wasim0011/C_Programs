#include <stdio.h>
int main()
{
    int a = 97;
    int b;
    printf("Enter the number\n");
    scanf("%d", &b);
    if (b % a == 0)
    {
        printf("%d is divisible by 97", b);
    }
    else
    {

        printf("%d is not divisible by 97 and remainder is %d", b, b % a);
    }
    // printf("Divisibility test return: %d\n", b %a);

    return 0;
}