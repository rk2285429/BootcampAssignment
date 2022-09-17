// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,remainder,new1,new2,count=0,sum=0;
    for(i=1; i<=1000; i++)
    {
        new1 = i;
        new2 = i;
        sum = 0;
        count = 0;
        while(new1!=0)
        {
            count++;
            new1 = new1/10;
        }
        for(j=1; j<=count; j++)
        {
            remainder = new2%10;
            sum = sum + pow(remainder,count);
            new2 = new2/10;
        }
        if(sum == i)
        {
            printf("%d, ",i);
        }
    }  
    return 0;
}