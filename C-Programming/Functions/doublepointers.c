#include<stdio.h>
int main(){
int a=25;
int *x=&a; // int* -> ka address store karta hai.
int **y=&x; // int** -> int* ka address store karta hai.

// %p se address print hota hai
printf("%d\n",a);
printf("%d\n",*x);
printf("%d\n",**y);
return 0;

}