#include <stdio.h>
int main()
{
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File name: %s\n", __FILE__);
    printf("Line number is: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
}