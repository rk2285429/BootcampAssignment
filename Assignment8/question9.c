// Write a program to draw the following patterns:
// 1234321
//  12321
//   121
//    1
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(j>=i & j<=8-i)
            {
                for(k=1; k<=5-i; k++)
                {
                    printf("%d",k);
                }
                for(l=4-i; l>=1; l--)
                    {
                        printf("%d",l);
                    }
                break;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}