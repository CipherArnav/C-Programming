#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int product=1;
    for(int i=1;i<=n;i++){
    product= product*i;
    }
    printf("The factorial is %d \n",product);
    return 0;
}
