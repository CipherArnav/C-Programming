#include<stdio.h>
int main()
{
    float sp,cp,a,b;
    printf("Enter the cost price:\n");
    scanf("%f",&cp);
    printf("Enter the selling price:\n");
    scanf("%f",&sp);
    a = sp-cp;
    b = cp-sp;
    if(sp>cp){
        printf("You gained a profit of %fRs\n",a);
    }
    if(sp<cp){
        printf("You are in loss of %fRs\n",b);
    }
    if(sp==cp)
    {
        printf("Neither gain nor loss");
    }
    return 0;
    

}