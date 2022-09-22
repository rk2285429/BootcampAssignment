// Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, large=0, sLarge=0;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    for(i=0; i<=9; i++)
    {
        if(arr[i]<large & sLarge<arr[i])
        {
            sLarge = arr[i];
        }
    }
    printf("Second Largest = %d",sLarge);
    return 0;
}