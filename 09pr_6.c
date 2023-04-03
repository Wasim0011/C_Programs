#include <stdio.h>
typedef struct complex
{
    int real, img;
} comp;
void display(comp c, int i)
{

        printf("The value of real part of num%d is: %d\n", i + 1, c.real);
        printf("The value of imaginary part of num%d is: %d\n", i + 1, c.img);
    
}
int main()
{
    comp cnum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of num%d: ", i + 1);
        scanf("%d", &cnum[i].real);
        printf("Enter the real part of num%d: ", i + 1);
        scanf("%d", &cnum[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnum[i], i);
    }
}