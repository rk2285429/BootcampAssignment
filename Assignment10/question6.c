// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = fact(number);
    printf("Factorial of %d is %d",number,result);
    return 0;
}
int fact(int number)
{
    int i, factorial=1;
    for(i=1; i<=number; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}