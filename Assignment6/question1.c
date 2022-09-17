// Write a program to calculate sum of first N natural number.
#include<stdio.h>
int main()
{
    int i, num, sum;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        sum = sum+i;
    }
    printf("The sum of first %d natural number is %d",num,sum);
    return 0;
}