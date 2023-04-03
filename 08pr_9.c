#include <stdio.h>
int main()
{
    char st[80];
    int count = 0;
    printf("Enter anything: ");
    gets(st);
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == 'A')
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        printf("character 'A' is present");
    }
    else
    {
        printf("character 'A' is not present");
    }

    return 0;
}