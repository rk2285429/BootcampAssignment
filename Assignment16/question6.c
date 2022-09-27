// Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int m, i, j, sumR, sumC;
    printf("Enter the Row/Column of a square matrix:- ");
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
        sumR = 0;
        sumC = 0;
        for(j=0; j<m; j++)
        {
            sumR = sumR+a[i][j];
            sumC = sumC+a[j][i];
        }
        printf("Sum of Row%d is %d \n",i+1, sumR);
        printf("Sum of Column%d is %d \n",i+1, sumC);
    }
    return 0;
}