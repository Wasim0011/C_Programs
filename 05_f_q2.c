#include <stdio.h>
#include <math.h>
int main()
{
    float side;
    printf("Enter the side of your rectangle\n");
    scanf("%f", &side);
    printf("The area of your rectangle is %.2f", pow(side, 2));

    return 0;
}