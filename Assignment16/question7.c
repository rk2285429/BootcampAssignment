// Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int m, i, j;
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
            if(j>i)
            {
                a[i][j] = 0;
            }
        }
    }
    printf("Lower triangular matrix is:- \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}