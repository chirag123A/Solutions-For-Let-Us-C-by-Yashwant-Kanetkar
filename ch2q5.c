#include<stdio.h>
int main() {

    int l,b,area,peri;

    printf("Please enter the length and bredth of a rectangle: ");
    scanf("%d %d",&l,&b);

    area=l*b;
    peri=2*(l+b);

    if(area>peri) {
    printf("\nThe Area of Rectangle is GREATER then it's perimeter.\n");
    }

    else {
    printf("\nThe area of Rectangle is NOT GREATER then it's perimeter.\n");
    }

    return 0;

}