// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
char reverse(int , int, char[]);
int main()
{
    char str[20];
    printf("Enter a string:- ");
    fgets(str,20,stdin);
    int i = 0, j;
    j = strlen(str)-2;
    while(str[i])
    {
        str[i] = reverse(i, j, str);
        i++;
        j--;
    }
    printf("Reversed string = %s",str);
    return 0;
}
char reverse(int i, int j, char str[])
{
    if(i<j)
    {
    char swap;
    swap = str[i];
    str[i] = str[j];
    str[j] = swap;
    }
    return str[i];
}