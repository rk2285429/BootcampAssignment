// Write a recursive function to print reverse of a given number
#include<stdio.h>
void reverse(int n);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("Reverse of %d is ",number);
    reverse(number);
    return 0;
}
void reverse(int n)
{
    if(n<10)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}