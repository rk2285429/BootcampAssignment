// Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter your name:- ");
    fgets(ch,20,stdin);
    for(i=0; ch[i];i++);
    printf("Size = %d",i-1);
    return 0;
}