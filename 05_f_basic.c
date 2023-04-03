#include <stdio.h>
void display(); //function prototype
int main()
{
    printf("Initializing display function\n"); 
    display(); //function call
    printf("Display function finished its work\n");

    return 0;
}
void display() //function call
{
    printf("Hi, I am display\n");
}