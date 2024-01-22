#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int nst=1; //Number of stars
    int nsp=n-1; // Number of spaces
    for(int i=1;i<=n;i++){ // No. of rows --> i
    for (int j = 0; j<=nsp; j++){ // for spaces
        printf(" ");
    } 
    nsp=nsp-1;
    for(int j=1;j<=nst;j++){
        printf("*");
    }
    nst=nst+2;
    printf("\n");

    }
   
    return 0;
}