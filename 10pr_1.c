#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, num3;
    FILE *fp;
    fp = fopen("10_p1.txt", "r");
    if (fp == NULL)
    {
        printf("file not exist!\n");
        exit(1);
    }
    fscanf(fp, "%d", &num1);
    fscanf(fp, "%d", &num2);
    fscanf(fp, "%d", &num3);
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    fclose(fp);
}