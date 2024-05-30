#include<stdio.h> //Coin index finding problem 
void fndcoin(int arr[],int new)
{
    for(int i=0;i<5;i++)
    {
        if(new>arr[i])
        {
            continue;
        }
        else if(new<=arr[i] && (arr[i]!=arr[i+1]))
        {
            printf("%d",i);
            break;
        }
        else if(arr[i]==arr[i+1]){
            printf("%d",-1);
            break;
        }
    }
}
int main()
{
    int arr[5];
    int new;
    for(int i=0;i<4;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&new);
    fndcoin(arr,new);
    return 0;
}