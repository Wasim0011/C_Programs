#include <stdio.h>
typedef struct complex_number
{
    int real, img;
} comp;
int main()
{
    comp c = {4, 5};
    printf("real part is: %d and imaginary part is: %d", c.real, c.img);
}