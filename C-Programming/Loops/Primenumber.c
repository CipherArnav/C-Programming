#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0;
    for(i=2; i<=(n-1); i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
        
    }if(n==1){
        printf("1 is neither prime nor composite");
    }else if(a==0){
        printf("%d is prime number\n",n);
    }else{
        printf("%d is composite number\n",n);
    }
    return 0;
}