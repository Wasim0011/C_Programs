#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40];
    char s2[40];
    char c;
    int i=0;
    printf("Enter the value of first string: ");
    scanf("%s", s1);
    printf("Enter the value of second string character by character\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        s2[i] = c;
        i++;
    }
    s2[i - 1] = '\0';
    printf("strcmp for these srings returns: %d ", strcmp(s1, s2));
}