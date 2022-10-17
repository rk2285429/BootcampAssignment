// Write a function to count words in a given string
#include<stdio.h>
int count(char[]);
int main()
{
    char str[1000];
    printf("Enter a string:- ");
    fgets(str, 30, stdin);
    printf("Words in \"%s\" is %d",str, count(str));
    return 0;
}
int count(char str[])
{
    int i=0, words=1;
    while(str[i])
    {
        if(str[i]==' ')
        {
            words++;
        }
        i++;
    }
    return words;
}