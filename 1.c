#include <stdio.h>
int main()
{
    int Data = 10;
    int *piSumData = NULL;
    piSumData = &Data;
    *piSumData = 5;
    printf("%d", *piSumData);
}