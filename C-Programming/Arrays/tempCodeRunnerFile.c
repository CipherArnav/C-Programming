#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("The sum of your array elements are %d",sum);
    return 0;

}