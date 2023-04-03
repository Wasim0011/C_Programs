#include <stdio.h>
struct vector
{
    int x, y;
};
struct vector sumVector(struct vector u1, struct vector u2)
{
    struct vector result;
    result.x = u1.x + u2.x;
    result.y = u1.y + u2.y;
    return result;
}
int main()
{
    struct vector u1, u2, sum;
    printf("Enter X dim of first vector: ");
    scanf("%d", &u1.x);
    printf("Enter Y dim of first vector: ");
    scanf("%d", &u1.y);
    printf("Enter X dim of second vector: ");
    scanf("%d", &u2.x);
    printf("Enter Y dim of second vector: ");
    scanf("%d", &u2.y);
    sum = sumVector(u1, u2);
    printf("X dim of result vector is %d and Y dim of result vector is %d", sum.x, sum.y);
}