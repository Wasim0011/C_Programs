#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter the four numbers\n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    // printf("The entered numbers are: \n%.1f\n%.1f\n%.1f\n%.1f\n", a,b,c,d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("The greatest of the four numbers is %.1f", a);
            }
            else
            {
                printf("The greatest of the four numbers is %.1f", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("The greatest of the four numbers is %.1f", c);
            }
            else
            {
                printf("The greatest of the four numbers is %.1f", d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("The greatest of the four numbers is %.1f", b);
            }
            else
            {
                printf("The greatest of the four numbers is %.1f", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("The greatest of the four numbers is %.1f", c);
            }
            else
            {
                printf("The greatest of the four numbers is %.1f", d);
            }
        }
    }

    return 0;
}