#include <stdio.h>
#include <math.h>
int main()
{
    float area, r;
    printf("Enter the radius of your circle:\n");
    scanf("%f", &r);

    area = 3.14 * pow(r, 2);
    printf("The area of your circle is = %.2f sq. unit", area);

    return 0;
}