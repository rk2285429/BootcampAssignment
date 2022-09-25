// Write a function in C to merge two arrays of the same size sorted in descending 
// order.
#include<stdio.h>
void merge(int[], int[], int);
int main()
{
    int size, i;
    printf("Enter the size of arrays:-");
    scanf("%d",&size);
    int a[size], b[size];
    printf("Enter %d numbers for first array:-\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d numbers for second array:-\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Merged and sorted array:-\n");
    merge(a, b, size);
    return 0;
}
void merge(int a[], int b[], int size)
{
    int i, j, swap, greatest, c[2*size] ;
    for(i=0; i<2*size; i++)
    {
        if(i<size)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-size];
        }
    }
    for(i=0; i<2*size; i++)
    {
        greatest = c[i];
        for(j=i; j<2*size; j++)
        {
            if(greatest<c[j])
            {
                swap = c[j];
                c[j] = greatest;
                greatest = swap;
            }
        }
        c[i] = greatest;
    }
    for(i=0; i<2*size; i++)
    {
        printf("%d ",c[i]);
    }
}