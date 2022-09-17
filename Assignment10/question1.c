// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    int radius;
    printf("Enter the radius of Circle:-");
    scanf("%d",&radius);
    float p = area(radius);
    printf("Area of Circle = %0.1f",p);
    return 0;
}
float area(int radius)
{
    return 3.14*radius*radius;
}