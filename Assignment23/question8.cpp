// Write a C++ program to swap values of two int variables without using third variable.
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers:- \n";
    cin>>a>>b;
    cout<<"a= "<<a<<" and b= "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping a= "<<a<<" and b= "<<b<<endl;
    return 0;
}