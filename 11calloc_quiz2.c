#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("How many integers you want to enter:\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element%d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of element%d is %d\n", i + 1, ptr[i]);
    }
}