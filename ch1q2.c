#include<stdio.h>
int main() {
    float l,b,area,peri,ca,cr,r;
    printf("Please enter the length of rectangle:");
    scanf("%f",&l);
    printf("\nPlease enter the breadth of rectangle:");
    scanf("%f",&b);
    area=l*b;
    peri=2*(l+b);
    printf("\n\nAREA = %f square cm.\t PERIMETER = %f cm.\n",area,peri);
    printf("\n\nPlease enter the radius of the circle:");
    scanf("%f",&r);
    ca=3.14*r*r;
    cr=2*3.14*r;
    printf("\n\nAREA = %f square cm.\t CIRCUMFERENCE = %f cm.\n",ca,cr);
    return 0;
}