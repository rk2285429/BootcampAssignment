// Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result=square(number);
    printf("Square of %d is %d",number,result);
    return 0;
}
int square(int number)
{
    return number*number;
}