#include<stdio.h>
int main()
{
    int a,b; //a>b
    printf("Enter Dividend\n");
    scanf("%d",&a);
    printf("Enter Divisor\n");
    scanf("%d",&b);

    int q=a/b;
    int r=a-(b*q); // Divisor*Quotient + Remainder = Dividend

    printf("The remainder when %d divided by %d is %d\n",a,b,r);
    return 0;
}