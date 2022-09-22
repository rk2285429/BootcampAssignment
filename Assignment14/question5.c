// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, smallest;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            smallest=arr[0];
        }
        else if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Smallest = %d",smallest);
    return 0;
}