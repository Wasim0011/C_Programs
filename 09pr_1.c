#include <stdio.h>
struct vector
{
    int i, j;
};
int main()
{
    struct vector v1, v2;
    v1.i = 87;
    v2.j = 67;
    printf("X dim is %d and Y dim is %d\n", v1.i, v2.j);
}