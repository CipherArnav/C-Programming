#include<stdio.h>
int main()
{
    int a; // dabba ban gya
    printf("Enter a number:\n");
    scanf("%d",&a); // dabba me value dal diya

    if (a%5==0) 
    {
        printf("%d is divisible by 5.\n",a);
    }
    else // odd
    {
        printf("%d is not divisible by 5.\n",a);
    }
    return 0;

}