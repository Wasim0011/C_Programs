#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char string[40];
    printf("Enter the character: ");
    gets(string);
    // printf("The number of characters in the string is: %d", strlen(string));
    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    printf("The number of characters in the string is: %d", count);
}