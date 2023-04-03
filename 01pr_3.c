#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperature in celcius\n");
    scanf("%f", &c);
    f = (9*c)/5 + 32;
    printf("The temperature in fahrenheit is:\n%.2f", f);

    return 0;
}