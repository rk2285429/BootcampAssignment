// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the 
// function.
#include<stdio.h>
int sum();
int main()
{
    int result;
    result = sum();
    printf("Sum of series is:- %d",result);
}
int sum()
{
    int i, j, factorial, sum =0;
    for(i=1; i<=5; i++)
    {
        factorial =1;
        for(j=1; j<=i; j++)
        {
            factorial = factorial*j;
        }
        sum = sum+factorial+(i-1);
    }
    return sum+(i-1);
}