// Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
int main()
{
    int i, vowels=0, cons=0;
    char str[20];
    printf("Enter a string:- \n");
    fgets(&str[0],20,stdin);
    for(i=0; *(str+i); i++)
    {
        if(*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u')
        {
            vowels++;
        }
        else if(*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U')
        {
            vowels++;
        }
        else if(*(str+i)!=' '&&*(str+i)!='\n')
        {
            cons++; 
        }
    }
    printf("Vowels =%d and constraints =%d",vowels,cons);
    return 0;
}