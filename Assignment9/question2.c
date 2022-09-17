// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
int main()
{
    int num1, num2, exit=1;
    char choice;
    while(exit !=0)
    {
        printf("\nEnter your choice:-");
        printf("\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");
        printf("\nEnter Here:- ");
        fflush(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
            case 'a':
                printf("Enter two numbers:- ");
                scanf("%d %d",&num1,&num2);
                printf("Sum = %d",num1+num2);
                break;
            case 'b':
                printf("Enter two numbers:- ");
                scanf("%d %d",&num1,&num2);
                printf("Difference = %d",num1-num2);
                break;
            case 'c':
                printf("Enter two numbers:- ");
                scanf("%d %d",&num1,&num2);
                printf("Product = %d",num1*num2);
                break;
            case 'd':
                printf("Enter two numbers:- ");
                scanf("%d %d",&num1,&num2);
                printf("Division = %d",num1/num2);
                break;
            case 'e':
                exit = 0;
                break;
            default:
                printf("Invalid Choice");
        }
    }
}