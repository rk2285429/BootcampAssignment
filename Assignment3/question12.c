// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:-");
    scanf("%c",&ch);
    if('A'<=ch & ch<='Z')
    {
        printf("UPPER CASE");
    }
    else if('a'<=ch & ch<='z')
    {
        printf("LOWER CASE");
    }
    return 0;
}