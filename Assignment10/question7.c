// Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int items, selected;
    int r1, r2, r3;
    printf("Enter the number of total items:-");
    scanf("%d",&items);
    printf("Enter the number of items selected at a time:-");
    scanf("%d",&selected);
    r1 = fact(items);
    r2 = fact(selected);
    r3 = fact(items-selected);
    printf("Number of combination = %d",r1/(r2*r3));
    return 0;
}
int fact(int number)
{
    int i, factorial=1;
    for(i=1; i<=number; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}