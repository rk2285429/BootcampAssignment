// Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int i, j, count, number;
    printf("Enter a number:-");
    scanf("%d",&number);
    for(i=number+1; 1; i++)
    {
        count = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("Next Prime number of %d is %d ",number,i);
            break;
        }
    }
    return 0;
}