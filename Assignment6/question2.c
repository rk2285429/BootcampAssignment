// Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int i, num, sum=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=2*num; i++)
    {
        if(i%2==0)
        {
            sum = sum+i;
        }
    }
    printf("The sum of first %d even natural numbers are:- %d",num,sum);
    return 0;
}