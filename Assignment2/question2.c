// Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int number,result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = number/10;
    printf("The %d without its last digit is %d",number,result);
    return 0;
}