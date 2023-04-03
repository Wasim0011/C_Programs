#include <stdio.h>

void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Wasimabcdefghhjhrjkfhuhjhu";
    slice(st, 3, 8);
    printf("The sliced string is: %s", st);
}