#include<stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter the mass in kg\n");
    scanf("%f", &m); 
    printf("Force of attraction exerted by Earth is %.2f N", force(m));  

    return 0;
}
float force(float m){
    float f=m*9.8;
    return f;
}