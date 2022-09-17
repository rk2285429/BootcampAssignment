// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=2*num; i>=1; i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}