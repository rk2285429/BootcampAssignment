// Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int);
int main()
{
    int number, pass;
    printf("Enter a number:-");
    scanf("%d",&number);
    pass = 2*number-1;
    odd(pass);   
    return 0;
}
void odd(int n)
{
    if(n==1)
    {
        printf("%d, ",n);
    }
    else
    {
        odd(n-2);
        printf("%d, ",n);
    }
}