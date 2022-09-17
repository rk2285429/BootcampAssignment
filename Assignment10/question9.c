// Write a function to check whether a given number contains a given digit or not. 
// (TSRS)
#include<stdio.h>
int digits(int,int);
int main()
{
    int number, digit, result;
    printf("Enter Number:-");
    scanf("%d",&number);
    printf("Enter Digit:-");
    scanf("%d",&digit);
    result = digits(number,digit);
    if(result == 1)
    {
        printf("%d is in %d",digit,number);
    }
    else
    {
        printf("%d is in %d",digit,number);
    }
    return 0;
}
int digits(int number, int digit)
{
    int i, count=0, number1;
    number1 = number;
    while(number1!=0)
    {
        count++;
        number1 = number1/10;
    }
    // printf("The number of Digit = %d \n",count);
    for(i=1; i<=count; i++)
    {
        if(number%10==digit)
        {
            return 1;
        }
        else
        {
            number = number/10;
        }
    }
}