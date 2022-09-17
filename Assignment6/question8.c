// Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=2; i<=num; i++)
    {
        if(num%i == 0)
        {
            break;
        }
    }
    if(num==i)
    {
        printf("%d is PRIME NUMBER",num);
    }
    else
    {
        printf("%d is NON-PRIME NUMBER",num);
    }
    return 0;
}