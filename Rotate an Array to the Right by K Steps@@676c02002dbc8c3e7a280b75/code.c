// Your code here...
#include<stdio.h>


void reverse(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    a++;
    b--;

}

void reversef(){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1),
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

    reversef(arr);


}