// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int[], int);
int main()
{
    int size;
    printf("Enter the size of array:-");  
    scanf("%d",&size);
    int arr[size], i, result;
    printf("Enter %d numbers:-",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }  
    result = smallest(arr, size);
    printf("Smallest number= %d",result);
    return 0;
}
int smallest(int a[], int n)
{
    int smallest=a[0], i;
    for(i=0; i<n; i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    return smallest;
}