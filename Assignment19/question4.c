// Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[10][20], search[20];
    printf("Enter 10 strings:- ");
    for(i=0; i<10; i++)
    {
        gets(str[i]);
    }
    printf("Enter the string to search:- \n");
    gets(search);
    for(i=0; i<10; i++)
    {
        if(strcmp(search,str[i])==0)
        {
            printf("%s exist.",str[i]);
            break;
        }
    }
    if(i==10)
    {
        printf("%s does not exists.");
    }
    return 0;
}