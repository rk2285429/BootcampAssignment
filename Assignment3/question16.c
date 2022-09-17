// Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:-");
    scanf("%c",&ch);
    if('A'<=ch & ch<='Z')
    {
        printf("UPPER CASE");
    }
    else if('a'<=ch & 'z'>=ch)
    {
        printf("LOWER CASE");
    }
    else if('0'<=ch & ch<='9')
    {
        printf("DIGIT");
    }
    else
    {
    printf("Special Character");
    }
}