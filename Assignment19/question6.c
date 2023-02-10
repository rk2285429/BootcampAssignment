// Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k;
    char str[10][20];
    printf("Enter 10 strings:- ");
    for(i=0; i<10; i++)
    {
        fgets(str[i],20,stdin);
    }
    printf("Palindrome strings are:- \n");
    for(i=0; i<10; i++)
    {
        k=strlen(str[i])-2;
        for(j=0; j<k; j++)
        {
            if(str[i][j] != str[i][k])
            {
                break;
            }
            k--;
        }
        if(j>=k)
        {
            printf("%s",str[i]);
        }
    }
    return 0;
}