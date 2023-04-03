#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    printf("The value of a and b before swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of a and b after swap is %d and %d\n", a, b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
