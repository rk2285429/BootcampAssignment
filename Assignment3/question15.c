// Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    if(num>0)
        printf("POSITIVE NUMBER");
    else if(num<0)
        printf("NEGATIVE NUMBER");
    else
        printf("ZERO");
    return 0;
}