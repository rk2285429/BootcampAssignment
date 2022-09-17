// Write a program to make the last digit of a number stored in a variable as zero. 
// (Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    int transformed = (num/10)*10;
    printf("The transformation of %d is %d",num,transformed);
    return 0;
}