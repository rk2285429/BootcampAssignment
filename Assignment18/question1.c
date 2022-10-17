// Write a function to calculate length of the string
#include<stdio.h>
int length(char[]);
int main()
{
    char str[20];
    printf("Enter a string:-");
    fgets(str,20,stdin);
    printf("Length = %d",length(str));
    return 0;
}
int length(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    return i-1;
}