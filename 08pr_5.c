#include <stdio.h>

void strcpy(char *s1, char *s2)
{
    int i;
    for (int i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
}

int main()
{
    char s1[50];
    char s2[50];
    printf("Enter the second string: ");
    gets(s2);
    strcpy(s1, s2);
    printf("Now the value of first string becomes: %s\n", s1);
    printf("Now the value of second string becomes: %s\n", s2);
}