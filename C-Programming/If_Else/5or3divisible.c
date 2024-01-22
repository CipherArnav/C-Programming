#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        printf("The number is divisible 5 or 3.\n");
    }else{
        printf("The number is not divisible by 5 or three.");
    }
    return 0;
}