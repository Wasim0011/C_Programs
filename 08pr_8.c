#include <stdio.h>

int main()
{
    char st[70];
    int count = 0;
    printf("Enter anything: ");
    gets(st);
    for (int i = 0; st[i] != '0'; i++)
    {
        
        if (st[i] == 'A')
        {
            count++;
        }
    }
    printf("The number of times A appears is %d", count);
}