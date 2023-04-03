#include <stdio.h>
#include <string.h>

int main()
{
    char temp[30];
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Entered character before swapping: %s\n", name);
    // strrev(name);
    int l = strlen(name);
    for (int i = 0; i < l / 2; i++)
    {
        temp[i] = name[i];
        name[i] = name[l - 1 - i];
        name[l - 1 - i]=temp[i];
    }
    printf("Enter character after swapping: %s", name);
}