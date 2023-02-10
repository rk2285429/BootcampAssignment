// Write a function to sort employees according to their names [refer structure from
// question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input();
void display(struct employee*);
void sort(struct employee*);
int main()
{
    int i, value;
    struct employee e[10];
    for(i=0; i<10; i++)
    {
        e[i]=input();
    }
    sort(e);

    for(i=0; i<10; i++)
    {
        display(&e[i]);
        printf("\n");
    }
    return 0;
}
void sort(struct employee e[10])
{
    int i, j;
    struct employee min;
    struct employee swap;
    for(i=0; i<10; i++)
    {  
        min = e[i]; 
        for(j=i; j<10; j++)
        {
            if(strcmp(min.name,e[j].name)>0)
            {
                swap=min;
                min=e[j];
                e[j]=swap;
            }
        }
        e[i]=min;
    }
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