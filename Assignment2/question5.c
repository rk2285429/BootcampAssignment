// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int num,ones,tens,hundreds,sum;
    printf("Enter a three digit number:-");
    scanf("%d",&num);
    ones = num % 10;
    tens = (num/10) % 10;
    hundreds = num/100;
    sum = ones+tens+hundreds;
    printf("The sum of digits of %d is %d",num,sum);
    return 0;
}