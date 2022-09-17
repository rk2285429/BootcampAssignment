// Write a program to check whether a given number is an even number or an odd 
// number without using % operator.
#include<stdio.h>
int main(){
    int num , result;
    printf("Enter a number:-");
    scanf("%d",&num);
    result = num&1;
    if(result == 0)
    {
        printf("%d is Even number",num);
    }
    else
    {
        printf("%d is Odd number",num);
    }
    return 0;
}