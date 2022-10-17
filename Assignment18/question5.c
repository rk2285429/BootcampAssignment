// Write a function to transform a string into lowercase.
#include<stdio.h>
char lower(char[], int);
int main()
{
    char str[20];
    printf("Enter a string:-");
    fgets(str,20,stdin);
    int i=0;
    while(str[i])
    {
        if(str[i]>='A'&str[i]<'Z')
        {
            str[i] = lower(str, i);
        }
        i++;
    }
    printf("Lower => %s",str);
    return 0;
}
char lower(char str[], int i)
{
    return (str[i]+32);
}