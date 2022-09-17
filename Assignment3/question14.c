// Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
    {
        printf("%d is Divisible by 7 or 3.",num);
    }
    else
    {
        printf("%d is Not Divisible by 7 or 3.",num);
    }
    return 0;
}