// Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.
#include<stdio.h>
int main()
{
    int i, digit=0, alph=0, ap=0;
    char str[20];
    printf("Enter a stringh:-");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i]>='0' & str[i]<='9')
        {
            digit++;
        }
        else if(str[i]>='a'&str[i]<='z')
        {
            alph++;
        }
        else if(str[i]>='A'&str[i]<='Z')
        {
            alph++;
        }
        else
        {
            ap++;
        }
    }
    printf("Alphabets = %d \n",alph);
    printf("Digits = %d \n",digit);
    printf("Special character = %d \n",ap);
    return 0;
}