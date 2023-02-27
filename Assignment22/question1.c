// Define a function to input variable length string and store it in an array without
// memory wastage.
#include<stdio.h>
#include<stdlib.h>
void inp_str();
int main()
{
    char *str, c;
    int i=0, j=1;
    str = (char*)malloc(sizeof(char));
    printf("Enter string:- \n");
    while(c !='\n')
    {
        c = getc(stdin);
        j++;
        str = (char*)realloc(str,j*sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] ='\0';
    printf("String is %s",str);
    free(str);
    return 0;
}