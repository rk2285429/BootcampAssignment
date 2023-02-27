// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *p;
    printf("Enter the size of memory in bytes:- \n");
    scanf("%d",&n);
    p = (int*)malloc(n);   
    if(p == NULL)
    {
        printf("Memory Allocation is Failed");
    }
    printf("Enter the values:- \n");
    scanf("%d",p);
    printf("Value = %d",*p);
    return 0;
}