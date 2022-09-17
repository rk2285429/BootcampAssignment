// Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Positive or Negative number:-");
    scanf("%d",&num);
    switch(num>0)
    {
        case 0:
            printf("Positive of %d = ",num);
            num = -num;
            printf("%d",num);
            break;
        case 1:
            printf("Negative of %d = ",num);
            num = -num;
            printf("%d",num);
            break;
    }
}