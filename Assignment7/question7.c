// Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i, j, count, num1, num2;
    printf("Enter Two numbers:-");
    scanf("%d %d",&num1,&num2);
    for(i=num1; i<=num2; i++)
    {
        count =0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}