// Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("Octal of %d is:-",number);
    octal(number);
    return 0;
}
void octal(int n)
{
    if(n<8)
    {
        printf("%d",n);
    }
    else
    {
        octal(n/8);
        printf("%d",n%8);
    }
}