#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "Wasim";
    strcat(s1, s2);
    printf("Now s1 contains %s", s1);

    return 0;
}