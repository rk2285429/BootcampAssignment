// Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string:- \n");
    fgets(&(str[0]),20,stdin);
    for(i=0; *(str+i); i++);
    printf("Length = %d",i-1);
    return 0;
}