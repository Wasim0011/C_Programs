#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr1, *ptr2;
    char ch;
    char str[30];
    ptr1 = fopen("Wasim.txt", "r");
    ptr2 = fopen("Wasim1.txt", "w+");
    if (ptr1 == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    while ((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr2);
    }
    printf("Copying Successfully completed!\n");
    fclose(ptr1);
    fclose(ptr2);
}