#include <stdio.h>
int sum(int a, int b);
int main()
{
    int c;
    c = sum(15, 78);
    printf("the value of sum is %d", c);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}