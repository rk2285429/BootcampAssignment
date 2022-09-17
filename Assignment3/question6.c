// Write a program to print greater between two numbers. Print one number of both are 
// the same
#include<stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter two numbers:-");
    scanf("%d %d",&num1,&num2);
    num1>=num2?(num1==num2?printf("%d is equal to %d",num1,num2):printf("%d is greater than %d",num1,num2)):printf("%d is greater than %d",num2,num1);
    return 0;
}