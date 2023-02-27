// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, q=1, sum=0, j=1, i=0;
    p = (int*)malloc(sizeof(int));
    printf("Enter the elements of array(NOTE :- Enter 0 to end the sum):- \n");
    while(q!=0)
    {
        scanf("%d+",&q);
        j++;
        p = (int*)realloc(p,sizeof(int));
        p[i] = q;
        sum = sum+*(p+i);
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}