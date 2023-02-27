// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *n, *p;
    int sum=0;
    n = (int*)malloc(sizeof(int));
    printf("Enyer the size of Array:- \n");
    scanf("%d",n);
    p = (int*)calloc(*n,sizeof(int));
    printf("Enter %d numbers:- ",*n);
    for(int i=0; i<*n; i++)
    {
        scanf("%d",p+i);
        sum = sum+p[i];
    }
    printf("Average = %0.1f",sum*1.0/(*n));
}