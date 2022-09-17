// Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int i, num, sum=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=2*num-1; i++)
    {
        if(i%2)
        {
            sum = sum+i;
        }
    }
    printf("The sum of first %d odd natural number is %d",num,sum);
    return 0;
}