#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Wasim.txt", "a");
    char str[50];
    if (fp == NULL)
    {
        printf("File not exist\n");
        exit(1);
    }
    printf("what you want to add:\n");
    fprintf(fp, "\t");
    gets(str);
    fputs(str, fp);
    printf("Successfully appended");
    fclose(fp);
}