// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two number:- "<<endl;
    cin>>a>>b;
    if(a>b)
        cout<<"Greatest = "<<a<<endl;
    else
        cout<<"Greatest = "<<b<<endl;
    return 0;
}