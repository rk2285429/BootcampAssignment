// Write a function to transform string into uppercase
#include<stdio.h>
char upper(char[], int);
int main()
{
    char str[20];
    printf("Enter a string:-");
    fgets(str,20,stdin);
    int i=0;
    while(str[i])
    {
        if(str[i]>='a'&str[i]<'z')
        {
            str[i] = upper(str, i);
        }
        i++;
    }
    printf("Upper => %s",str);
    return 0;
}
char upper(char str[], int i)
{
    return (str[i]-32);
}