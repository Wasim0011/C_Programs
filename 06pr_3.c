#include <stdio.h>
void function(int *a);
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Value of a before function call: %d\n", a);
    function(&a);
    printf("Value of a after function call: %d\n", a);
}
void function(int *a)
{
    int b = 10 * (*a);
    *a = b;
}