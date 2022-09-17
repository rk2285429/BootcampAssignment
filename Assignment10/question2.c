// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int simpleInterest(int,int,int);
int main()
{
    int p, r, t, result;
    printf("Enter the principle amount:-");
    scanf("%d",&p);
    printf("Enter the Rate of Interest:-");
    scanf("%d",&r);
    printf("Enter the time of loan(In month):-");
    scanf("%d",&t);
    result = simpleInterest(p,r,t);
    printf("Simple Interest = %d",result);
    return 0;
}
int simpleInterest(int p,int r,int t)
{
    return (p*r*t)/100;
}