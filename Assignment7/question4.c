// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int i, num1, num2, min;
    printf("Enter two numbers:-");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }
    for(i=min;i>=1;i--)
    {
        if(num1%i==0 & num2%i==0)
        {
            break;
        }
    }
    printf("HCF of %d and %d is %d",num1,num2,i);
    return 0;
}