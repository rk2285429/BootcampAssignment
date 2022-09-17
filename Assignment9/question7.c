// Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter your Units:-");
    scanf("%d",&units);
    switch(units)
    {
        case 1 ... 50:
            bill = (units*0.50*1.20);
            printf("Bill = Rs%0.1f",bill);
            break;
        case 51 ... 100:
            units = units-50;
            bill = 25+(units*0.75*1.20);
            printf("Bill = Rs%0.1f",bill);
            break;
        case 151 ... 250:
            units = units-150;
            bill = 25+75+(units*1.20*1.20);
            printf("Bill = Rs%0.1f",bill);
            break;
        default:
            units = units-250;
            bill = 25+75+120+(units*1.50*1.20);
            printf("Bill = Rs%0.1f",bill);
            break; 
    }
}