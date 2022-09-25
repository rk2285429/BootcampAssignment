// Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int[], int, int);
int main()
{
    int size;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size], i;
    printf("Enter the %d elements of array:-",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    {
        arr[i]=sort(arr, size, i);
    }
    for(i=0; i<size; i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
int sort(int arr[],int n, int i)
{
    int j, smallest=arr[i], swap;
    for(j=i; j<n; j++)
    {
        if(arr[j]<smallest)
        {
            swap = arr[j];
            arr[j] = smallest;
            smallest = swap;
        }
    }
    arr[i]=smallest;
    return arr[i];
}