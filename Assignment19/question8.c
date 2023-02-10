// Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include<stdio.h>
#include<string.h>
int main()
{
    int first, second, minimum, i;
    char str1[20], str2[20];
    char str[10][20] = {"my","name","is","ranjan","kumar",",","my","father","is","sunil",};
    printf("Enter first word:- ");
    gets(str1);
    printf("Enter second word:- ");
    gets(str2);
    for(i=0; i<10; i++)
    {
        if(strcmp(str1,str[i])==0)
        {
            strcpy(str1," ");
            first=i;
        }
        else if(strcmp(str2,str[i])==0)
        {
            second=i;
        }
    }
    if((second-first)>(i-second))
    {
        minimum=i-second;
    }
    else
    {
        minimum=second-first;
    }
    printf("Minimum distance between %s and %s is %d",str1,str2,minimum-1);
    return 0;
}