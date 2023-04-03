#include<stdio.h>
int average(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter the three numbers\n");
    scanf("%f%f%f", &a, &b, &c);
    average(a, b, c);
    
     return 0;
}
int average(float a, float b, float c){
    printf("The average of three numbers is %.2f", (a+b+c)/3);
}