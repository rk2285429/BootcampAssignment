// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, sum=0;
    float avg;
    printf("Enter 10 numbers:-");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    avg = sum/10.0;
    printf("Average of above 10 numbers are:- %0.1f",avg);
    return 0;
}