// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
    int number;
    printf("Enter a number:-");
    scanf("%d",&number);
    natural(number);
    return 0;
}
void natural(int num)
{
    int i;
    for(i=1; i<=num; i++)
    {
        printf("%d ",i);
    }
}