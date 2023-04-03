#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the principal amount(in ₹):\n");
    scanf("%f", &p);
    printf("Enter the rate of interest:\n");
    scanf("%f", &r);
    printf("Enter the time duration(in years):\n");
    scanf("%f", &t);
    si = (p * r * t)/100;
    printf("Total interest to be paid by you is : %.2f\n", si);
    printf("Total amount to be paid by you is : %.2f\n", si + p);

    return 0;
}