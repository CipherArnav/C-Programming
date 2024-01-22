#include<stdio.h>
int sum(int a){
    if(a==1 || a==0) return 1; // Base case
    return a+sum(a-1);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int fact = sum(a);
    printf("The sum is %d",fact);

    return 0;

}