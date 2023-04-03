
// #include<stdio.h>
// int main()
// {
//     char string[] = "Wasim";
//     for(int i=0; i<5; i++){
//         printf("%c", string[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char string[] = "Wasim";
    char *ptr = string;
    while (*ptr != '\0')
    {

        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}