#include <stdio.h>
void display();
int main()
{
    display();
    display();
}
void display()
{
    static int x=0;
    x += 10;
    printf("x = %d\n", x);
}