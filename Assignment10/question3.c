// Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int oddEven(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = oddEven(number);
    if(result==1)
    {
        printf("%d is Even Number",number);
    }
    else
    {
        printf("%d is Odd Number",number);
    }
    return 0;
}
int oddEven(int number)
{
    if(number%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}