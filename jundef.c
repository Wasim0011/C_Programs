#include <stdio.h>
#define MAX(a, b) if (a > b)\
                    printf("%d is maximum\n", a);\
                    else\
                    printf("%d is maximum\n", b);
int main()
{
    MAX(9, 4);

    // #undef MAX
    // MAX(9, 4);
}