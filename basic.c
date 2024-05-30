#include<stdio.h>
int main()
{
    int num=10;
    char star= '*';
    for(int i =0;i<num;i++)
    {
        if(num>i)
        {
            printf("%c \n",star);
        }
    }
    return 0;
}