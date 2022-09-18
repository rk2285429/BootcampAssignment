// Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{
    int num1, num2, result;
    printf("Enter two numbers:-");
    scanf("%d %d",&num1,&num2);
    result = HCF(num1,num2);
    printf("HCF of %d and %d is %d",num1,num2,result);
    return 0;
}
int HCF(int num1, int num2)
{
    int i;
    for(i=num1; i>=1; i--)
    {
        if(num1%i==0 & num2%i==0)
        {
            break;
        }
    }
    return i;
}