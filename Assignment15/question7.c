// Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int countE(int[], int);
int main()
{
    int size, i, result;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers:-\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    result = countE(arr, size);
    printf("Number of Duplicate Elemnets= %d",result);
    return 0;
}
int countE(int arr[], int size)
{
    int count=0, i, j;
    for(i=0; i<size; i++)
    {
        for(j=i; j<size; j++)
        {
            if(arr[j+1]==arr[i])
            {
                count++;
            }
        }
    }
    return count;
}