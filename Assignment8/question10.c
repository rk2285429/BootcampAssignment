// Write a program to draw the following patterns:
// 1234321
// 123 321
// 12   21
// 1     1
#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=1; i<=4; i++)
    {
        count = 0;
        for(j=1; j<=5-i; j++)
        {
            printf("%d",++count);
        }
        for(j=2; j<2*i-1; j++)
        {
            printf(" ");
        }
        if(i==1)
        {
            count--;
        }
        while(count!=0)
        {
            printf("%d",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}