#include<stdio.h>
int main(){
    int n,sumeven=0,sumodd=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    for(int i=0;i<n;i++)
    if(i%2==0){
        sumeven += arr[i];
    }else {
    sumodd += arr[i];
    }
   printf("%d ",sumeven-sumodd);
    return 0;

}