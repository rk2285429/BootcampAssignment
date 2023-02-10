// Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input();
void display(struct employee*);
int main()
{
    struct employee e1;
    e1 = input();
    display(&e1);
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
void display(struct employee *e)
{
    printf("Employee id-%d\nEmployee name-%sEmployee salary-%0.1f",e->id,e->name,e->salary);
}