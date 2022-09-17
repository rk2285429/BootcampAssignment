// Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN).
#include<stdio.h>
void factor(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    printf("The factors of %d are:- ",number);
    factor(number);
    return 0;
}
void factor(int number)
{
    int i;
    for(i=2; i<=number; i++)
    {
        if(number%i==0)
        {
            printf("%d",i);
            number = number/i;
            i =1;
            if(number!=1)
            {
                printf(", ");
            }
        }
    }
}