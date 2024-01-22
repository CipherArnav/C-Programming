#include<stdio.h>
int main()
{
    float x;
    printf("Enter a decimal number:\n");
    scanf("%f",&x);
    int y=x;
    float z = x-y;
    printf("The fractional part of your number is %f",z);
    return 0;
}