// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input();
int main()
{
    struct employee e1;
    e1 = input();
    printf("Emloyees details:- \n1.Id - %d\n2.Name-%s3.salary-%0.3f",e1.id,e1.name,e1.salary);
    return 0;
}
struct employee input()
{
    struct employee e;
    printf("Enter employee id:- \n");
    scanf("%d",&e.id);
    fflush(stdin);
    printf("Enter employee name:- \n");
    fgets(e.name,20,stdin);
    printf("Enter employee salary:- \n");
    scanf("%f",&e.salary);
    return e;
}