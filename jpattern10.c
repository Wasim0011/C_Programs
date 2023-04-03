#include <stdio.h>
int main()
{
    int i, j, rows, space;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        if (i <= (rows + 1) / 2)
        {
            for (space = 1; space <= (rows + 1) / 2 - (i); space++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
                
            {
                printf("*");
            }
        }
        else
        {
            for (space = 1; space <= i - (rows + 1) / 2; space++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * rows + 1 - 2 * i; j++)

            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}