#include <stdio.h>
int main()
{
    int a = 0, i;
    for(i=1; i<11; i++){
        a+=i;
    }
    printf("The sum of first ten natural numbers is %d", a);



    return 0;
}