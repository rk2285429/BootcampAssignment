// WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter your name:-");
    gets(name);
    printf("\"Hello , %s\"",name);

}