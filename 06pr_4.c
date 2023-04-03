#include <stdio.h>
void SumandAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int a, b, sum;
    float avg;
    a = 5;
    b = 6;
    SumandAvg(a, b, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %.2f\n", avg);
}