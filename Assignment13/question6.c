// Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int factorial(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = factorial(number);
    printf("Factorial of %d is %d",number, result);
    return 0;
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}