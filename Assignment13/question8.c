// Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int);
int main()
{
    int number, i;
    printf("Enter a number:-");
    scanf("%d",&number);
    for(i=0; i<=number; i++)
    {
        printf("%d, ",fib(i));
    }
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}