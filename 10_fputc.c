#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fclose(ptr);

    return 0;
}