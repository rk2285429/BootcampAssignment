// Write a program to draw the following patterns:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<stdio.h>
int main()
{
    int i, j;
    char ch;
    for(i=1; i<=5; i++)
    {
        ch = 'A';
        for(j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c",ch++);
        }
        ch--;
        while(ch>'A')
        {
            ch--;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}