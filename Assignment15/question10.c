// Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
int freq(int[], int, int);
int main()
{
    int size, i, result;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers:-",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Frequency of elements are:-\n");
    for(i=0; i<size; i++)
    {
        result = freq(arr, size, i);
        printf("%d -> %d \n",arr[i],result);
    }
    return 0;
}
int freq(int arr[], int size, int i)
{
    int count=0, j;
    for(j=0; j<size; j++)
    {
        if(arr[j]==arr[i])
        {
            count++;
        }
    }
    return count;
}