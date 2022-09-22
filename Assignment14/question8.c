// Write a program to find the second smallest number in an array.Take array values
// from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, j, smallest, swap;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=9; i++)
    {
        smallest = arr[i];
        for(j=i; j<=9; j++)
        {
            if(arr[j]<smallest)
            {
                swap = arr[j];
                arr[j]= smallest;
                smallest = swap;
            }
        }
        arr[i]= smallest;
    }
    printf("Second smallest = %d",arr[1]);
    return 0;
}