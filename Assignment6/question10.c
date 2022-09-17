// Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num, remainder, reverse=0;
    printf("Enter a number:-");
    scanf("%d",&num);
    printf("The Reverse of %d is ",num);
    while(num!=0)
    {
        remainder = num%10;
        num = num/10;
        reverse= (reverse+remainder)*10;
    }
    reverse = reverse/10;
    printf("%d ",reverse);
    return 0;
}