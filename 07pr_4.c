#include <stdio.h>
int main()
{
    int n, table[10];
    printf("Enter the number to get multiplication table:");
    scanf("%d", &n);
    printf("\n");
    printf("<< Multiplication Table of %d >>\n", n);
    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, table[i]);
    }
}