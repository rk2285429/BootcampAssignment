// Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array:- \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:- \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}