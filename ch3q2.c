#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    while(i<=500)
    {
        int n=i;
        int sum=0;
        while(n!=0)
        {
            int d=n%10;
            sum=sum+(d*d*d);
            n=n/10;
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
        i++;
    }
    return 0;
}