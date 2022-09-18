// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int, int);
int main()
{
    int number1, number2;
    printf("Enter two number(1st smaller and 2nd greater):-");
    scanf("%d %d",&number1, &number2);
    printf("Prime number between %d and %d is  ",number1,number2);
    prime(number1, number2);
    return 0;
}
void prime(int number1, int number2)
{
    int i, j, count;
    for(i=number1; i<=number2; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count<=2)
        {
            printf("%d, ",i);
        }
    }
}