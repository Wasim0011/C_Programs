#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Wasim.txt", "w+");
    char ch;
    if (fp == NULL)
    {
        printf("file not exist!\n");
        exit(1);
    }
    fputs("Md Wasim", fp);
    rewind(fp);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    
}