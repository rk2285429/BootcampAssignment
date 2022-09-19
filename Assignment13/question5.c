// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = sum(number);
    printf("Sum of digits of %d is %d",number,result);
    return 0;
}
int sum(int n)
{
    if(n<10)
    {
        return n;
    }
    return n%10+sum(n/10);
}
