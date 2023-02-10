// Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hour;
    int minute;
};
struct time input();
void display(struct time);
int main()
{
    struct time t1, t2;
    t1 = input();
    t2 = input();
    printf("Time 1 - ");
    display(t1);
    printf("\nTime 2 - ");
    display(t2);
    if(t1.hour>=t2.hour)
    {
        if(t1.minute>=t2.minute)
        {
            printf("\nDifference = %d hour and %d minute",(t1.hour-t2.hour),(t1.minute-t2.minute));
        }
        else
        {
            printf("\nDifference = %d hour and %d minute",(t1.hour-t2.hour-1),(t1.minute+(60-t2.minute)));
        }
    }
    else
    {
        if(t2.minute>=t1.minute)
        {
            printf("\nDifference = %d hour and %d minute",(t2.hour-t1.hour),(t2.minute-t1.minute));
        }
        else
        {
            printf("\nDifference = %d hour and %d minute",(t2.hour-t1.hour-1),(t2.minute+(60-t1.minute)));
        }
    }
    return 0;
}
struct time input()
{
    struct time t;
    printf("Enter time(as hh:mm)-\n");
    scanf("%d:%d",&t.hour,&t.minute);
    return t;
}
void display(struct time t)
{
    printf("%d:%d",t.hour,t.minute);
}