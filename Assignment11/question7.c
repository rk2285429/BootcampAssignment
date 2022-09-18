// Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("First %d fibonacci are:- ",number);
    fibonacci(number);
    return 0;
}
void fibonacci(int number)
{
    int i, n1, n2, n3;
    for(i=0; i<number; i++)
    {
        if(i==0)
        {
            printf("%d, ",i);
            n1=i;
        }
        else if(i==1)
        {
            printf("%d, ",i);
            n2 = i;
        }
        else
        {
            n3 = n2+n1;
            printf("%d, ",n3);
            n1=n2;
            n2=n3;
        }
    }
}