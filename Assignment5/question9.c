// Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("The cube of first %d natural numbar is:- \n",num);
    for(i=1; i<=num; i++)
    {
        printf("%d->%d \n",i,i*i*i);
    }
    return 0;
}