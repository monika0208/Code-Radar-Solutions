#include<stdio.h>
#include<limits.h>

void max(int arr[]){
    int max=INT_MIN;
    if(arr[i]>max){
        max=arr[i];
    }
}
int smax=INT_MIN;
void smax(int arr[]){
    if(arr[i]>smax && arr[i]!=max){
        smax=arr[i];
    }
    printf("%d",smax);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    

    return 0;
}