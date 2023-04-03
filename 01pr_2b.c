#include <stdio.h>
int main()
{
    float area, r, h;
    printf("Enter the radius and height of your cylinder:\n");
    scanf("%f %f", &r, &h);
    area = 3.14 * r * r * h;
    printf("The area of your cylinder is = %.2f", area);

    return 0;
}