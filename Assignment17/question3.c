// Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    int i, count=0;
    char str[20];
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            count++;
        }
    }
    printf("Vowel = %d",count);
    return 0;
}