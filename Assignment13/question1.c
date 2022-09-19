// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = sum(number);
    printf("Sum of first %d natural number is:- %d",number,result);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}