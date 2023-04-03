#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Table.txt", "w");
    int num;
    printf("Enter the number to get multiplication table: ");
    scanf("%d", &num);
    fprintf(ptr, "<<Multiplacation of %d>>\n", num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num*i);
    }
    fclose(ptr);
    printf("Successfully Completed!\n");
}