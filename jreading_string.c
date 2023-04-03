#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Wasim.txt", "r");
    char str[40];
    if (fp == NULL)
    {
        printf("file not exist\n");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(str, 8, fp);
        printf("%s", str);
        }
    fclose(fp);
}