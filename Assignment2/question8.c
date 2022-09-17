// Write a program to check whether the given number is even or odd using a bitwise 
// operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    int result = num&1;
    if(result==0){
        printf("Even number");
    }
    else{
        printf("Odd Number");
    }
}