#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Wasim.txt", "r+");
    char str[30];
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fputs("My", ptr);
    fputc('W', ptr);
    fclose(ptr);
}