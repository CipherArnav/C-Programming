#include<stdio.h>
int maze2(int a,int b){
    int rightWays=0;
    int downWays=0;
    if(a==1 && b==1) return 1;
    if(a==1){ //cannot go down
        rightWays +=maze2(a,b-1);
    } 
    if(b==1){ // cannot go right
      downWays += maze2(a-1,b);
      if(a>1 && b>1) {
        rightWays +=maze2(a,b-1);
        downWays += maze2(a-1,b);
      }
      int totalWays = rightWays+downWays;
      return totalWays;
    }
}
int main(){
    int a;
    printf("Enter number of rows of maze:");
    scanf("%d",&a);
    int b;
    printf("Enter number of columns of maze:");
    scanf("%d",&b);
    int numOfways = maze2(a,b);
    printf("%d",numOfways);
    return 0;
}