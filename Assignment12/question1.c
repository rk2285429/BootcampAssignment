// Write a recursive function to print first N natural numbers
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
    if(num==0)
    {
        return;
    }
    natural(num-1);
    printf("%d, ",num);
}