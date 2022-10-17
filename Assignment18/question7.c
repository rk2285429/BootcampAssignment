// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrome(char[]);
int main()
{
    char str[20];
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    palindrome(str);
    return 0;
}
void palindrome(char str[])
{
    int i=0, j;
    j = strlen(str)-2;
    while(str[i])
    {
        if(str[i] != str[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(j<=0)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a Palindrome string");
    }
}