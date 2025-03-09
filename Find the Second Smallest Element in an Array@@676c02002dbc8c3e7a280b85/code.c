#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    int min_m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min_m && arr[i]!=min){
            min_m=arr[i];
        }
    }
    printf("%d",min_m);
    return 0;
}