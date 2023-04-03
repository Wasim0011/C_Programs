#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("10_p5.txt", "r");
    int num;
    if (fp == NULL)
    {
        printf("file not exist!\n");
        exit(1);
    }
    fscanf(fp, "%d", &num);
    fclose(fp);
    fp = fopen("10_p5.txt", "w");
    fprintf(fp, "%d", 2 * num);
    fclose(fp);
    printf("Successfully completed!\n");
}