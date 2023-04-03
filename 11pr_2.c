#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, arr[6];
    ptr = (int *)malloc(6 * sizeof(arr[6]));
    if (ptr == NULL)
    {
        printf("Error!");
    }
    printf("Successfully Allocated!\n");
    printf("Enter the values:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The entered values are:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
}