#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("The number is divisible by both 5 and 3.\n");
    }else{
        printf("The number is not divisible.");
    }
    return 0;
}