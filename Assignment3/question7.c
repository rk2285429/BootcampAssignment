// Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots.
#include<stdio.h>
int main(){
    int var1,var2,const1,discriminant;
    printf("Enter the first variable of quedratic equation:-");
    scanf("%d",&var1);
    printf("Enter the second variable of quedratic equation:-");
    scanf("%d",&var2);
    printf("Enter the Constant of equation:-");
    scanf("%d",&const1);
    discriminant = (var2*var2) - (4*var1*const1);
    printf("%d \n",discriminant);
    if(discriminant==0)
    {
        printf("The roots of %dx^2+%dx+%d are Real and Equal",var1,var2,const1);
    }
    else if(discriminant>0)
    {
        printf("The roots of %dx^2+%dx+%d are Real and Distinct",var1,var2,const1);
    }
    else
    {
        printf("The roots of %dx^2+%dx+%d are Imaginary",var1,var2,const1);
    }
    return 0;
}