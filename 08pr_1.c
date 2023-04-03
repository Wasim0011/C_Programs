#include <stdio.h>
int main()
{
    char string[25];
    printf("Enter your full name : ");
    gets(string);
    printf("Your full name is %s", string);

    return 0;
}