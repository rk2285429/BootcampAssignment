// Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int i, num,fib1=0,fib2=1,fib3;
    printf("Enter a number:-");
    scanf("%d",&num);
    if(num==1)
    {
        printf("1st Term of Fibonacci is %d",fib1);
    }
    else if(num == 2)
    {
        printf("2nd term of Fibonacci is %d",fib2);
    }
    else if(num>2)
    {
        for(i=1; i<=num-2; i++)
        {
            fib3 = fib1;
            fib1 = fib2;
            fib2 = fib2+fib3;
        }
        printf("%dth term of Fibonacci is %d",num,fib2);
    }
    return 0;
}