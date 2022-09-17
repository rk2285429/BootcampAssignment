// Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i, num, cube, sum=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        cube = i*i*i;
        sum = sum+cube;
    }
    printf("The sum of cube of first %d natural number is %d",num,sum);
    return 0;
}