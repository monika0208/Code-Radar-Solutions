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
    printf("%d",max);
    int smax;

    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]!=max){
            smax=max;
            
        }
    }
    printf("%d",smax);

    return 0;
}