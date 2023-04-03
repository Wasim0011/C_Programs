#include <stdio.h>
typedef struct time
{
    int hour;
    int minute;
    float second;
} time;
void display(time t)
{
    printf("The time is-> %d:%d:%.2f\n", t.hour, t.minute, t.second);
}
int timecmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.minute > t2.minute)
    {
        return 1;
    }
    if (t1.minute < t2.minute)
    {
        return -1;
    }
    if (t1.second > t2.second)
    {
        return 1;
    }
    if (t1.second < t2.second)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    time t1;
    time t2;
    printf("Enter first time\n");
    scanf("%d   %d %f", &t1.hour, &t1.minute, &t1.second);
    printf("Enter second time\n");
    scanf("%d   %d  %f", &t2.hour, &t2.minute, &t2.second);
    display(t1);
    display(t2);
    int a = timecmp(t1, t2);
    printf("Time compare function returns: %d", a);
}