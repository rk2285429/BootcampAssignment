// Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int items, selected;
    int r1, r2;
    printf("Enter the total number of items:-");
    scanf("%d",&items);
    printf("Enter the number ofitems selected at a time:-");
    scanf("%d",&selected);
    r1 = fact(items);
    r2 = fact(selected);
    printf("Number of Arrangements from %d items and %d selected at a time = %d",items,selected, r1/r2);
    return 0;
}
int fact(int numbers)
{
    int i, factorial=1;
    for(i=1; i<=numbers; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}