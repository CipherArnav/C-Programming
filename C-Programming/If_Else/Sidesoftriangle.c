#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first integer\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second integer\n");
    scanf("%d",&b);
    int c;
    printf("Enter the third integer\n");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("They will form a triangle\n");
    }else{
        printf("No triangle will form");
    }
    return 0;
}
