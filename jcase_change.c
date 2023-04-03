#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("Enter your name:");
    gets(name);
    // strupr(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
    }
    printf("Your entered character in upper case: %s\n", name);
}