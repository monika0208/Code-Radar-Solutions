#include<stdio.h>

void reverse(int arr[],int n,int a,int b){
    while(a<b){
        int temp=a;
        a=b;
        b=temp;
        a++;
        b--;
    }
}

void rotate(int arr[],int n,int k){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    return 0;
}