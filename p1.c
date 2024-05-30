#include<stdio.h>
int main()
{
    int arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter number of %d subject: ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int agg=sum;
    float per=agg/5;
    printf("Aggregate score of student is: %d\n",agg);
    printf("Percentage of student is: %f",per);
    return 0;
}