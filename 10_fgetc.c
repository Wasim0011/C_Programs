#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");
    char c;
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}