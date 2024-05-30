#include<stdio.h>
int main()
{
    int arr[3][4];
    float avg[3],sum[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
            sum[i]+=(arr[i][j]);
            avg[i]=sum[i]/4;
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%f ",avg[i]);
    }
    return 0;
}
