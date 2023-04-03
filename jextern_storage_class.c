#include <stdio.h>
void fun1();
void fun2();
int main()
{
    extern int x;
    printf("x = %d\n", x);
    fun1();
    fun2();
}
void fun1()
{
    int x = 59;
    x += 11;
    printf("x = %d\n", x);
}
void fun2()
{
    int y = 76;
    y -= 4;
    printf("y = %d\n", y);
}
int x = 20;