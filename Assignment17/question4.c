// Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i]>=97 & str[i]<=122)
        {
            str[i] = str[i]-32;
        }
    }
    printf("Uppercase string => %s",str);
    return 0;
}