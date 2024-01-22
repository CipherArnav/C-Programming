#include<stdio.h>
int fibo(int a){
    if(a<=2) return 1; // Base case
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int x = fibo(a);
    printf("The %dth element is %d",a,x);

    return 0;

}