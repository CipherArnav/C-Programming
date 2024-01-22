#include<stdio.h>
int main(){
    int n,a,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the value of pair sum:");
    scanf("%d",&a);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==a){
                printf("(%d,%d)\n",arr[i],arr[j]);
               count++;
            }
            
        }
    }
    
   printf("%d ",count);
    return 0;

}