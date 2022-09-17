// Write a program to check whether a given number is there in the Fibonacci
// series or not. 
#include<stdio.h>
int main()
{
    int i,num, fib1=0, fib2=1, fib3;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(num==0)
        {
            printf("%d is in Fibonacci Series",num);
            break;
        }
        else if(num==1)
        {
            printf("%d is in Fibonacci Series",num);
            break;
        }
        else if(num>1)
        {
            fib3 = fib1;
            fib1 = fib2;
            fib2 = fib2+fib3;
            if(num==fib2)
            {
                printf("%d is in Fibonacci Series",num);
                break;
            }
        }

    }
}