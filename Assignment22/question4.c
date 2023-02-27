// Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    char c;
    int i=0, j=1;
    p = (char*)malloc(sizeof(char));
    printf("Enter a string:- \n");
    while(c != '\n')
    {        
        c = getc(stdin);
        j++;
        p = (char*)realloc(p,j*sizeof(char));
        p[i] = c;
        i++;
    }
    p[i] = '\0';
    printf("Text is %s",p);
    return 0;
}