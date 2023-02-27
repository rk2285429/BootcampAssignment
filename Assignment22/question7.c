// Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
void memo();
void f();
int* r();
int main()
{
    int *q;
    memo();
    f();
    q = r();
    return 0;
}
//Function to demonstrate memory leak
void memo()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    printf("Enter a number:- \n");
    scanf("%d",p);    
    printf("The number is %d\n",*p);
    //Niether deleting memory address pointed by p Niether returning that address.This is memory leak
}
//function to free dynamic memory
void f()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    printf("Enter a number:- \n");
    scanf("%d",p);
    printf("The number is %d\n",*p);
    free(p);  //By using free() memory pointed by p will be free for further use.
}    
//function to return memory
int* r()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    printf("Enter a number:- \n");
    scanf("%d",p);
    printf("The number is %d\n",*p);
    return p;  //This will return memory address pointed by p so that it can be further be used with values.
}