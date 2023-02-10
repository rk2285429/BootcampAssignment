// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int*, int);
int main()
{
    int str[10], i;
    printf("Enter 10 numbers:- \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&str[i]);
    }
    sort(str, 10);
    printf("Sorted array is:- \n");
    for(i=0; i<10; i++)
    {
        printf("%d ",str[i]);
    }
    return 0;
}
void sort(int *p, int size)
{
    int minimum;
    int i,j;
    for(i=0; i<size; i++)
    {
        minimum= *(p+i);
        for(j=i; j<size; j++)
        {
            if(*(p+j)<minimum)
            {
                minimum = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = minimum;
            }
        }
    }
}