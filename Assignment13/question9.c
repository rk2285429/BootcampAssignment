// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = count(number);
    printf("Count of digits of %d is %d",number,result);
    return 0;
}
int count(int n)
{
    if(n<10)
    {
        return 1;
    }
    return 1+count(n/10);
}