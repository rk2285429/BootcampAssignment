// Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    if(num%3==0 & num%2==0)
    {
        printf("%d is Divisible by 3 as well as 2 \n",num);
    }
    else
    {
        printf("%d is Not Divisible by 3 and 2 Both\n",num);
    }
}