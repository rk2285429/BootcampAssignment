// Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
void f1();
void f2();
int main()
{
    return 0;
}
void f1()
{
    int *p;
    int q = 9;
    p = &q;
    printf("q is %d",*p);
}
void f2()
{
    printf("%d",*p);//This is dangling pointer(i.e. Using pointer declared in another function in different function)
}