#include<stdio.h>
int main()
{
    int a; // dabba ban gya
    printf("Enter a number:\n");
    scanf("%d",&a); // dabba me value dal diya

    if (a%2==0) //even
    {
        printf("%d is an even number.\n",a);
    }
    else // odd
    {
        printf("%d is an odd number.\n",a);
    }
    return 0;

}