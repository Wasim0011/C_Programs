#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float)); // allocated space for 5 floats
    if (ptr == NULL)
    {
        printf("Error!\n");
    }
    printf("Successfully allocated\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of element%d\n", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element%d is %.2f\n", i + 1, ptr[i]);
    }
}