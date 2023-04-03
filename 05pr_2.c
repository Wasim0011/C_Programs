#include<stdio.h>
float converter(float c);
int main()
{
    float a;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &a);
    printf("The temperature in fahrenheit is %.2f", converter(a));  

    return 0;
}
float converter(float c){
    float f=32+ 9*c/5;
    return f;
}