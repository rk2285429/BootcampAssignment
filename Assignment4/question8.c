// Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Squares of first 10 natural numbers are:- \n");
    for(i=1; i<=10; i++)
    {
        printf("%d -> %d \n",i,i*i);
    }
    return 0;
}