// Write a program to draw the following patterns:
//    1
//   121
//  12321
// 1234321
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(j>=5-i&j<=3+i)
            {
                for(k=1; k<=i; k++)
                {
                    printf("%d",k);
                }
                for(l=i-1; l>=1; l--)
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