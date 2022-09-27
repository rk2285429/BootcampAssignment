// Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int m, i, j, max=0, count, row;
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
        count = 0;
        for(j=0; j<m; j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max = count;
            row = i+1;
        }
    }
    printf("Row%d have maximum 1s.",row);
    return 0;
}