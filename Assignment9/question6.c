// Program to check whether a year is a leap year or not. Using switch
// statement
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:-");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0:
            switch(year%4==0)
            {
                case 0:
                    printf("Non-Leap Year");
                    break;
                case 1:
                    printf("Leap Year");
                    break;
            }
            break;
        case 1:
            switch(year%400==0)
            {
                case 0:
                    printf("Non-Leap Year");
                    break;
                case 1:
                    printf("Leap Year");
                    break;
            }
            break;
        default:
            printf("Wrong Input");
            break;
    }
    return 0;
}