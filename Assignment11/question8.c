// Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int factorial(int);
int combination(int, int);
void pascal(int);
int main()
{
    int number;
    printf("Enter the column of pascal triangle:-");
    scanf("%d",&number);
    pascal(number);
    return 0;
}
int factorial(int num)
{
    int i, fact=1;
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
void pascal(int number)
{
    int i, j, comb;
    for(i=0; i<number; i++)
    {
        for(j=0; j<=i; j++)
        {
            comb = combination(i,j);
            printf("%d ",comb);
        }
        printf("\n");
    }
}