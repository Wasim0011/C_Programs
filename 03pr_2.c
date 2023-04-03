#include <stdio.h>
int main()
{
    float p, c, m;
    printf("Enter your Physics marks\n");
    scanf("%f", &p);
    if (p >= -25 && p <= 100)
    {
        printf("Enter your Chemistry marks\n");
        scanf("%f", &c);
    }
    else
    {
        printf("Invalid Entry!\n");
    }
    if (p >= -25 && p <= 100 && c >= -25 && c <= 100)
    {
        printf("Enter your Maths marks\n");
        scanf("%f", &m);
    }
    else
    {
        printf("Invalid Entry!\n");
    }
    if (p >= -25 && p <= 100 && c >= -25 && c <= 100 && m >= -25 && m <= 100)
    {
        if (p < 33)
        {
            printf("You FAILED in Physics\n");
        }
        else if (c < 33)
        {
            printf("You FAILED in Chemistry\n");
        }
        else if (m < 33)
        {
            printf("You FAILED in Maths\n");
        }
        else if ((p + c + m) < 120)
        {
            printf("You FAILED in overall with total marks %.2f and total percentage %.2f", p + c + m, (p + c + m) / 3);
        }
        else
        {
            printf("CONGRATS! You PASSED the Exam with total marks %.2f and total percentage %.2f", p + c + m, (p + c + m) / 3);
        }
    }
    else
    {
        printf("Invalid Entry!\n");
    }

    return 0;
}