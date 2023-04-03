#include <stdio.h>

void encrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char st[60] = "Be alert on INDEPENDANCE DAY";
    // char st[100];
    // printf("Enter your message: ");
    // gets(st);
    encrypt(st);
    printf("The encrypted message is: %s", st);
}