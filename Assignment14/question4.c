// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, greatest=0;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>greatest)
        {
            greatest = arr[i];
        }
    }
    printf("Greatest = %d",greatest);
    return 0;
}