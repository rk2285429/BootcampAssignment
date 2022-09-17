// Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int i, num, last;
    printf("Enter a number:-");
    scanf("%d",&num);
    for(i=1; i<=2*num-1; i++)
    {
        if(i%2 != 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}