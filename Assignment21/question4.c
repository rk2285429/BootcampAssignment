// Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input();
void display(struct employee*);
int max_sal(struct employee[]);
int main()
{
    int i, value;
    struct employee e[10];
    for(i=0; i<10; i++)
    {
        e[i]=input();
    }
    value = max_sal(e);
    printf("Employee %s with id %d have maximum salary.",e[value].name,e[value].id);
    return 0;
}
int max_sal(struct employee e[10])
{
    int i, value;
    float max =0;
    for(i=0; i<10; i++)
    {
        if(e[i].salary>max)
        {
            max = e[i].salary;
            value = i;
        }
    }
    return value;
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