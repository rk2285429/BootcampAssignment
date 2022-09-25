// Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void rotate(int[], int, int, int); 
int main()
{
    int size, d, p, i;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    printf("Enter %d numbers:-\n",size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to move:-");
    scanf("%d",&p);
    printf("Enter the direction in which you want to rotate(-1 for left and +1 for right rotation):-");
    scanf("%d",&d);
    rotate(arr, size, p, d);
}
void rotate(int arr[], int n, int p, int d)
{
    int i, j, swap;
    if(d<0)
    {
        for(i=0; i<p; i++)
        {
            swap = arr[0];
            for(j=0; j<n-1; j++)
            {
                arr[j]=arr[j+1];
                printf("%d \n", arr[j]);
            }
            arr[n-1] = swap;
        }
    }
    else
    {
        for(i=0; i<p; i++)
        {
            swap = arr[n-1];
            for(j=n-1; j>0; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[0]=swap;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}