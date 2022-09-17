// Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i, n=0;
    for(i=1; n<=9; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            n++;
        }
    }
    return 0;
}