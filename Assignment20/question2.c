// Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
void swap(char*,char*);
int main()
{
    char p[10], q[10];
    printf("Enter first string:- \n");
    gets(p);
    printf("Enter second string:- \n");
    gets(q);
    swap(p,q);
    printf("p=%s and q=%s",p,q);
    return 0;
}
void swap(char *a , char *b)
{
    char str[10], i;
    for(i=0; i<10; i++)
    {
        str[i] = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = str[i];
    }
}