// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:-");
    scanf("%d %d",&a,&b);
    printf("Value before swapping:- a=%d and b=%d \n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value after swapping:- a=%d and b=%d\n",a,b);
    return 0;
}