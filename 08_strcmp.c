#include <stdio.h>
#include <string.h>
int main()
{
    // strcmp compare only first mismatching character of string
    int a = strcmp("Far", "Joke");
    int b = strcmp("Joke", "Far");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}