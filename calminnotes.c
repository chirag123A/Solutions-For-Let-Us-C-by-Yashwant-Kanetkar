#include<stdio.h>
int CalculateMinNotes(int note)
{
    int count=0;
    while(note>0)
    {
        if(note%2000==0)
        {
            count++;
            note-=2000;
        } 
        else if(note%500==0)
        {
            count++;
            note-=500;
        }
        else if(note%200==0)
        {
            count++;
            note-=200;
        }
        else if(note%100==0)
        {
            count++;
            note-=100;
        }
        else{
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",CalculateMinNotes(n));
}