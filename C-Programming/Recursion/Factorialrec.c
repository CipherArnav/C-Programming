#include<stdio.h>
int factorial(int a){
    if(a==1 || a==0) return 1; // Base case
    return a*factorial(a-1);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int fact = factorial(a);
    printf("The factorial of %d is %d",a,fact);

    return 0;

}