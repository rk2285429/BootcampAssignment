// Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right
#include<stdio.h>
int main(){
    int num,result;
    printf("Enter a three digit number:-");
    scanf("%d",&num);
    result = (num/10)+(num%10)*100;
    printf("Rotated number is:- %d \n",result);
    return 0;

}