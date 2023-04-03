#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error!\n");
    }
    printf("Enter five entries:\n");
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
    printf("\nEnter ten entries:\n");
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