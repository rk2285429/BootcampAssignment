// Write a program to draw the following patterns:
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=1; i<=7; i++)
    {
        ch = 'A';
        for(j=1; j<=8-i; j++)
        {
            printf("%c",ch++);
        }
        for(j=2; j<2*i-1; j++)
        {
            printf(" ");
        }
        if(i==1)
        {
            ch--;
        }
        while(ch>'A')
        {
            ch--;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}