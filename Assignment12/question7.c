// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    square(number);
    return 0;
}
void square(int n)
{
    if(n==1)
    {
        printf("%d, ",n*n);
    }
    else
    {
        square(n-1);
        printf("%d, ",n*n);
    }
}