#include<stdio.h>
#include<limits.h>

void max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }}
}
void smax(int arr[],int n){
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]>smax && arr[i]!=max){
        smax=arr[i];
    }}
    printf("%d",smax);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    smax(arr,n);

    

    return 0;
}