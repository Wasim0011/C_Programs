#include<stdio.h>
int main(){
    float a, b;
    printf("## Calculate the AREA of your rectangle ##\n");
    printf("Enter the length of your rectangle\n");
    scanf("%f", &a);
    printf("Enter the breadth of your rectangle\n");
    scanf("%f", &b);
    float area= a*b;
    printf("The area of your rectangle is = %0.2f sq. unit", area);


    return 0;
}