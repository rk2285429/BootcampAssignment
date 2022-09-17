// Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include<stdio.h>
int main()
{
    int a, b, c, exit=1;
    char choice;
    while(exit==1)
    {
        printf("\n---------------------");
        printf("\nEnter your choice:-");
        printf("\na. Check isosceles triangle");
        printf("\nb. Check right angled triangle");
        printf("\nc. Check equilateral triangle");
        printf("\nd. Exit");
        printf("\nEnter Here:- ");
        fflush(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
            case 'a':
                printf("Enter three sides of triangle:- ");
                scanf("%d %d %d",&a,&b,&c);
                if(a+b>c||b+c>a||c+a>b)
                {
                    printf("Triangle is an Isosceles Triangle");
                }
                else
                {
                    printf("Triangle is not Isosceles Triangle");
                }
                break;
            case 'b':
                printf("Enter three sides of triangle:- ");
                scanf("%d %d %d",&a,&b,&c);
                if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
                {
                    printf("Triangle is Right angled triangle");
                }
                else
                {
                    printf("Triangle is not a Right angled triangle");
                }
                break;
            case 'c':
                printf("Enter three sides of triangle:- ");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b & b==c)
                {
                    printf("Triangle is Equilateral Triangle");
                }
                else
                {
                    printf("Triangle is not Equilateral Triangle");
                }
                break;
            case 'd':
                exit =0;
                break;
            default:
                printf("Wrong Input");
                break;
        }
    }
    return 0;
}