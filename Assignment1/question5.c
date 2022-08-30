// WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<string.h>
int main(){
    char ch[100] ="Ranjan Kumar";
    int length = strlen(ch);
    printf("The length of %s is %d",ch,length);
    return 0;
}