#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= i - 1; space++)
        {
            printf(" ");
        }
        for (j = 2 * rows - 1; j >=2*i-1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}