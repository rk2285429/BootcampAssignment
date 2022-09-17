// Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Cubes of first 10 Natural number are:- \n");
    for(i=1; i<=10; i++)
    {
        printf("%d -> %d \n",i,i*i*i);
    }
    return 0;
}