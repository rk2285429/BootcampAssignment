// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include<stdio.h>
struct marks
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct marks input();
float percent(struct marks);
int main()
{
    float per;
    struct marks m[5];
    for(int i=0; i<5; i++)
    {
        m[i] = input();
        per = percent(m[i]);
        printf("Percentage of %s with Roll %d = %0.2f\n",m[i].name,m[i].roll_no,per);
    }
    return 0;
}
float percent(struct marks m)
{
    int sum;
    float per;
    sum = m.chem_marks+m.maths_marks+m.phy_marks;
    per = (sum*100.0)/300.0;
    return per;
}
struct marks input()
{
    struct marks m;
    printf("Enter the roll no-\n");
    scanf("%d",&m.roll_no);
    printf("Enter name of student-\n");
    fflush(stdin);
    fgets(m.name,20,stdin);
    printf("Enter chemestry marks:-\n");
    scanf("%d",&m.chem_marks);
    printf("Enter maths marks-\n");
    scanf("%d",&m.maths_marks);
    printf("Enter physics marks-\n");
    scanf("%d",&m.phy_marks);
    return m;
}