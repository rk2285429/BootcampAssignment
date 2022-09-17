// Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 0:
            printf("%d is Odd number.",num);
            break;
        case 1:
            printf("Nearest upper odd of %d = ",num);
            num = num+1;
            printf("%d",num);
            break;
    }
}