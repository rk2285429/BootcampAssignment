// Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter Weekday Number:-");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Get ready for work.");
            break;
        case 2:
            printf("Karma is Everything.");
            break;
        case 3:
            printf("Everything will get mangal.");
            break;
        case 4:
            printf("Hail lord Ganesha");
            break;
        case 5:
            printf("Welcome to thursday.");
            break;
        case 6:
            printf("Day before weekend.");
            break;
        case 7:
            printf("Enjoy Weekend.");
            break;
        default:
            printf("Wrong Input.");
            break;

    }
    return 0;
}