// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[20];
    int i, j, count;
    printf("Enter a string:-");
    fgets(str,20,stdin);
    for(i=0; str[i]; i++)
    {
        count =0;
        for(j=0; str[j]; j++)
        {
            if(j<i & str[j]==str[i])
            {
                break;
            }
            else if(str[j]==str[i])
            {
                count++;
            }
        }
        if(count != 0)
            printf("%c -> %d \n",str[i],count);
    }
    return 0;
}