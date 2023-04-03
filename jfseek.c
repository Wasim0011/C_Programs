#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("Wasim.txt", "r+");
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fseek(ptr, 3, SEEK_SET);
    ch = getc(ptr);
    printf("%c\n", ch);
    fseek(ptr, 5, SEEK_CUR);
    ch = getc(ptr);
    printf("%c\n", ch);
    fseek(ptr, -4, SEEK_END);
    ch = getc(ptr);
    printf("%c\n", ch);
    
    fseek(ptr, -9, SEEK_END);
    fputs("VERY", ptr);
    fclose(ptr);
}