#include <stdio.h>
void display()
{
    extern int x;
    x++;
    printf("Hello from support class\n");
    printf("x = %d\n", x);
}
