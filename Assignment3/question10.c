// Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int CP,SP;
    float profit , loss;
    printf("Enter the Cost Price:-");
    scanf("%d",&CP);
    printf("Enter the Selling Price:-");
    scanf("%d",&SP);
    if(SP>CP)
    {
        profit = (SP-CP)*100.0;
        printf("Profit percent is %0.1f%c",profit/CP,'%');
    }
    else
    {
        loss = (CP-SP)*100.0;
        printf("Loss Percent is %0.1f%c",loss/100.0,'%');
    }
    return 0;
}