#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your character\n");
    scanf("%c", &ch);
    // (97-122) --> (a-z)
    if (ch >= 97 && ch <= 122)
    {
        printf("It is a lower case");
    }
    else
    {
        printf("It is an upper case");
    }

    return 0;
}