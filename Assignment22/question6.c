// Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, largest,swap;
    p = (int*)calloc(5,sizeof(int));
    printf("Enter 5 Elements:- \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",p+i);
    }
    largest = p[0];
    for(int i=0; i<5; i++)
    {
        if(largest<p[i])
        {
            swap = largest;
            largest = p[i];
            p[i] = swap;
        }
    }
    printf("Largest Element = %d",largest);
    return 0;
}