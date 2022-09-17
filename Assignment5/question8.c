// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("Square of first %d natural number is:- \n");
    for(i=1; i<=num; i++)
    {
        printf("%d->%d \n",i,i*i);
    }
    return 0;
}
