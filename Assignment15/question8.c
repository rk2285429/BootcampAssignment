// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void countE(int[], int);
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
    printf("Unique numbers are:- ");
    countE(arr, size);
    return 0;
}
void countE(int arr[], int size)
{
    int count, i, j;
    for(i=0; i<size; i++)
    {
        count = 0;
        for(j=0; j<size; j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
        }
    }
}