// Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    binary(number);
    return 0;
}
void binary(int n)
{
    if(n==0)
    {
        printf("%d",n);
    }
    else
    {
        binary(n/2);
        printf("%d",n%2);
    }
}