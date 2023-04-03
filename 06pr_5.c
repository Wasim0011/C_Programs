#include <stdio.h>
int main()
{
    int i = 20;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf("The value of i: %d\n", **k);
    printf("Address of i is %u\n", &i);
    printf("Address of j is %u\n", &j);
}