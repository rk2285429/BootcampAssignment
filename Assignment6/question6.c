// Write a program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int i, num, fact=1;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    } 
    printf("Factorial of %d is %d",num, fact);
    return 0;
}