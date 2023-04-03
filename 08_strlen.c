#include <stdio.h>
#include <string.h>
int main()
{
    char st[30];
    printf("Enter your name : ");
    scanf("%s", &st);
    printf("Hello %s\n", st);
    int length = strlen(st);
    printf("The number of letters is %d", length);
}