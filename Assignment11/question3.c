// Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int isPrime(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = isPrime(number);
    if(result>2)
    {
        printf("NON-PRIME");
    }
    else
    {
        printf("PRIME NUMBER");
    }
    return 0;
}
int isPrime(int number)
{
    int i, count=0;
    for(i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    return count;
}