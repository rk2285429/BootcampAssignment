// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
int main()
{
    int i, j, digits, dots;
    char str[5][30];
    printf("Enter 5 IP addresses:- \n");
    for(i=0; i<5; i++)
    {
        fgets(str[i],20,stdin);
    }
    printf("Valid IP addresses are:- \n"); 
    for(i=0; i<5; i++)
    {
        digits=0;
        dots=0;
        for(j=0; str[i][j]; j++)
        {
            if((str[i][j]>='0' & str[i][j]<='9')||str[i][j]=='.')
            {
                if(str[i][j]>='0'&str[i][j]<='9')
                {
                    digits++;
                }
                else
                {
                    dots++;
                }
            }
            else
            {
                break;
            }
        }
        if(digits<=12 & dots==3)
        {
            printf("%s",str[i]);
        }
    }
    return 0;
}