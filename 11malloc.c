#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    // printf("The size of your integer is %d\n", sizeof(int));
    // printf("The size of your float is %d\n", sizeof(float));
    // printf("The size of your character is %d\n", sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int));   //allocated space for 6 integers
}