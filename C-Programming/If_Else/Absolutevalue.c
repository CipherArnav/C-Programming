#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a<0)
    {
       a = a*(-1);
    }
    printf("Absolute value is %d\n",a);
}