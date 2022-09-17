// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD.
#include<stdio.h>
int main(){
    int rupee;
    float USD;
    printf("Enter rupees:-");
    scanf("%d",&rupee);
    USD = rupee*76.23;
    printf("%d rupee in USD is %0.2f",rupee,USD);
    return 0;
}