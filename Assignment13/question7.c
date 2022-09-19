// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int, int);
int main()
{
    int num1, num2, result;
    printf("Enter two number:-");
    scanf("%d %d",&num1,&num2);
    result = HCF(num1, num2);
    printf("HCF of %d and %d is %d",num1,num2,result);
    return 0;
}
int HCF(int n1, int n2)
{
    if(n2==0)
    {
        return n1;
    }
    HCF(n2,n1%n2);
}