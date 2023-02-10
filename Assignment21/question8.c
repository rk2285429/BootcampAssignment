// Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    int class;
    char section;
};
struct student input();
void display(struct student*);
int main()
{
    int i, value;
    struct student e[10];
    for(i=0; i<10; i++)
    {
        e[i]=input();
    }
    printf("-----------------------------------------------Here We Go-----------------------------------------------");
    for(i=0; i<10; i++)
    {
        display(&e[i]);
        printf("\n");
    }
    return 0;
}
struct student input()
{
    struct student e;
    printf("Enter Student Roll number:- \n");
    scanf("%d",&e.id);
    fflush(stdin);
    printf("Enter Student name:- \n");
    fgets(e.name,20,stdin);
    printf("Enter Student class:- \n");
    scanf("%d",&e.class);
    fflush(stdin);
    printf("Enter the section of student:-");
    scanf("%c",&e.section);
    return e;
}
void display(struct student *e)
{
    printf("Student Roll number-%d\nStudent name-%sStudent class-%d(%c)",e->id,e->name,e->class,e->section);
}