#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Ram's age:\n");
    scanf("%d",&a);
    printf("Enter Shyam's age:\n");
    scanf("%d",&b);
    printf("Enter Ajay's age:\n");
    scanf("%d",&c);

    if (a<b && a<c)
    {
        printf("Ram is youngest.\n",a);
    }if(b<a && b<c){
        printf("Shyam is youngest.\n",b);
    }if(c<a && c<b){
        printf("Ajay is youngest.\n",c);
    }
    return 0;

    
}