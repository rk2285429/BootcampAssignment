// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int m, i, j, zero=0, nonZero=0;
    printf("Enter the Row/column of a square matrix:- ");
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
            if(a[i][j]==0)
            {
                zero++;
            }
            else
            {
                nonZero++;
            }
        }
    }
    if(zero>nonZero)
    {
        printf("Above matrix is 'SPARSE MATRIX'");
    }
    else
    {
        printf("Above matrix is not a 'SPARSE MATRIX'");
    }
    return 0;
}