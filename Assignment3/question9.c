// Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:-");
    scanf("%d %d %d",&a,&b,&c);
    printf("The greatest of three are:-");
    if(a>b)
    {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c); 
    }
    else 
        if(c>a)
            if(c>b)
                printf("%d",c);
            else
                printf("%d",b);
        else
            printf("%d",b);
}