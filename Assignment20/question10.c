// Write a program to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
int main()
{
    int l, i;
    char str[20];
    printf("Enter a string:- \n");
    fgets(str,20,stdin);
    l = strlen(str)-1;
    for(i=l-1; i>=0; i--)
    {
        printf("%c",*(str+i));
    }
    return 0;
}