#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Wasim.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        printf("This file exists\n");
        int num;
        int num2;
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }

    return 0;
}