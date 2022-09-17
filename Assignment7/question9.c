// Write a program to check whether a given number is an Armstrong number
// or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num, new1, new2, i, remainder, sum=0, count=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    new1 = num;
    new2 = num;
    while(new1 != 0)
    {
        count++;
        new1 = new1/10;
    }
    for(i=0; i<=count; i++)
    {
        remainder = new2 % 10;
        sum = sum + pow(remainder,count);
        new2 = new2/10;
    }
    if(sum == num)
    {
        printf("%d is an Armstrong Number",num);
    }
    else
    {
        printf("%d is not an Armstrong Number",num);
    }
    return 0;
}