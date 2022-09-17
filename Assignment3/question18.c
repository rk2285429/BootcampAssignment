// Write a program which takes the month number as an input and display number of 
// days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number:-");
    scanf("%d",&month);
    if(month%2!=0)
    {
        if(month<8 & month>0)
        {
            printf("31 Days");
        }
        else if(month>=8 & month<=12)
        {
            printf("30 Days");
        }
    }
    else if(month%2 == 0 & month!= 2)
    {
        if(month<8 & month>0)
        {
            printf("30 Days");
        }
        else if(month>=8 & month<=12)
        {
            printf("31 days");
        }
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
}