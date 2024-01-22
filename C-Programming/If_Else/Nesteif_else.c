#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if(n%5==0){
        if(n%3==0){
            printf("The number is divisible by both 5 and 3\n");
        }else
        {
            printf("The number is not divisible by 5 and 3\n");
        }
    }else
    {
        printf("The number is not divisible by 5 and 3\n");
    }
        
    return 0;
}