// Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    odd(number);
    return 0;
}
void odd(int num)
{
    int i;  
    for(i=1; i<=2*num-1; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}