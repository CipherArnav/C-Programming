#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first integer\n");
    scanf("%d",&a);
    printf("Enter the second integer\n");
    scanf("%d",&b);
    printf("Enter the third integer\n");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d is greatest\n",a);
    }if(b>a && b>c){
        printf("%d is greatest\n",b);
    }if(c>a && c>b){
        printf("%d is greatest\n",c);
    }
    return 0;

    
}