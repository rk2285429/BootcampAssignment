// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter column of matrix:- ");
    scanf("%d",&m);
    printf("Enter Row of matrix:- ");
    scanf("%d",&n);
    int a[m][n], aT[n][m];
    printf("Enter a %d*%d matrix:- \n",m,n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            aT[i][j] = a[j][i];
        }
    }
    printf("Transpose of Matrix is:- \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",aT[i][j]);
        }
        printf("\n");
    }
    return 0;
}