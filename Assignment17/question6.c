// Write a program to reverse a string.
#include<stdio.h>
int main()
{
    int i, length=0;
    char str[20], swap[20];
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        swap[i] = str[i];
        length++;
    }
    for(i=0; str[i]; i++)
    {
        str[i] = swap[length-i-2];
    }
    printf("Reversed string => %s",str);
    return 0;
}