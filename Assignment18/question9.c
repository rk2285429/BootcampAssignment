// Write a function to reverse a string word wise. (For example if the given string is 
// “Mysirg Education Services” then the resulting string should be “Services Education 
// Mysirg” )
#include<stdio.h>
#include<string.h>
void reverse(char[]);
int main()
{
    char str[100], cpstr[100];
    printf("Enter a string:- ");
    fgets(str,100,stdin);
    int i;   
    reverse(str);
    printf("%s",str);
    return 0;
}
void reverse(char str[])
{
    int j, k=0, size, to, m, swap;
    size = strlen(str)-2;
    for(j=0; str[j]; j++)
    {
        if(str[j] == ' '|| j==size)
        {
            if(j==size)
            {
                to = j;
            }
            else
            {
                to = j-1;
            }
            for(m=k; m<j; m++)
            {
                if(m<to)
                {
                    swap = str[m];
                    str[m] = str[to];
                    str[to] = swap;
                }
                to--;
            }
            k = j+1;
        }
    }
    for(j=0; str[j]; j++)
    {
        if(j<size)
        {
            swap = str[j];
            str[j] = str[size];
            str[size] = swap;
        }
        size--;
    }
}