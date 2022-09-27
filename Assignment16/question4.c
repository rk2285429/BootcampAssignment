// Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int m,i, j;
    printf("Enter the column/row of square matrix:- ");
    scanf("%d",&m);
    int a[m][m];
    printf("Enter a %d*%d matrix:-\n",m,m);
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum =0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==j)
            {
                sum = sum+a[i][j];
            }
        }
    }
    printf("Sum of Right Diagonal = %d", sum);
    return 0;
}