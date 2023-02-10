// Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed.
#include<stdio.h>
#include<string.h>
int main()
{
    int i, num, fact=1, j;
    char str1[20];
    char str[10][20]={"rk2285429","ranjankumar","kumarranjan","beast","rock","ranjan67","kumar98","killerji","killer67598","katilana"};
    printf("Enter your user-name(In small letter):- \n");
    gets(str1);
    for(i=0; i<10; i++)
    {
        if(strcmp(str1,str[i])==0)
        {
            printf("Enter a number to find its factorial:- \n");
            scanf("%d",&num);
            for(j=num; j>0; j--)
            {
                fact = fact*j;
            }
            printf("Factorial of %d is %d",num,fact);
            break;
        }
    }
    if(i==10)
        {
            printf("Invalid user name.");
        }
    return 0;
}