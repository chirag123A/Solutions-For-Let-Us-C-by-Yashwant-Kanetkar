#include<stdio.h>
int main() {

    int x,y;

    printf("Please enter points\n");
    printf("(x,y): \n");
    scanf("%d%d",&x,&y);

    if(x==0&&y!=0) {
        printf("\nThe point lies on Y AXIS.\n");
    }

    else if(x!=0&&y==0) {
        printf("\nThe point lies on X AXIS.\n");
    }

    else if(x==0&&y==0) {
        printf("\nThe point lies at the origin.\n");
    }

    else {
        printf("\nThe point doesn't lie on any axis or at origin.\n");
    }

    return 0;

}