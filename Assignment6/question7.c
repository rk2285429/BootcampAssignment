// Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("The number of digit in %d is ",num);
    for(i=1; num/10!=0; i++)
    {
        num = num/10;
    }
    printf("%d",i);
}