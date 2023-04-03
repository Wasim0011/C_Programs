#include <stdio.h>
struct account
{
    int acc_no;
    char name[30];
    float balance;
};
int main()
{
    struct account c = {658745896, "Shyam", 2548.325};
    printf("info of Customen:\n%d  %s  %.3f", c.acc_no, c.name, c.balance);
}