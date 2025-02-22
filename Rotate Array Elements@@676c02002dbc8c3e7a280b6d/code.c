#include<stdio.h>

void reverse(int arr[],int a,int b){
    while(a<b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    a++;
    b--;
    }

}


void rotate(int arr[],int n;int k){
    k=k%2;
    reverse(arr,0,n-1);
    reverse1(arr,0,k-1);
    reverse(arr,k,n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}