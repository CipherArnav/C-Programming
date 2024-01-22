#include<stdio.h>
int stair(int a){
    if(a<=2) return a; // Base case
    return stair(a-1)+stair(a-2);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int x = stair(a);
    printf("Total no. of ways is %d",x);

    return 0;

}