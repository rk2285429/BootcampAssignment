// Write a function to find the repeated character in a given string.
#include<stdio.h>
void repeat(char[]);
int main()
{
    char str[20];
    printf("Enter a string:-");
    fgets(str,20,stdin);
    printf("Repeated characters are:- \n");
    repeat(str);
    return 0;
}
void repeat(char str[])
{
    int i, j, count;
    for(i=0; str[i]; i++)
    {
        count = 0;
        for(j=0; str[j]; j++)
        {
            if(j<i & str[j]==str[i])
            {
                break;
            }
            else if(j>i & str[j]==str[i])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%c => %d \n",str[i],count+1);
        }
    }
}