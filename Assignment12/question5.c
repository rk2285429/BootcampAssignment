// Write a recursive function to print first N even natural numbers
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
        printf("%d, ",n);
    }
    else
    {
        even(n-2);
        printf("%d, ",n);
    }
}