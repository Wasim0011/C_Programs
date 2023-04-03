#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("generated.txt", "w");
    int num = 198;
    fprintf(ptr, "The number is %d\n", num);
    for (int i = 0; i < 20; i++)
    {
        fprintf(ptr, "Thanks for using fprintf(%d)\n", i + 1);
    }
    fclose(ptr);

    return 0;
}