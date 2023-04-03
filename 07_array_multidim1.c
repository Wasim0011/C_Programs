#include <stdio.h>
int main()
{
    int arr[4][2] = {
        {5, 6}, {8, 11}, {58, 32}, {65, 88}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The marks for student %d in subject %d is : %d\n", i + 1, j + 1, arr[i][j]);
        }
    }

    return 0;
}