// Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20], b[10][20];
    int i, j;
    printf("Enter 10 strings:- ");
    for(i=0; i<10; i++)
    {
        fgets(a[i],20,stdin);
        strcpy(b[i],a[i]);
    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(b[i],a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b[i]);
            }
        }
    }
    printf("Sorted string is:- \n");
    for(i=0; i<10; i++)
    {
        printf("%s",a[i]);
    }
    return 0;
}