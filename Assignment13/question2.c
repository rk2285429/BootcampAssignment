// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int oddSum(int);
int main()
{
    int number, pass, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    pass = 2*number-1;
    result = oddSum(pass);
    printf("Sum of first %d odd natural number is %d",number,result);
    return 0;
}
int oddSum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+oddSum(n-2);
}