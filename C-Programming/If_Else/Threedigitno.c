#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
if (n>99 && n<1000)
{
    printf("It is a three digit number.\n");
}else{
    printf("It is not a three digit number.\n");
}
return 0;

}