// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int num,result;
    printf("Enter a number:-");
    scanf("%d",&num);
    result = num/100;
    if(0<result & result<10)
    {
        printf("%d is a Three digit number",num);
    }
    else
    {
        printf("%d is not a Three digit number",num);
    }
    return 0;
}