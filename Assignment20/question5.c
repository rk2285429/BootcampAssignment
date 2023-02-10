// Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main()
{
    int x, y;
    int *p, *q;
    printf("Enter two numbers:- \n");
    scanf("%d%d",&x,&y);
    p = &x;
    q = &y;
    if(*p>*q)
    {
        printf("%d is greater.",*p);
    }
    else if(*q>*p)
    {
        printf("%d is greater.",*q);
    }
    else
    {
        printf("Both are equal.");
    }
    return 0;
}