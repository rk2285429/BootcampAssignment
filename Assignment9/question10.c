// C program to find all roots of a quadratic equation using switch case 
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, D;
    float root1, root2 , real, imag;
    printf("Enter coefficient(a,b,c) of equation:-");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b - 4*a*c;
    switch(D>=0)
    {
        case 0:
            D = 4*a*c - b*b;
            real = -b/2*a;
            imag = -sqrt(D)/2*a;
            printf("Roots are Imaginary");
            printf("\nRoots are:- %0.1f+%0.1fi & %0.1f-%0.1fi",real,imag,real,imag);
            break;
        case 1:
            switch(D==0)
            {
                case 1:
                    root1 = -b/2*a;
                    root2 = root1;
                    printf("Roots are Real and Equal");
                    printf("\nRoots are:- %0.1f & %0.1f", root1,root2);
                    break;
                case 0:
                    root1=(-b+sqrt(D))/2*a;
                    root2=(-b-sqrt(D))/2*a;
                    printf("Roots are Real and Unequal");
                    printf("\nRoots are:- %0.1f & %0.1f", root1,root2);
                    break;
            }
            break;
    }
}