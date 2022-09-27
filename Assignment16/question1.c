// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    int i, j;
    printf("Enter the nine elements for 1st matrix:- \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the nine elements for 2nd matrix:- \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            m3[i][j] =  m1[i][j]+ m2[i][j];
        }
    }
    printf("Sum is:- \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
}