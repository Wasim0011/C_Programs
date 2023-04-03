#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("\nThe multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf(" ************ \n");
}
int main()
{
    int a, n, num;
    printf("How many tables you want to print:");
    scanf("%d", &a);
    printf("Upto how much times you want to print a table:");
    scanf("%d", &n);
    int mulTable[a][n];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the table you want to print:");
        scanf("%d", &num);
        printTable(mulTable[i], num, n);
    }
}