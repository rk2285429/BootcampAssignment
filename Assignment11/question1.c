// Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{
    int number1, number2, result, greater, smaller ;
    printf("Enter two numbers:-");
    scanf("%d %d",&number1,&number2);
    if(number1>number2)
    {
        greater = number1;
        smaller = number2;
    }
    else
    {
        greater = number2;
        smaller = number1;
    }
    result = LCM(greater, smaller);
    printf("LCM of %d and %d is %d",number1,number2,result);
    return 0;
}
int LCM(int greater, int smaller)
{
    int i, product;
    for(i=1; i<=greater; i++)
    {
        product = greater*i;
        if(product%smaller==0)
        {
            break;
        }
    }
    return product;
}