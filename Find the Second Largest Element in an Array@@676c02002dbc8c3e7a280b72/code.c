// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    if(smax==max){
        printf("-1");
    }
    else{
        printf("%d",smax);
    }

    return 0;
}