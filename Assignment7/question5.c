// Write a program to check whether two given numbers are co-prime
// numbers or not
#include<stdio.h>
int main()
{
    int i, num1, num2, min , HCF;
    printf("Enter two numbers:-");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }
    for(i=min;i>=1;i--)
    {
        if(num1%i==0 & num2%i==0)
        {
            HCF = i;
            break;
        }
    }
    if(HCF == 1)
    {
        printf("%d and %d are CO-PRIME",num1,num2);
    }
    else
    {
        printf("%d and %d are not CO-PRIME",num1,num2);
    }
    return 0;
}
