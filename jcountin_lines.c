#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    int count = 1;
    ptr = fopen("Wasim.txt", "r+");
    char ch;
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while ((ch = fgetc(ptr)) != EOF)
    {
        if (ch == '\n')
        {
            count = count + 1;
        }
    }
    fseek(ptr, 0, SEEK_END);
    printf("The number of line is: %d\n", count);
    printf("The number of character is: %d\n", ftell(ptr));
    fclose(ptr);
}