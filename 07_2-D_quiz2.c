#include <stdio.h>
int main()
{
    int arr[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]:", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}