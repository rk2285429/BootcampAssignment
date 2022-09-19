// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int, int);
int main()
{
    int number, pow, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("Enter the power of number:-");
    scanf("%d",&pow);
    result = power(number,pow);
    printf("%d raise to the power %d = %d",number,pow, result);
    return 0;
}
int power(int n, int t)
{
    if(t==0)
    {
        return 1;
    }
    return n*power(n,t-1);
}