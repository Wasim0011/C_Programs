#include <stdio.h>
int main()
{
    int arr[20];
    printf("Enter the integer to store:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered values are:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", arr[i]);
    }
}