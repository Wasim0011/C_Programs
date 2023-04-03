#include <stdio.h>
struct complex
{
    int x, i;
};
int main()
{
    struct complex c1 ={4, 5};
    printf("real part is %d and imaginary part is %d", c1.x, c1.i);
}