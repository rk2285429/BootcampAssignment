// Write a function in C to read n number of values in an array and display it in reverse 
// order.
#include<stdio.h>
void reverse(int[], int);
int main()
{
    int size, i;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers:-",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr, size);
    return 0;
}
void reverse(int arr[], int size)
{
    int i, b[size];
    for(i=0; i<size; i++)
    {
        b[i] = arr[size-1-i];
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",b[i]);
    }
}