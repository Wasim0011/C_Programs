#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, arr[6];
    ptr = (int *)malloc(6 * sizeof(arr[6]));
    if (ptr == NULL)
    {
        printf("Error!\n");
    }
    printf("Successfully Allocated!\n");
    free(ptr);
}