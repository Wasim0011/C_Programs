#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Wasim";
    char target[30];
    strcpy(target, source);
    printf("Now the target contains %s", target);

    return 0;
}