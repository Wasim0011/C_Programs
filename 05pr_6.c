#include <stdio.h>
int sum(int n);
int main()
{
    int s;
    printf("Enter your number\n");
    scanf("%d", &s);
    if(s>=1){
    printf("The sum of %d natural numbers is %d", s, sum(s));
    }
    else {
        printf("Invalid Entry!\n");
    }

    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int a = n + sum(n - 1);
        return a;
    }
}