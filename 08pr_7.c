#include <stdio.h>

void decrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char st[] = "Qspufdu!UBK!IPUFM";
    decrypt(st);
    printf("The decrypted message is: %s", st);
}