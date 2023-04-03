#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, arr[10];
    ptr = (int *)malloc(10 * sizeof(arr[10]));
    if (ptr == NULL)
    {
        printf("Error!\n");
    }
    printf("Multiplication Table of 7 upto 10:\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", ptr[i], 7 * ptr[i]);
    }
    ptr = realloc(ptr, 15 * sizeof(int));
    printf("Multiplication Table of 7 upto 15:\n");
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 15; i++)
    {
        printf("7 X %d = %d\n", ptr[i], 7 * ptr[i]);
    }
    free(ptr);
    return 0;
}