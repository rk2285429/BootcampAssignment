//Write a program to print unit digit of a given number.
#include<stdio.h>
int main(){
    int number , remainder;
    printf("Enter a number:-");
    scanf("%d",&number);
    remainder = number%10;
    printf("The unit digit of %d is %d",number,remainder);
    return 0;
}