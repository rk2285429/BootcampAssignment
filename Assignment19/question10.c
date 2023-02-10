// Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0, j, choices, n=0;
    char user[20][20], password[20][20], username[20], pass[20], nul[3];
    while(i!=3)
    {
        printf("Enter the following choices:- \n");
        printf("1.Sign up\n");
        printf("2.Sign in\n");
        printf("3.Exit\n");
        scanf("%d",&choices);
        fflush(stdin);
        switch(choices)
        {
            case 1:
                printf("Enter your user name:- \n");
                gets(user[n]);
                printf("Enter your password:-\n");
                gets(password[n]);
                n++;
                break;
            case 2:
                printf("Enter your username:- \n");
                gets(username);
                for(j=0; j<20; j++)
                {
                    if(strcmp(user[j],username)==0)
                    {
                        printf("Enter password:- \n");
                        gets(pass);
                        if(strcmp(password[j],pass)==0)
                        {
                            printf("Welcome, %s\n",username);
                        }
                        else
                        {
                            printf("Wrong Password...\n");
                        }
                        break;
                    }
                }
                if(j==20)
                {
                    printf("Invalid Username?\n");
                }
                break;
            case 3:
                i=3;
                break;
            default:
                printf("Wrong Input...\n");
                break;
        }
    }
    return 0;
}