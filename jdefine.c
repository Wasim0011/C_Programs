#include <stdio.h>
#define pi 3.14159
int main()
{
    float r;
    printf("Enter the radius of your circle: ");
    scanf("%f", &r);
    printf("Area of your circle is %.3f", pi * r * r);
    return 0;
}