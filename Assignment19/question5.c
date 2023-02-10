// Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30];
    int i, j;
    printf("Enter 5 email address:- \n");
    for(i=0; i<5; i++)
    {
        fgets(str[i],30,stdin);
    }
    printf("Invalid Emails:- \n");
    for(i=0; i<5; i++)
    {
        for(j=0; str[i][j]; j++)
        {
            if(str[i][j]=='@')
            {
                break;
            }
        }
        if(j>=strlen(str[i])-1)
        {
            printf("%s ",str[i]);
        }
    }
    return 0;
}