#include <stdio.h>
typedef struct timestamp
{
    int year;
    int month;
    int date;
    int hour;
    int minute;
    float second;
} tstamp;
void display(tstamp t)
{
    printf("Time is-> %d-%d-%d  %d:%d:%.2f\n", t.year, t.month, t.date, t.hour, t.minute, t.second);
}
int timecmp(tstamp t1, tstamp t2)
{
    if (t1.year > t2.year)
    {
        return 1;
    }
    if (t1.year < t2.year)
    {
        return -1;
    }
    if (t1.month > t2.month)
    {
        return 1;
    }
    if (t1.month < t2.month)
    {
        return -1;
    }
    if (t1.date > t2.date)
    {
        return 1;
    }
    if (t1.date < t2.date)
    {
        return -1;
    }
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
    tstamp t1;
    tstamp t2;
    printf("Enter first time\n");
    scanf("%d%d%d%d%d%f", &t1.year, &t1.month, &t1.date, &t1.hour, &t1.minute, &t1.second);
    printf("Enter second time\n");
    scanf("%d%d%d%d%d%f", &t2.year, &t2.month, &t2.date, &t2.hour, &t2.minute, &t2.second);
    display(t1);
    display(t2);
    printf("Time compare function returns: %d", timecmp(t1, t2));
}