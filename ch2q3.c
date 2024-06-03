#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Angles of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("Valid Triangle");
    }
    else{
        printf("Its a non valid triangle");
    }
    return 0;
}