#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Wasim.txt", "r+");
    if (fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    printf("The length of string is %d\n", ftell(fp));
    fseek(fp, 6, SEEK_SET);
    printf("%d", ftell(fp));
    fclose(fp);
}