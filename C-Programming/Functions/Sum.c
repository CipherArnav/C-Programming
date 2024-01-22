#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a;
    printf("Enter the first number\n");
    scanf("%d",&a);
    
    int b;
    printf("Enter the second number\n");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum is equal to %d",sum);
    return 0;

}
