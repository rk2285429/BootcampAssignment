// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i, num, fib1=0, fib2=1, fib3;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("First %d terms of Fibonacci series is:-",num);
    for(i=1; i<=num; i++)
    {
        if(i==1)
        {
            printf("%d ",fib1);
        }
        else if(i==2)
        {
            printf("%d ",fib2);
        }
        else if(i>2)
        {
            fib3 = fib1;
            fib1 = fib2;
            fib2 = fib2+fib3;
            printf("%d ",fib2);
        }
    }
    return 0;
}