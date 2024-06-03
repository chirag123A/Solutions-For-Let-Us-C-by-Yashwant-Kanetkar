#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter ages: ");
    scanf("%d %d %d",&a1,&a2,&a3);
    if((a1<a2) && (a1<a3))
    {
        printf("%d",a1);
    }
    else if((a2<a1) && (a2<a3))
    {
        printf("%d",a2);
    }
    else{
        printf("%d",a3);
    }
}