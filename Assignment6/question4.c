// Write a program to calculate sum of squares of first N natural numbers.
#include<stdio.h>
int main()
{
    int i, num, square, sum=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        square = i*i;
        sum = sum+square;
    }
    printf("The sum of square of first %d natural number is %d",num,sum);
    return 0;
}