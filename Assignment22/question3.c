// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int *p, sum=0, n;
    printf("Enter the size of array:- \n");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("Enter the number:- \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",p+i);
        sum = sum+*(p+i);
    }
    printf("Sum = %d",sum);
    free(p);
}