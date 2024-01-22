#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){ // No. of rows --> i
    for(int q=1;q<=nsp;q++){ // spaces ke liye ek loop
    printf(" ");
    } 
    nsp--;
    for(int j=1;j<=i;j++){ //Number triangle
    printf("%d",j);
    }
    int a=i-1; // extra cheez
    for (int k=1; k<=i-1; k++)
    {
       printf("%d",a);
       a--;
    }
    printf("\n");
    

    }
   
    return 0;
}