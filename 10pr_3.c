#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1;
    FILE *fp2;
    char ch;
    fp1 = fopen("Wasim.txt", "r");
    fp2 = fopen("10_p3.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        printf("%c", ch);
    }
    rewind(fp1);
    for (int i = 0; i < 2; i++)
    {
        while ((ch = fgetc(fp1)) != EOF)
        {
            fputc(ch, fp2);
        }
        rewind(fp1);
        fprintf(fp2, "\n");
    }
    fclose(fp1);
    fclose(fp2);
    printf("\nTask seccessfully completed!\n");
}