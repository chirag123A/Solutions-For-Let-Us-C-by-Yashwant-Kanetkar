#include<stdio.h>
#include<math.h>
int main()
{
    int n,res=0;
    scanf("%d",&n);
    int c=0;
    while(n>0)
    {
        int d=n%10;
        res+=(d*pow(10,(4-c)));
        c++;
        n=n/10;
    }
    printf("%d",res);
}