// Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    char smallest, swap;
    int i, j;
    char str[20];
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    for(i=0; str[i]; i++)
    {
        smallest = str[i];
        for(j=i; str[j]; j++)
        {
            if(smallest > str[j])
            {
                swap = str[j];
                str[j] = smallest;
                smallest = swap;
            }
        }
        str[i]=smallest;
    }
    printf("Sorted string => %s",str);
    return 0;
}