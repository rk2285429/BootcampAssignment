// Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char str[20], swap[20], i;
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        swap[i] = str[i];
    }
    printf("Copied string:- %s",swap);
    return 0;
}