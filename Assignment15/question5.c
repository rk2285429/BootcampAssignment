// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element.
#include<stdio.h>
int FO(int[], int);
int main()
{
    int size, i, result;
    printf("Enter the size:-");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers:-\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    result = FO(arr, size);
    printf("Duplicate values = %d", result);
    return 0;
}
int FO(int arr[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
}