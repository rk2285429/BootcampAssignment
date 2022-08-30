// WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area 
// & R with radius.

#include<stdio.h>
int main(){
    int radius,area;
    printf("Enter the radius of Circle:-");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    printf("Area of circle is %d having the radius %d",area,radius);
    return 0;
}