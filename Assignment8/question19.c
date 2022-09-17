// Write a program to draw the following patterns:
//    ****     ****
//   ******   ******
//  ******** ********
// ******Mysirg*******
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=18; j++)
        {
            if(j>=5-i & j<=6+i)
            {
                printf("*");
            }
            else if(j>=14-i & j<=15+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1; i<=6; i++)
    {
        printf("*");
    }
    printf("MySirG");
    for(i=1; i<=7; i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=18; j++)
        {
            if(j>=i+1 & j<=19-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}