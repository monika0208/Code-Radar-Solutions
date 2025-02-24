// Your code here...
#include<stdio.h>


void min_max(int arr[];int n;int *min;int *max){
    *min=arr[0];
    *max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]< *min){
            *min=arr[i];
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min,max;
    min_max(arr;n;&min;&max);
    printf("%d ",min);
    printf("%d",max);

    return 0;
}