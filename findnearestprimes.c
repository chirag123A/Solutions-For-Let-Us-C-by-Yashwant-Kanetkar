#include<stdio.h>
#include<math.h>
int squarenumbers(int *arr,int n)
{
    int large=0,small=0;
    for(int i=0;i<n;i++)
    {
        arr[i]=pow(arr[i],2);
    }
    for(int i=0;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
        else if(small>arr[i])
        {
            small=arr[i];
        }
    }
    int diff=large-small;
    for(int i=2;i<sqrt(diff);i++)
    {
        if(diff%i==0)
        {
            diff=diff+1;
        }
        else{
            return diff;
            break;
        }
    }
}
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",squarenumbers(arr,4));
}