// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even(int);
int main()
{
    int number, pass;
    printf("Enter a number:-");
    scanf("%d",&number);
    pass = 2*number;
    even(pass);
    return 0;
}
void even(int n)
{
    if(n==2)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d, ",n);
        even(n-2);
    }
}