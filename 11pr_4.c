#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error!\n");
    }
    printf("Enter five values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Entered values are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    printf("\nEnter 1o values:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Entered values are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}