// Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)
#include<stdio.h>
int main(){
    int num , digit , result;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("Enter a single digit:-");
    scanf("%d",&digit);
    result = (num*10)+digit;
    printf("The number after appending %d and %d is %d",num,digit,result);
    return 0;
}