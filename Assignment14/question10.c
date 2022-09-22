// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<stdio.h>
int main()
{
    int a[10], b[10], i;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array :- ");
    for(i=0; i<=9; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<=9; i++)
    {
        b[i] = a[i];
    }
    printf("\nCopied array is:- ");
    for(i=0; i<=9; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}