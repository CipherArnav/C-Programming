#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max =arr[0];
   for(int i=0;i<n;i++){
   if(max<arr[i]){
   max=arr[i];
   }
}
   printf("Mxximum number present in the array is %d",max);

    return 0;

}