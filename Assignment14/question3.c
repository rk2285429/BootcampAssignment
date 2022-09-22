// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, sumE=0, sumO=0;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sumE = sumE+arr[i];
        }
        else
        {
            sumO = sumO+arr[i];
        }
    }
    printf("Sum of even numbers are:- %d",sumE);
    printf("\nSum of odd numbers are:- %d", sumO);
    return 0;
}