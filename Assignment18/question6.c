// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
int check(char[]);
int main()
{
    char str[20];
    int result;
    printf("Enter a string:- ");
    fgets(str, 20, stdin);
    check(str);
    return 0;
}
int check(char str[])
{
    int i=0, alpha = 0, num = 0;
    while(str[i])
    {
        if(str[i]>='a'& str[i]<='z')
        {
            alpha++;
        }
        else if(str[i]>='A'& str[i]<='Z')
        {
            alpha++;
        }
        else if(str[i]>='0'& str[i]<='9')
        {
            num++;
        }
        i++;
    }
    if(alpha>0 & num>0)
    {
        printf("%s is Alphanumberic.");
    }
    else
    {
        printf("%s is not a Alphanumeric.");
    }
}