#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the co-ordinates\n");
    scanf("%d %d", &x,&y);

    if (x==0 && y==0)
    {
        printf("The point is at origin.");
    }else if(x==0){
        printf("The point is at y-axis.");
    }else if (y==0)
    {
        printf("The point is at x-axis.");
    }else{
        printf("The point does not lie on x or y axis.");
    }
    return 0;
    
    
}