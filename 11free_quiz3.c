#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter total number of entries:\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("The entered values are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    free(ptr);
}