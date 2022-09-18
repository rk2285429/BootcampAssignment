// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextPrime(int);
int main()
{
    int number, result;
    printf("Enter a number:-");
    scanf("%d",&number);
    result = nextPrime(number);
    printf("The next prime number of %d is %d",number,result);
    return 0;
}
int nextPrime(int number)
{
    int i, j, count;
    for(i=number+1; 1; i++)
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
            return i;
        }
    }
}