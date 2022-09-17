// Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year:-");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d is a Leap Year",year);
        }
        else
        {
            printf("%d is Not a Leap Year",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("%d is a Leap Year",year);
        }
        else
        {
            printf("%d is not a Leap year",year);
        }
    }
    return 0;
}