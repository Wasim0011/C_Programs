#include <stdio.h>
int main()
{
    int count = 0;
    int arr[] = {1, 56, -87, 87, 4, -3, 54, 43, -9, 10};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            count = count + 1;
        }
    }
    printf("The number of positive integers in array is : %d", count);
}