#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); //for reading of file
    ptr=fopen("samp.txt", "w"); //for writing to file
    fclose(ptr);
}