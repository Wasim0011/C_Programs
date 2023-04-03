#include <stdio.h>
enum week_days
{
    sun,
    mon,
    tue,
    wed,
    thurs,
    fri,
    sat
};
int main()
{
    enum week_days today;
    printf("Enter number of day of the week(eg. 0 for sunday, 1 for tuesday...): ");
    scanf("%d", &today);
    switch (today)
    {
    case sun:
        printf("Today is Sunday");
        break;
    case mon:
        printf("Today is Monday");
        break;
    case tue:
        printf("Today is Tuesday");
        break;
    case wed:
        printf("Today is Wednesday");
        break;
    case thurs:
        printf("Today is Thursday");
        break;
    case fri:
        printf("Today is Friday");
        break;
    case sat:
        printf("Today is Saturday");
        break;
    }
    return 0;
}