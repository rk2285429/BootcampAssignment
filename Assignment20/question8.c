// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n, i, sum =0;
    printf("Enter the size of array:- \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d number:- \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
        sum = sum + *(arr+i);
    }
    printf("Sum of array - %d", sum);
    printf("\nEnter e to exit:- \n");
    getch();
    return 0;
}