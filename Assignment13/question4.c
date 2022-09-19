// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int square(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = square(number);
    printf("Sum of square of first %d natural number is:- %d",number,result);
    return 0;
}
int square(int n)
{
    if(n==1)
    {
        return n*n;
    }
    return n*n+ square(n-1);
}