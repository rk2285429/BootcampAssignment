// Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x;
    int *p;
    x =5;
    p = &x;
    // value of x without using pointer
    printf("x = %d \n",x);
    // value of x using pointer variable and dereferencing operator
    printf("x = %d \n",*p);
    //Adress of x using pointer
    printf("address of x = %d \n",p);
    //Address of x using adress operator
    printf("Address of x = %d \n",&x);
    //Address of x using adress operator in hexadecimal
    printf("Address of x in Hexadecimal = %p \n",&x);
    return 0; 
}