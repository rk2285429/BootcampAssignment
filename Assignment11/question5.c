// Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("%d prime numbers are:- ",number);
    prime(number);
    return 0;
}
void prime(int number)
{
    int i, j, count;
    for(i=2; number!=0; i++)
    {
        count = 0;
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
            number--;
        }
    }
}