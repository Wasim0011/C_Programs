#include <stdio.h>
void function(int a);
int main()
{
    int a = 5;
    printf("The value of a before function call: %d\n", a);
    function(a);
    printf("The value of a after function call: %d\n", a);
}
void function(int a)
{
    int b = 10 * a;
    a = b;
}