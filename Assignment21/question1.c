// Define a structure Employee with member variables id, name, salary
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee e1;
    e1.id = 1;
    strcpy(e1.name,"Ranjan Kumar");
    e1.salary = 5000.0;
    printf("Employee details are:- \n%d\n%s\n%0.1f",e1.id,e1.name,e1.salary);
    return 0;
}
