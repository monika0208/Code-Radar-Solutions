// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=__INT_MAX__;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
}