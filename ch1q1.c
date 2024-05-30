#include<stdio.h>
int main()
{
    float far,c=0;
    printf("Temperature in Fahrenheit is: ");
    scanf("%f",&far);
    c=5*(far-32)/9;
    printf("Temperature in Celsius is: %f",c);
    return 0;
}