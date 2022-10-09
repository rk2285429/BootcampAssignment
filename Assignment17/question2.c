// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[20];
    int i, count=0;
    printf("Enter a string:-");
    fgets(str,20,stdin);
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    for(i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Occurence of %c -> %d",ch,count);
    return 0;
}