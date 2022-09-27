// Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int m, i, j, sum=0;
    printf("Enter the row/column of a square matrix:- ");
    scanf("%d",&m);
    int a[m][m];
    printf("Enter a %d*%d matrix:- \n",m,m);
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i+j == m-1)
            {
                sum = sum+a[i][j]; 
            }
        }
    }
    printf("Sum of left Diagonals = %d",sum);
    return 0;
}