// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greater(int[],int);
int main()
{
    int size,i, result;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers:-",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    result = greater(arr, size);
    printf("Greatest number = %d",result);
    return 0;
}
int greater(int a[],int n)
{
    int great = 0, i;
    for(i=0; i<n; i++)
    {
        if(a[i]>great)
        {
            great = a[i];
        }
    }
    return great;
}