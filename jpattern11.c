#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        if (i <= (rows + 1) / 2)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= rows + 1 - i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}