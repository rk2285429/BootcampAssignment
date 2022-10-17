// Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
void comp(char[], char[]);
int main()
{
    char str1[20], str2[20];
    printf("Enter first string:- ");
    fgets(str1,20,stdin);
    printf("Enter second string:- ");
    fgets(str2,20,stdin);
    comp(str1, str2);
    return 0;
}
void comp(char str1[], char str2[])
{
    int i=0;
    while(str1[i]||str2[i])
    {
        if(str1[i]>str2[i])
        {
            printf("%s is greater than %s",str1,str2);
            break;
        }
        else if(str1[i]<str2[i])
        {
            printf("%s is greater than %s",str2,str1);
            break;
        }
        i++;
    }
    if(i==strlen(str1))
    {
        printf("%s and %s are equal.",str1, str2);
    }
}