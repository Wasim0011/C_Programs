#include <stdio.h>
int main()
{
    int i, j;
    for (j = 1; j <= 6; j++)
    {
        for (i = 6; i >= j; i--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}