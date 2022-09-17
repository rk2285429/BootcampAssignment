// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number:-");
    scanf("%d", &n);
    for(i=2*n-1; i>=1; i--)
    {
        if(i%2 != 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}