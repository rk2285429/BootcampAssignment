// Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.
#include<stdio.h>
int main()
{
    int hindi,math,physics,chemistry,english;
    printf("Enter the marks of Five Subjects:-\n hindi \n math \n physics \n chemistry \n english \nEnter here:-");
    scanf("%d %d %d %d %d",&hindi,&math,&physics,&chemistry,&english);
    if(hindi>32&math>32&physics>32&chemistry>32&english>32)
    {
        printf("You are Passed");
    }
    else
    {
        printf("You got Failed");
    }
    return 0;
}