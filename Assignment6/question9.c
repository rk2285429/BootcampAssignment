// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int i, num1, num2, Greater, check;
    printf("Enter two numbers:-");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        Greater = num1;
    }
    else
    {
        Greater = num2;
    }
    for(i=1; 1; i++)
    {
        check = Greater*i;
        if(check%num1==0 & check%num2==0)
        {
            break;
        }
    }
    printf("The LCM of %d and %d is %d",num1,num2,check);
    return 0;
}