#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,count=4;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d=n%10;
        rev+=d*pow(10,count);
        n/=10;
        count--;
    }
    printf("%d",rev);
}