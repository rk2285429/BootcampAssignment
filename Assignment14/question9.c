// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size], i;
    printf("Enter %d numbers:-",size);
    for(i=0; i<=(size-1); i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=(size-1); i++)
    {
        printf("%d ",arr[size-i-1]);
    }
    return 0;
}