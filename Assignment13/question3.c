// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int evenSum(int);
int main()
{
    int number, pass, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    pass = 2*number;
    result = evenSum(pass);
    printf("Sum of first %d odd natural number is %d",number,result);
    return 0;
}
int evenSum(int n)
{
    if(n==2)
    {
        return 2;
    }
    return n+evenSum(n-2);
}