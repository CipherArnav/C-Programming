#include<stdio.h>
int main ()
{
    int n;
    printf("Enter your percentage:");
    scanf("%d",&n);

    if (n>90 && n<=100)
    {
        printf("Excellent\n");
    }else if(n>80 && n<=90){
        printf("Very Good\n");
    }else if (n>70 && n<=80)
    {
        printf("Good\n");
    }else if(n>60 && n<=70){
        printf("Can do better\n");
    }else if (n>50 && n<=60)
    {
        printf("Average\n");
    }else if(n>=40 && n<=50){
        printf("Below average\n");
    }else {
        printf("Fail\n");
    }
    return 0;
    
    
    
}