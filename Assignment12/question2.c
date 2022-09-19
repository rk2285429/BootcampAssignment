// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natural(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    natural(number);
    return 0;
}
void natural(int n)
{
    if(n==1)
    {
        printf("%d, ",n);
    }
    else
    {
        printf("%d, ",n);
        natural(n-1);
    }
}