#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // No. of rows --> i
        for(int j=1;j<=n;j++){   // No. of columns --> j
             if(i==j || (i+j)==n+1) printf("*");
             else printf(" ");
        }
        printf("\n");
    }
   
    return 0;
}